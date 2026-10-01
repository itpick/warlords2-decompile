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
  if (t.includes('ENQ_AUDIO')) { enq++; if (enq <= 4) console.log('  >> ENQ#' + enq); }
});
const dump = (tag) => console.log(`--- ${tag}: mixer!=0=${mixNonZero} | maxsrc=${maxsrc} | ENQ=${enq} | sel1(init)=${selCount['1']||0} sel257(add)=${selCount['257']||0} sel264(play)=${selCount['264']||0}`);
async function cmdShift3() { await page.keyboard.down('Meta'); await page.keyboard.down('Shift'); await page.keyboard.press('Digit3'); await page.keyboard.up('Shift'); await page.keyboard.up('Meta'); }

console.log('booting launcher build...');
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',
  { waitUntil: 'domcontentloaded', timeout: 60000 }).catch(() => {});

// boot (~100s) + launcher delay (~17s) + game launch (~10s)
await page.waitForTimeout(105000);
await page.screenshot({ path: D + '/launch_1_desktop.png' });
dump('after boot, before launcher fires');
await page.waitForTimeout(35000);    // let launcher beep + launch the game
await page.screenshot({ path: D + '/launch_2_game.png' });
dump('after launcher fired (game should be up; beep primed mixer)');

// confirm OS sound works with the game running
for (let i = 0; i < 2; i++) { await cmdShift3(); await page.waitForTimeout(4000); }
await page.screenshot({ path: D + '/launch_3_aftersound.png' });

console.log('=== RESULT ===');
dump('FINAL');
console.log('SOUND', mixNonZero ? 'WORKS (mixer opened)' : 'BROKEN (mixer never opened)');
await browser.close();
