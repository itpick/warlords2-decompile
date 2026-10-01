// Oracle runner: boots one disk (original OR remake) in InfiniteMac, plays an input
// script (clicks/keys/waits), and captures labeled frames. Same script runs against
// both disks so frames can be diffed. Usage:
//   node runner.mjs "<disk display name>" <outDir> <script.json>
import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
import fs from 'fs';
const { chromium } = pkg;

const disk = process.argv[2];
const outDir = process.argv[3];
const scriptPath = process.argv[4];
const script = JSON.parse(fs.readFileSync(scriptPath, 'utf8'));
fs.mkdirSync(outDir, { recursive: true });

const url = `http://localhost:3127/embed?disk=${encodeURIComponent(disk)}` +
            `&machine=Power%20Macintosh%209500&infinite_hd=false`;
const browser = await chromium.launch({ args: ['--autoplay-policy=no-user-gesture-required'] });
const page = await browser.newPage({ viewport: script.viewport || { width: 1024, height: 768 } });
let aborted = false;
page.on('console', m => { if (/Aborted|out of bounds|RuntimeError/i.test(m.text())) aborted = true; });
page.on('pageerror', e => { if (/Aborted|bounds/i.test(String(e))) aborted = true; });

console.log(`[${disk}] booting...`);
await page.goto(url, { waitUntil: 'domcontentloaded', timeout: 60000 }).catch(() => {});
await page.waitForTimeout(script.bootWaitMs ?? 130000);

let idx = 0;
for (const step of script.steps) {
  if (step.click) await page.mouse.click(step.click[0], step.click[1]);
  if (step.dblclick) await page.mouse.dblclick(step.dblclick[0], step.dblclick[1]);
  if (step.key) await page.keyboard.press(step.key);
  if (step.type) await page.keyboard.type(step.type, { delay: 50 });
  if (step.wait) await page.waitForTimeout(step.wait);
  if (step.shot) {
    const name = String(idx).padStart(2, '0') + '_' + step.shot + '.png';
    await page.screenshot({ path: `${outDir}/${name}` });
    console.log(`  [${disk}] frame ${name}`);
  }
  idx++;
}
console.log(`[${disk}] done. aborted=${aborted}`);
await browser.close();
