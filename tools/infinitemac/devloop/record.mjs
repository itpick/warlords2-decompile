// Long-running screen recorder for one emulator (for whole-game videos).
//   node record.mjs <port> <name> [fps=2] [chunkSec=300]
// Screenshots the bridge at ~fps with real timestamps and, every chunkSec,
// encodes the frames to .devloop/movies/<name>/<name>_NNN.mp4 and deletes them.
// Stop it by creating .devloop/movies/<name>/STOP (the last chunk is written and
// all chunks are joined into .devloop/movies/<name>.mp4).
import fs from 'fs';
import path from 'path';
import { execFileSync } from 'child_process';

const [port = '3200', name = 'game', fpsArg = '2', chunkArg = '300'] = process.argv.slice(2);
const fps = +fpsArg, chunkSec = +chunkArg;
const REPO = path.resolve(path.dirname(new URL(import.meta.url).pathname), '../../..');
const DIR = path.join(REPO, '.devloop', 'movies', name);
fs.mkdirSync(DIR, { recursive: true });
const STOP = path.join(DIR, 'STOP');
fs.rmSync(STOP, { force: true });

const shot = async (n) => {
  for (let tries = 0; tries < 4; tries++) {
    try {
      const r = await fetch(`http://127.0.0.1:${port}/shot?name=${encodeURIComponent(n)}`);
      const f = (await r.text()).trim();
      if (fs.existsSync(f)) return f;
    } catch (e) { /* bridge busy: retry */ }
    await new Promise(r => setTimeout(r, 300));
  }
  return null;
};

let chunk = 0;
while (fs.existsSync(path.join(DIR, `${name}_${String(chunk).padStart(3, '0')}.mp4`))) chunk++;

async function encode(frames) {
  if (frames.length < 2) { for (const [f] of frames) fs.rmSync(f, { force: true }); return; }
  const list = path.join(DIR, 'list.txt');
  fs.writeFileSync(list, frames.map(([f, t], i) =>
    `file '${f}'\nduration ${(((frames[i + 1] || [0, t + 1000 / fps])[1] - t) / 1000).toFixed(3)}`).join('\n') +
    `\nfile '${frames[frames.length - 1][0]}'\n`);
  const out = path.join(DIR, `${name}_${String(chunk++).padStart(3, '0')}.mp4`);
  try {
    execFileSync('ffmpeg', ['-y', '-loglevel', 'error', '-f', 'concat', '-safe', '0', '-i', list,
      '-vf', 'fps=10,format=yuv420p', '-c:v', 'libx264', '-crf', '23', out]);
  } catch (e) { console.error('encode failed', e.message); }
  for (const [f] of frames) fs.rmSync(f, { force: true });
  fs.rmSync(list, { force: true });
  console.log(new Date().toISOString(), 'chunk', out);
}

let frames = [], chunkStart = Date.now(), k = 0;
while (!fs.existsSync(STOP)) {
  const t = Date.now();
  const f = await shot(`__game_${name}_${String(k++).padStart(7, '0')}`);
  if (f) frames.push([f, t]);
  if (Date.now() - chunkStart >= chunkSec * 1000) { await encode(frames); frames = []; chunkStart = Date.now(); }
  const wait = 1000 / fps - (Date.now() - t);
  if (wait > 0) await new Promise(r => setTimeout(r, wait));
}
await encode(frames);
const parts = fs.readdirSync(DIR).filter(f => /_\d{3}\.mp4$/.test(f)).sort();
if (parts.length) {
  const list = path.join(DIR, 'all.txt');
  fs.writeFileSync(list, parts.map(p => `file '${path.join(DIR, p)}'`).join('\n') + '\n');
  execFileSync('ffmpeg', ['-y', '-loglevel', 'error', '-f', 'concat', '-safe', '0', '-i', list, '-c', 'copy',
    path.join(REPO, '.devloop', 'movies', `${name}.mp4`)]);
  console.log('joined', parts.length, 'chunks ->', path.join(REPO, '.devloop', 'movies', `${name}.mp4`));
}
