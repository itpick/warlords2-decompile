import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D = 'tools/infinitemac';
const browser = await chromium.launch({ headless: false, args: ["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport: { width: 1280, height: 1000 } });
page.on('console', m => { const t = m.text(); if (/error|abort|bounds|exception|fail/i.test(t)) console.log('  LOG:', t.slice(0, 200)); });
page.on('pageerror', e => console.log('  PAGEERROR:', String(e).slice(0, 200)));

console.log('booting 8.1 Warlords build...');
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',
  { waitUntil: 'domcontentloaded', timeout: 60000 }).catch(() => {});

let last = 0;
for (const sec of [25, 45, 70, 100, 130]) {
  await page.waitForTimeout((sec - last) * 1000); last = sec;
  await page.screenshot({ path: `${D}/shot81_${sec}s.png` });
  console.log(`shot at ${sec}s`);
}
console.log('done');
await browser.close();
