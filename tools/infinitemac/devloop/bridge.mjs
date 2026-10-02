// Dev-loop bridge: keeps ONE InfiniteMac (Mac OS in wasm) session alive in Chromium and
// exposes a tiny localhost HTTP API so files can be pushed in / pulled out and the
// emulator driven between edits — no disk rebuild or 2-minute reboot per iteration.
//
//   node tools/infinitemac/devloop/bridge.mjs [--disk "Warlords II"] [--base URL] [--port 3200] [--headless] [--pos x,y]
//
// File transfer rides InfiniteMac's built-in SheepShaver extfs volume "The Outside World":
//   push: host path -> `ditto -c -k --sequesterRsrc` zip (keeps rsrc fork + type/creator)
//         -> synthetic drop on the emulator -> appears in "The Outside World:Downloads".
//   pull: anything copied (in the Mac) into "The Outside World:Uploads" is zipped by
//         InfiniteMac and downloaded; we catch it and `ditto -x -k` it into .devloop/pulled/.
//
// Endpoints (all GET, see wl.sh): /status /shot?name= /click?x=&y=[&dbl=1] /key?k= /type?t=
//   /push?path= /pulled /reload[?disk=] /eval?js= /front /quit
import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
import http from 'http';
import fs from 'fs';
import path from 'path';
import { execFileSync } from 'child_process';
const { chromium } = pkg;

const argv = process.argv.slice(2);
const opt = (k, d) => { const i = argv.indexOf(k); return i >= 0 ? argv[i + 1] : d; };
let disk = opt('--disk', 'Warlords II');
const PORT = +opt('--port', 3200);
const headless = argv.includes('--headless');
const machine = opt('--machine', 'Power Macintosh 9500');
// Default = the self-contained warlords-offline/ bundle (python3 warlords-offline/serve.py 8766 — 8765 is often taken).
// Use --base http://localhost:3127 for the infinite-mac vite dev server (has the Remake disk slot).
const BASE = opt('--base', 'http://localhost:8766');

const REPO = path.resolve(path.dirname(new URL(import.meta.url).pathname), '../../..');
const WORK = path.join(REPO, '.devloop');
const SHOTS = path.join(WORK, 'shots', String(PORT)), PULLED = path.join(WORK, 'pulled'), TMP = path.join(WORK, 'tmp');
for (const d of [SHOTS, PULLED, TMP]) fs.mkdirSync(d, { recursive: true });

const log = [];
const note = s => { const l = `[${new Date().toISOString().slice(11, 19)}] ${s}`; log.push(l); if (log.length > 300) log.shift(); console.log(l); };

// --pos x,y places the (headed) window, e.g. original and remake side by side to watch.
const pos = opt('--pos', null);
const winArgs = pos ? [`--window-position=${pos}`, '--window-size=1040,900'] : [];
const browser = await chromium.launch({ headless, args: ['--autoplay-policy=no-user-gesture-required', ...winArgs] });
const ctx = await browser.newContext({ viewport: { width: 1024, height: 768 }, acceptDownloads: true });
// Audio tap: every node connected to an AudioContext's destination is also
// routed into a ScriptProcessor that keeps the PCM (and the context time of
// each block) while recording is on. /audio?cmd=start|stop&name=x writes
// .devloop/audio/<port>/<name>.wav (mono mix, context sample rate).
await ctx.addInitScript(() => {
  const rec = window.__wlrec = { on: false, blocks: [], sr: 0, t0: 0 };
  const orig = AudioNode.prototype.connect;
  const taps = new WeakMap();
  AudioNode.prototype.connect = function (dest, ...rest) {
    const r = orig.call(this, dest, ...rest);
    try {
      if (dest instanceof AudioDestinationNode && !taps.has(this)) {
        const ac = this.context;
        const sp = ac.createScriptProcessor(4096, 2, 2);
        sp.onaudioprocess = e => {
          if (!rec.on) return;
          const ib = e.inputBuffer, n = ib.length, m = new Float32Array(n);
          for (let c = 0; c < ib.numberOfChannels; c++) {
            const d = ib.getChannelData(c);
            for (let i = 0; i < n; i++) m[i] += d[i] / ib.numberOfChannels;
          }
          rec.sr = ib.sampleRate;
          rec.blocks.push({ t: e.playbackTime, d: m });
        };
        orig.call(this, sp); orig.call(sp, ac.destination);
        taps.set(this, sp);
      }
    } catch (e) {}
    return r;
  };
});
let page, aborted = false, bootedAt = 0;

