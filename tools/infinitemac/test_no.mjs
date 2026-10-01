import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
let aborted=false; page.on('console',m=>{if(/Aborted|out of bounds/i.test(m.text())) aborted=true;});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(60000);              // boot + auto-launch + dialog
await page.screenshot({path:D+'/no_dlg.png'});
// click NO (714,361) a couple times to be sure it registers
await page.mouse.click(714,361); await page.waitForTimeout(1200); await page.mouse.click(714,361);
await page.waitForTimeout(6000); await page.screenshot({path:D+'/no_after1.png'});
await page.waitForTimeout(8000); await page.screenshot({path:D+'/no_after2.png'});
const emuErr = await page.locator('text=Emulator Error').count();
console.log('clicked No | emulator error visible:', emuErr, '| abort logged:', aborted);
await browser.close();
