// Play one step script against the ORIGINAL (bridge :3200) and the REMAKE (:3201) in
// parallel, then write side-by-side frames (original | remake) to .devloop/compare/<name>/.
//   node compare.mjs <script.json> [--reuse-orig]
// --reuse-orig replays only the remake and pairs it with the original frames from the
// previous run of the same script (capture the original once per screen, then iterate).
// Step: {click:[x,y]} {dbl:[x,y]} {move:[x,y]} {down:[x,y]} {up:[x,y]} (press, move while held, release) {key:"Enter"} {type:"Tutoria"} {wait:ms} {shot:"label"}
//       {audio:"start"} / {audio:"stop"} -> .devloop/audio/<port>/<script>_<side>.wav
//       {rec:"start"} / {rec:"stop"} -> .devloop/movies/<script>_<side>.mp4, and
//       .devloop/movies/<script>_sbs.mp4 (original | remake, time-aligned at "start")
// Any step may carry "orig": {...} / "remake": {...} to override it per side
// (layouts differ); "orig": null or "remake": null skips the step on that side.
import fs from 'fs';
import path from 'path';
import { execFileSync } from 'child_process';

const scriptPath = process.argv[2];
const script = JSON.parse(fs.readFileSync(scriptPath, 'utf8'));
const name = path.basename(scriptPath, '.json');
const REPO = path.resolve(path.dirname(new URL(import.meta.url).pathname), '../../..');
const OUT = path.join(REPO, '.devloop', 'compare', name);
fs.mkdirSync(OUT, { recursive: true });

const SIDES = { orig: Number(process.env.WL_ORIG_PORT || 3200), remake: Number(process.env.WL_PORT || 3201) };
// Movies: while recording, each side screenshots as fast as its bridge allows
// (~12 fps); frames keep their real times and ffmpeg turns them into a video.
const MOVIES = path.join(REPO, '.devloop', 'movies');
const call = async (port, ep, q = {}) => {
  const u = new URL(`http://127.0.0.1:${port}/${ep}`);
  for (const [k, v] of Object.entries(q)) u.searchParams.set(k, String(v));
  for (let tries = 0; ; tries++) {     // the bridge can drop a request under load
    try { const r = await fetch(u); return (await r.text()).trim(); }
    catch (e) { if (tries >= 3) throw e; await new Promise(r => setTimeout(r, 500)); }
  }
};

const recs = {};
async function run(side) {
  const port = SIDES[side], shots = {};
  for (const [i, base] of script.steps.entries()) {
    if (base[side] === null) continue;
    const s = { ...base, ...(base[side] || {}) };
    if (s.click) await call(port, 'click', { x: s.click[0], y: s.click[1] });
    if (s.dbl) await call(port, 'click', { x: s.dbl[0], y: s.dbl[1], dbl: 1 });
    if (s.move) await call(port, 'move', { x: s.move[0], y: s.move[1] });
    if (s.down) await call(port, 'down', { x: s.down[0], y: s.down[1] });
    if (s.up) await call(port, 'up', { x: s.up[0], y: s.up[1] });
    if (s.key) await call(port, 'key', { k: s.key });
    if (s.type) await call(port, 'type', { t: s.type });
    if (s.rec === 'start') {
      const rec = recs[side] = { on: true, frames: [] };
      rec.loop = (async () => {
        let k = 0;
        while (rec.on) {
          const t = Date.now();
          try {
            const f = await call(port, 'shot', { name: `__rec_${name}_${side}_${String(k++).padStart(5, '0')}` });
            rec.frames.push([f, t]);
          } catch (e) { await new Promise(r => setTimeout(r, 200)); }
        }
      })();
    }
    if (s.rec === 'stop' && recs[side]) {
      const rec = recs[side];
      rec.on = false; await rec.loop;
      fs.mkdirSync(MOVIES, { recursive: true });
      const list = path.join(MOVIES, `${name}_${side}.txt`);
      const fr = rec.frames.filter(([f]) => fs.existsSync(f));
      fs.writeFileSync(list, fr.map(([f, t], i) =>
        `file '${f}'\nduration ${(((fr[i + 1] || [0, Date.now()])[1] - t) / 1000).toFixed(3)}`).join('\n') +
        `\nfile '${fr[fr.length - 1][0]}'\n`);
      const out = path.join(MOVIES, `${name}_${side}.mp4`);
      try {
        execFileSync('ffmpeg', ['-y', '-loglevel', 'error', '-f', 'concat', '-safe', '0', '-i', list,
          '-vf', 'fps=30,format=yuv420p', '-c:v', 'libx264', '-crf', '20', out]);
      } catch (e) { console.error(`movie ${side}: ${e.message}`); }
      for (const [f] of fr) fs.rmSync(f, { force: true });
      fs.rmSync(list, { force: true });
    }
    if (s.wait) await new Promise(r => setTimeout(r, s.wait));
    if (s.audio === 'start') await call(port, 'audio', { cmd: 'start' });
    if (s.audio === 'stop') console.log(await call(port, 'audio', { cmd: 'stop', name: `${name}_${side}` }));
    if (s.shot) shots[s.shot] = await call(port, 'shot', { name: `${name}_${String(i).padStart(2, '0')}_${s.shot}` });
  }
  return shots;
}

const reuse = process.argv.includes('--reuse-orig');
const prevPath = path.join(OUT, 'orig_frames.json');
const [o, r] = reuse && fs.existsSync(prevPath)
  ? [JSON.parse(fs.readFileSync(prevPath, 'utf8')), await run('remake')]
  : await Promise.all([run('orig'), run('remake')]);
fs.writeFileSync(prevPath, JSON.stringify(o));
const pairs = Object.keys(o).filter(k => r[k]).map(k => [k, o[k], r[k]]);
fs.writeFileSync(path.join(OUT, 'pairs.json'), JSON.stringify(pairs));
execFileSync('uv', ['run', '--quiet', '--with', 'pillow', 'python', path.join(path.dirname(new URL(import.meta.url).pathname), 'sidebyside.py'), OUT], { stdio: 'inherit' });

// Side-by-side movie when both sides were recorded in this run.
{
  const a = path.join(MOVIES, `${name}_orig.mp4`), b = path.join(MOVIES, `${name}_remake.mp4`);
  if (fs.existsSync(a) && fs.existsSync(b) && !reuse) {
    const out = path.join(MOVIES, `${name}_sbs.mp4`);
    execFileSync('ffmpeg', ['-y', '-loglevel', 'error', '-i', a, '-i', b, '-filter_complex',
      '[0:v]scale=1024:768,setsar=1,drawtext=text=ORIGINAL:x=8:y=8:fontcolor=red:fontsize=20[l];' +
      '[1:v]scale=1024:768,setsar=1,drawtext=text=REMAKE:x=8:y=8:fontcolor=red:fontsize=20[r];[l][r]hstack=inputs=2[v]',
      '-map', '[v]', '-r', '30', '-c:v', 'libx264', '-pix_fmt', 'yuv420p', '-crf', '20', out]);
    console.log(out);
  }
}
