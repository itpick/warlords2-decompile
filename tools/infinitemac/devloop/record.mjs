// Capture a burst of frames from one bridge: node record.mjs <port> <name> <seconds> [everyMs=500]
// Frames land in .devloop/rec/<name>/NNN.png with their capture time (ms) in times.json.
import fs from 'fs';
import path from 'path';
const [port, name, secs, every = '500'] = process.argv.slice(2);
const REPO = path.resolve(path.dirname(new URL(import.meta.url).pathname), '../../..');
const out = path.join(REPO, '.devloop', 'rec', name);
fs.mkdirSync(out, { recursive: true });
const t0 = Date.now(), times = [];
for (let i = 0; Date.now() - t0 < secs * 1000; i++) {
  const t = Date.now() - t0;
  const f = (await (await fetch(`http://127.0.0.1:${port}/shot?name=rec_${name}_${String(i).padStart(3, '0')}`)).text()).trim();
  fs.copyFileSync(f, path.join(out, `${String(i).padStart(3, '0')}.png`));
  times.push(t);
  const wait = +every - (Date.now() - t0 - t);
  if (wait > 0) await new Promise(r => setTimeout(r, wait));
}
fs.writeFileSync(path.join(out, 'times.json'), JSON.stringify(times));
console.log(`${times.length} frames -> ${out}`);
