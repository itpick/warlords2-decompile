import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
page.on('console',m=>{const t=m.text(); if(/PowerPC|quiescent|blit|error|Warlords|disk/i.test(t)) console.log('[c]',t.slice(0,120));});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(e=>console.log('goto',e.message));
for (const w of [50,85]) { await page.waitForTimeout((w===50?50:35)*1000); await page.screenshot({path:`${D}/pkg_${w}s.png`}); console.log('shot',w); }
await browser.close();