async function open(d) {
  disk = d || disk; aborted = false;
  if (page) await page.close().catch(() => {});
  page = await ctx.newPage();
  page.on('console', m => { const t = m.text(); if (/Aborted|out of bounds|RuntimeError/i.test(t)) { aborted = true; note('EMULATOR ERROR: ' + t.slice(0, 200)); } });
  page.on('pageerror', e => { if (/Aborted|bounds/i.test(String(e))) { aborted = true; note('PAGE ERROR: ' + String(e).slice(0, 200)); } });
  page.on('download', async dl => {
    const name = dl.suggestedFilename();
    const zip = path.join(TMP, name);
    await dl.saveAs(zip);
    const dest = path.join(PULLED, name.replace(/\.zip$/, ''));
    fs.rmSync(dest, { recursive: true, force: true });
    // InfiniteMac's zip = data files + __MACOSX AppleDouble; ditto restores forks/type/creator.
    // Entries sit at the zip root (no "<name>/" prefix), so extract INTO dest.
    try { execFileSync('ditto', ['-x', '-k', '--sequesterRsrc', zip, dest]); note(`pulled -> ${dest}`); }
    catch (e) { note(`pull unzip failed (${e.message}); raw zip at ${zip}`); }
  });
  const url = `${BASE}/embed?disk=${encodeURIComponent(disk)}&machine=${encodeURIComponent(machine)}&infinite_hd=false&saved_hd=false`;
  note(`booting "${disk}" -> ${url}`);
  bootedAt = Date.now();
  await page.goto(url, { waitUntil: 'domcontentloaded', timeout: 60000 }).catch(e => note('goto: ' + e.message));
}

async function push(p) {
  if (!fs.existsSync(p)) throw new Error('no such path: ' + p);
  const base = path.basename(p);
  const zip = path.join(TMP, base + '.zip');
  fs.rmSync(zip, { force: true });
  // Zip relative to the parent so entries are "<base>" / "<base>/..." — InfiniteMac then
  // drops the item directly into Downloads instead of nesting it in a "<base>" folder.
  const isDir = fs.statSync(p).isDirectory();
  execFileSync('ditto', ['-c', '-k', '--sequesterRsrc', ...(isDir ? ['--keepParent'] : []), base, zip], { cwd: path.dirname(p) });
  const b64 = fs.readFileSync(zip).toString('base64');
  await page.evaluate(({ b64, name }) => {
    const bin = Uint8Array.from(atob(b64), c => c.charCodeAt(0));
    const dt = new DataTransfer();
    dt.items.add(new File([bin], name, { type: 'application/zip' }));
    const target = document.querySelector('canvas') || document.body;
    for (const type of ['dragenter', 'dragover', 'drop'])
      target.dispatchEvent(new DragEvent(type, { bubbles: true, cancelable: true, dataTransfer: dt }));
  }, { b64, name: base + '.zip' });
  note(`pushed ${p} -> The Outside World:Downloads:${base}`);
  return base;
}

async function shot(name) {
  const f = path.join(SHOTS, (name || `shot_${Date.now()}`) + '.png');
  await page.screenshot({ path: f });
  return f;
}

await open();

