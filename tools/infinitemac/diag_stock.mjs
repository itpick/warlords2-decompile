import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D = 'tools/infinitemac';
const DISK = process.argv[2] || 'Mac OS 9.0';
const browser = await chromium.launch({ args: ["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport: { width: 1280, height: 1000 } });

const selCount = {};
let enq = 0, maxsrc = 0, mixNonZero = 0;
page.on('console', m => {
  const t = m.text();
  let mm;
  if ((mm = t.match(/ADISP sel=(-?\d+)/))) { const s = mm[1]; selCount[s] = (selCount[s] || 0) + 1; }
  if (t.includes('AUDIO_PROBE')) {
    const a = t.match(/num_sources=(-?\d+)/), b = t.match(/mixer=(-?\d+)/);
    if (a) maxsrc = Math.max(maxsrc, +a[1]);
    if (b && +b[1] !== 0) mixNonZero = +b[1];
    console.log('  >>', t);
  }
  if (t.includes('ENQ_AUDIO')) enq++;
});
const dump = (tag) => console.log(`--- ${tag}: ADISP=${JSON.stringify(selCount)} | maxsrc=${maxsrc} | mixer!=0=${mixNonZero} | ENQ=${enq}`);

console.log('booting stock disk:', DISK);
await page.goto(`http://localhost:3127/?disk=${encodeURIComponent(DISK)}&machine=Power%20Macintosh%209500`,
  { waitUntil: 'domcontentloaded', timeout: 60000 }).catch(() => {});

await page.waitForTimeout(95000);
await page.screenshot({ path: D + '/stock_boot.png' });
dump('after boot');

// Force system beeps: click desktop, type type-select misses (no match -> SysBeep), invalid keys.
await page.mouse.click(640, 500); await page.waitForTimeout(800);
for (let r = 0; r < 4; r++) {
  await page.keyboard.type('zqxjkvwy', { delay: 70 });
  await page.waitForTimeout(1200);
  for (const k of ['Enter', 'Escape', 'Backspace']) { await page.keyboard.press(k); await page.waitForTimeout(500); }
}
await page.waitForTimeout(3000);
await page.screenshot({ path: D + '/stock_afterkeys.png' });

console.log('=== RESULT ===');
dump('FINAL');
await browser.close();
