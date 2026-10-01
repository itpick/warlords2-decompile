import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D = 'tools/infinitemac';
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
async function cmd(key) { await page.keyboard.down('Meta'); await page.keyboard.press(key); await page.keyboard.up('Meta'); }
async function cmdShift3() { await page.keyboard.down('Meta'); await page.keyboard.down('Shift'); await page.keyboard.press('Digit3'); await page.keyboard.up('Shift'); await page.keyboard.up('Meta'); }

console.log('booting Warlords II...');
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',
  { waitUntil: 'domcontentloaded', timeout: 60000 }).catch(() => {});
await page.waitForTimeout(100000);
await page.screenshot({ path: D + '/quit_1_boot.png' });
dump('after boot (game running)');

// Quit the game back to Finder: dismiss any dialog, then Cmd+Q + confirm a few times.
for (let i = 0; i < 6; i++) {
  await page.keyboard.press('Escape'); await page.waitForTimeout(400);
  await cmd('KeyQ'); await page.waitForTimeout(1500);
  await page.keyboard.press('Enter'); await page.waitForTimeout(1500);  // confirm "quit/don't save"
}
await page.waitForTimeout(4000);
await page.screenshot({ path: D + '/quit_2_finder.png' });
dump('after Cmd+Q (should be Finder)');

// Now trigger sound from the Finder
await page.mouse.click(700, 600); await page.waitForTimeout(800);
for (let i = 0; i < 3; i++) { console.log('Cmd+Shift+3 #' + (i + 1)); await cmdShift3(); await page.waitForTimeout(4000); dump('after C+S+3 #' + (i + 1)); }
await page.screenshot({ path: D + '/quit_3_aftersound.png' });

console.log('=== RESULT ===');
dump('FINAL');
await browser.close();
