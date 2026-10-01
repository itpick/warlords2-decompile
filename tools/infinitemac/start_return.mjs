import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
let abort=false, enqAfter=0, started=false;
page.on('console',m=>{const t=m.text(); if(/Aborted|out of bounds/i.test(t)) abort=true; if(started && t.includes('ENQ_AUDIO')) enqAfter++;});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(60000);  // scenario screen
await page.screenshot({path:D+'/sr_menu.png'});
// click the scenario list to focus the dialog, then press Return (default = Use Selected Scenario)
await page.mouse.click(490,538);   // "Tutoria" row (selects + focuses)
await page.waitForTimeout(800);
started=true;
await page.keyboard.press('Enter');
console.log('pressed Enter to start scenario');
await page.waitForTimeout(10000); await page.screenshot({path:D+'/sr_start1.png'}); console.log('t=10 abort:',abort,'enqAfter:',enqAfter);
await page.waitForTimeout(12000); await page.screenshot({path:D+'/sr_start2.png'}); console.log('t=22 abort:',abort,'enqAfter:',enqAfter);
await browser.close();
