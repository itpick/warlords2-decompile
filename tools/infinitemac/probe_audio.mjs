import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
const probes=[]; let enq=0;
page.on('console',m=>{const t=m.text(); if(t.includes('AUDIO_PROBE')) probes.push(t); if(t.includes('ENQ_AUDIO')) enq++;});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(60000);                       // boot -> scenario screen
await page.mouse.click(490,538); await page.waitForTimeout(700);
await page.keyboard.press('Enter'); await page.waitForTimeout(9000);   // start
await page.keyboard.press('Enter'); await page.waitForTimeout(8000);   // Done -> map
for (const [x,y] of [[640,500],[660,500],[600,520]]) { await page.mouse.click(x,y); await page.waitForTimeout(2500); }
console.log('=== AUDIO_PROBE log (num_sources over time) ===');
[...new Set(probes)].forEach(p=>console.log(p));
console.log('total probe events:', probes.length, '| ENQ_AUDIO:', enq);
await browser.close();
