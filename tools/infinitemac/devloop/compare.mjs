// Play one step script against the ORIGINAL (bridge :3200) and the REMAKE (:3201) in
// parallel, then write side-by-side frames (original | remake) to .devloop/compare/<name>/.
//   node compare.mjs <script.json> [--reuse-orig]
// --reuse-orig replays only the remake and pairs it with the original frames from the
// previous run of the same script (capture the original once per screen, then iterate).
// Step: {click:[x,y]} {dbl:[x,y]} {move:[x,y]} {down:[x,y]} {up:[x,y]} (press, move while held, release) {key:"Enter"} {type:"Tutoria"} {wait:ms} {shot:"label"}
//       {audio:"start"} / {audio:"stop"} -> .devloop/audio/<port>/<script>_<side>.wav
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

const SIDES = { orig: 3200, remake: 3201 };
const call = async (port, ep, q = {}) => {
  const u = new URL(`http://127.0.0.1:${port}/${ep}`);
  for (const [k, v] of Object.entries(q)) u.searchParams.set(k, String(v));
  const r = await fetch(u); return (await r.text()).trim();
};

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