http.createServer(async (req, res) => {
  const u = new URL(req.url, 'http://x'), q = k => u.searchParams.get(k);
  const reply = (code, body) => { res.writeHead(code, { 'content-type': 'text/plain' }); res.end(body + '\n'); };
  try {
    switch (u.pathname) {
      case '/status': return reply(200, JSON.stringify({ disk, aborted, uptimeSec: Math.round((Date.now() - bootedAt) / 1000), recent: log.slice(-8) }, null, 1));
      case '/shot': return reply(200, await shot(q('name')));
      case '/click': {
        const x = +q('x'), y = +q('y');
        // The emulator samples the mouse at its own rate; Playwright's instant clicks get
        // coalesced, so hold each press and space the double-click like a human would.
        await page.mouse.move(x, y); await page.waitForTimeout(150);  // let the emulator see the move first
        for (let i = 0; i < (q('dbl') ? 2 : 1); i++) {
          await page.mouse.down(); await page.waitForTimeout(60);
          await page.mouse.up(); await page.waitForTimeout(120);
        }
        return reply(200, 'ok');
      }
      case '/drag': {
        // Finder needs a held press before it starts a drag, and slow motion to track it.
        await page.mouse.move(+q('x1'), +q('y1')); await page.waitForTimeout(150);
        await page.mouse.down(); await page.waitForTimeout(400);
        await page.mouse.move(+q('x2'), +q('y2'), { steps: 40 }); await page.waitForTimeout(400);
        await page.mouse.up();
        return reply(200, 'ok');
      }
      case '/move': await page.mouse.move(+q('x'), +q('y'), { steps: 5 }); return reply(200, 'ok');
      case '/down': await page.mouse.move(+q('x'), +q('y'), { steps: 3 }); await page.mouse.down(); return reply(200, 'ok');
      case '/up':   await page.mouse.move(+q('x'), +q('y'), { steps: 8 }); await page.mouse.up(); return reply(200, 'ok');
      case '/key': await page.keyboard.press(q('k')); return reply(200, 'ok');
      case '/type': await page.keyboard.type(q('t'), { delay: 50 }); return reply(200, 'ok');
      case '/push': return reply(200, await push(path.resolve(q('path'))));
      case '/pulled': return reply(200, fs.readdirSync(PULLED).join('\n'));
      case '/reload': await open(q('disk')); return reply(200, 'rebooting ' + disk);
      case '/eval': return reply(200, JSON.stringify(await page.evaluate(q('js'))));
      case '/front': {
        // Which app owns the menu bar? Warlords' menus (Heroes / View / History,
        // black or greyed) occupy x 300..380 of the menu bar; the Finder's menus
        // end before x 250 and the clock sits far right. Count text pixels there.
        const n = await page.evaluate(() => {
          const c = document.querySelector('canvas');
          const x = c.getContext('2d', { willReadFrequently: true });
          if (!x) return -1;
          const d = x.getImageData(300, 4, 80, 12).data;
          let k = 0;
          for (let i = 0; i < d.length; i += 4) if (d[i] + d[i + 1] + d[i + 2] < 560) k++;
          return k;
        });
        return reply(200, n > 15 ? 'game' : (n < 0 ? 'unknown' : 'finder'));
      }
      case '/audio': {
        if (q('cmd') === 'start') {
          await page.evaluate(() => { const r = window.__wlrec; if (r) { r.blocks = []; r.on = true; r.wall = Date.now(); } });
          return reply(200, 'recording');
        }
        const out = await page.evaluate(() => {
          const r = window.__wlrec; if (!r) return null; r.on = false;
          if (!r.blocks.length) return { sr: r.sr, t0: 0, b64: '' };
          const t0 = r.blocks[0].t, n = r.blocks.length * r.blocks[0].d.length;
          const pcm = new Int16Array(Math.round((r.blocks[r.blocks.length - 1].t - t0) * r.sr) + r.blocks[0].d.length);
          for (const b of r.blocks) {           // place each block at its context time
            const o = Math.round((b.t - t0) * r.sr);
            for (let i = 0; i < b.d.length && o + i < pcm.length; i++)
              pcm[o + i] = Math.max(-32768, Math.min(32767, Math.round(b.d[i] * 32767)));
          }
          const u8 = new Uint8Array(pcm.buffer); let s = '';
          for (let i = 0; i < u8.length; i += 0x8000) s += String.fromCharCode.apply(null, u8.subarray(i, i + 0x8000));
          return { sr: r.sr, wall: r.wall, n, b64: btoa(s) };
        });
        if (!out) return reply(500, 'no audio tap (reload the page)');
        const dir = path.join(WORK, 'audio', String(PORT)); fs.mkdirSync(dir, { recursive: true });
        const f = path.join(dir, (q('name') || `rec_${Date.now()}`) + '.wav');
        const data = Buffer.from(out.b64, 'base64'), h = Buffer.alloc(44);
        h.write('RIFF', 0); h.writeUInt32LE(36 + data.length, 4); h.write('WAVEfmt ', 8);
        h.writeUInt32LE(16, 16); h.writeUInt16LE(1, 20); h.writeUInt16LE(1, 22);
        h.writeUInt32LE(out.sr || 44100, 24); h.writeUInt32LE((out.sr || 44100) * 2, 28);
        h.writeUInt16LE(2, 32); h.writeUInt16LE(16, 34); h.write('data', 36); h.writeUInt32LE(data.length, 40);
        fs.writeFileSync(f, Buffer.concat([h, data]));
        return reply(200, f);
      }
      case '/quit': reply(200, 'bye'); await browser.close(); process.exit(0);
      default: return reply(404, 'unknown endpoint');
    }
  } catch (e) { reply(500, 'error: ' + e.message); }
}).listen(PORT, '127.0.0.1', () => note(`bridge listening on http://127.0.0.1:${PORT}`));
