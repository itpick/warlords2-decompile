import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D = 'tools/infinitemac';
const browser = await chromium.launch({ args: ["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport: { width: 1280, height: 1000 } });

const selCount = {};        // ADISP selector -> count
const probeLines = [];
let enq = 0, maxsrc = 0, lastMix = 0;
page.on('console', m => {
  const t = m.text();
  let mm;
  if ((mm = t.match(/ADISP sel=(-?\d+)/))) { const s = mm[1]; selCount[s] = (selCount[s] || 0) + 1; }
  if (t.includes('AUDIO_PROBE')) {
    probeLines.push(t);
    const a = t.match(/num_sources=(-?\d+)/), b = t.match(/mixer=(-?\d+)/);
    if (a) maxsrc = Math.max(maxsrc, +a[1]);
    if (b && +b[1] !== 0) lastMix = +b[1];
    console.log('  >>', t);
  }
  if (t.includes('ENQ_AUDIO')) enq++;
});

const dump = (tag) => {
  console.log(`--- ${tag}: ADISP selectors=${JSON.stringify(selCount)} | maxsrc=${maxsrc} | mixer!=0 seen=${lastMix} | ENQ=${enq}`);
};

console.log('booting stock OS 9...');
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',
  { waitUntil: 'domcontentloaded', timeout: 60000 }).catch(() => {});

await page.waitForTimeout(110000);
await page.screenshot({ path: D + '/diag_after_boot.png' });
dump('after boot (Finder/scenario screen)');

// Start the selected scenario: click "Use Selected Scenario", then Enter through setup to the map.
await page.mouse.click(499, 663); await page.waitForTimeout(9000);
await page.screenshot({ path: D + '/diag_after_use.png' });
dump('after Use Selected Scenario');

for (let i = 0; i < 4; i++) { await page.keyboard.press('Enter'); await page.waitForTimeout(6000); }
await page.screenshot({ path: D + '/diag_after_enters.png' });
dump('after Enters (should be map / turn fanfare)');

// In-game sound triggers: end turn (Tab), center (Space), clicks
for (const k of ['Tab', 'Space', 'Tab', 'Enter', 'Tab']) { await page.keyboard.press(k); await page.waitForTimeout(4000); }
await page.mouse.click(640, 500); await page.waitForTimeout(2000);
await page.keyboard.press('Tab'); await page.waitForTimeout(5000);
await page.screenshot({ path: D + '/diag_ingame.png' });

console.log('=== RESULT ===');
dump('FINAL');
console.log('AUDIO_PROBE lines:', probeLines.join(' || ') || '(none)');
await browser.close();
