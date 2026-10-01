import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1024,height:768}});
let enq=0; const samples=[];
page.on('console',m=>{const t=m.text(); if(t.includes('ENQ_AUDIO')){enq++; samples.push(t);} });
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(75000);  // boot -> game/menu (music should play)
console.log('=== ENQ_AUDIO events:', enq, '===');
samples.slice(0,8).forEach(s=>console.log(s));
await browser.close();
