import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch({ headless:false, args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:980}});
const cmd=async k=>{ await page.keyboard.down('Meta'); await page.keyboard.press(k); await page.keyboard.up('Meta'); };
const dbl=async(x,y)=>{ await page.mouse.move(x,y); await page.mouse.down(); await page.mouse.up(); await page.waitForTimeout(110); await page.mouse.down(); await page.mouse.up(); };
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
console.log('booting (~85s)...'); await page.waitForTimeout(85000);
// switch to Finder + open Macintosh HD (top-right icon)
await dbl(1103,170); await page.waitForTimeout(4000); await page.screenshot({path:D+'/cp_1_hd.png'});
// navigate by name: System Folder -> Control Panels -> Sound (type-select + Cmd+O)
await page.keyboard.type('System Folder'); await page.waitForTimeout(700); await cmd('o'); await page.waitForTimeout(3500);
await page.screenshot({path:D+'/cp_2_sysfolder.png'});
await page.keyboard.type('Control Panels'); await page.waitForTimeout(700); await cmd('o'); await page.waitForTimeout(3500);
await page.screenshot({path:D+'/cp_3_controlpanels.png'});
await page.keyboard.type('Sound'); await page.waitForTimeout(700); await cmd('o'); await page.waitForTimeout(4000);
await page.screenshot({path:D+'/cp_4_sound.png'});
console.log('opened (attempted) Sound control panel; window staying open 20 min for you');
await page.waitForTimeout(1200000);
await browser.close();
