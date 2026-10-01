import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D = 'tools/infinitemac';
const browser = await chromium.launch({ args: ["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport: { width: 1280, height: 1000 } });
let aborted = false, mixNonZero = 0, enq = 0;
page.on('console', m => {
  const t = m.text();
  if (/Aborted|out of bounds|RuntimeError/i.test(t)) { aborted = true; console.log('  CRASH:', t.slice(0,160)); }
  if (t.includes('AUDIO_PROBE')) { const b = t.match(/mixer=(-?\d+)/); if (b && +b[1] !== 0) mixNonZero = +b[1]; }
  if (t.includes('ENQ_AUDIO')) enq++;
});
page.on('pageerror', e => { if (/Aborted|bounds|RuntimeError/i.test(String(e))) { aborted = true; console.log('  PAGEERR:', String(e).slice(0,160)); } });
async function cs3(){ await page.keyboard.down('Meta'); await page.keyboard.down('Shift'); await page.keyboard.press('Digit3'); await page.keyboard.up('Shift'); await page.keyboard.up('Meta'); }

console.log('headless boot of stripped 8.6...');
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',
  { waitUntil:'domcontentloaded', timeout:60000 }).catch(()=>{});
await page.waitForTimeout(90000);
await page.screenshot({ path: D + '/verify86_boot.png' });
console.log('after boot: aborted=', aborted);
// sound test
for (let i=0;i<3;i++){ await cs3(); await page.waitForTimeout(4000); }
await page.screenshot({ path: D + '/verify86_sound.png' });
console.log('=== RESULT ===');
console.log('CRASH:', aborted ? 'YES (Aborted/OOB)' : 'no');
console.log('SOUND:', mixNonZero ? 'WORKS (mixer opened, ENQ='+enq+')' : 'not observed (ENQ='+enq+')');
await browser.close();
