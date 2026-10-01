import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
const probes=[]; let enq=0;
page.on('console',m=>{const t=m.text(); if(t.includes('AUDIO_PROBE')) probes.push(t); if(t.includes('ENQ_AUDIO')) enq++;});
await page.goto('http://localhost:3127/?disk=Mac%20OS%208.6&machine=Power%20Macintosh%209500&infinite_hd=true',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(60000);                 // boot to desktop
// try to trigger system sounds: dismiss any dialog, then provoke alert beeps
for (let i=0;i<6;i++){ await page.keyboard.press('Escape'); await page.waitForTimeout(500); }
await page.mouse.click(640,780); await page.waitForTimeout(500);
await page.keyboard.press('Backspace'); await page.waitForTimeout(500);  // beep in Finder
for (let i=0;i<5;i++){ await page.keyboard.press('q'); await page.waitForTimeout(400); }
await page.waitForTimeout(8000);
await page.screenshot({path:'tools/infinitemac/os9_desktop.png'});
console.log('=== OS9 AUDIO_PROBE ===');
[...new Set(probes)].forEach(p=>console.log(p));
console.log('total probe events:', probes.length, '| ENQ_AUDIO:', enq);
await browser.close();
