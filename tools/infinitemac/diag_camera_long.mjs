import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D = 'tools/infinitemac';
const DISK = process.argv[2] || 'Mac OS 9.0';
const browser = await chromium.launch({ headless: false, args: ["--autoplay-policy=no-user-gesture-required"] });
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
  if (t.includes('ENQ_AUDIO')) { enq++; if (enq <= 3) console.log('  >> ENQ#' + enq); }
});
const dump = (tag) => console.log(`--- ${tag}: ADISP=${JSON.stringify(selCount)} | maxsrc=${maxsrc} | mixer!=0=${mixNonZero} | ENQ=${enq}`);

async function cmdShift3() {
  await page.keyboard.down('Meta');
  await page.keyboard.down('Shift');
  await page.keyboard.press('Digit3');
  await page.keyboard.up('Shift');
  await page.keyboard.up('Meta');
}

console.log('booting:', DISK);
await page.goto(`http://localhost:3127/?disk=${encodeURIComponent(DISK)}&machine=Power%20Macintosh%209500`,
  { waitUntil: 'domcontentloaded', timeout: 60000 }).catch(() => {});
await page.waitForTimeout(130000);
await page.screenshot({ path: D + '/cam_boot.png' });
dump('after boot');

// click desktop to ensure Finder frontmost, then fire Cmd+Shift+3 screenshots (camera sound + "Picture 1" file)
await page.mouse.click(700, 600); await page.waitForTimeout(800);
for (let i = 0; i < 3; i++) {
  console.log('Cmd+Shift+3 #' + (i + 1));
  await cmdShift3();
  await page.waitForTimeout(4000);
  dump('after Cmd+Shift+3 #' + (i + 1));
}
await page.waitForTimeout(2000);
await page.screenshot({ path: D + '/cam_after.png' });   // look for "Picture 1" icon = keystroke reached OS

console.log('=== RESULT ===');
dump('FINAL');
await browser.close();
