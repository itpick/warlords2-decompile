import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const browser = await chromium.launch();
const page = await browser.newPage({ viewport:{width:1024,height:768}});
let ideal=null;
page.on('console',m=>{const t=m.text(); if(t.includes('ideal prefetch chunks')) ideal=t;});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(95000);  // let it fully boot so it reports the complete ideal set
console.log('IDEAL:', ideal || '(not reported yet)');
await browser.close();
