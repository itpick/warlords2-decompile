import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
let abort=false, enqBoot=0, enqGame=0, inGame=false;
page.on('console',m=>{const t=m.text(); if(/Aborted/i.test(t)) abort=true; if(t.includes('ENQ_AUDIO')){ if(inGame) enqGame++; else enqBoot++; }});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%207200',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(75000);                 // boot + game + color dialog
await page.screenshot({path:D+'/dg_dialog.png'});
await page.mouse.click(714,405); await page.waitForTimeout(4000);   // "No" on color dialog
await page.screenshot({path:D+'/dg_scenario.png'});
await page.mouse.click(490,538); await page.waitForTimeout(700);    // select Tutoria (approx)
await page.keyboard.press('Enter'); await page.waitForTimeout(9000);// start
await page.keyboard.press('Enter'); await page.waitForTimeout(8000);// Done -> map
inGame=true; console.log('reached map, boot enq:',enqBoot,'abort:',abort);
await page.screenshot({path:D+'/dg_map.png'});
for (const [x,y] of [[640,500],[660,500],[600,520],[700,480],[640,460]]) { await page.mouse.click(x,y); await page.waitForTimeout(2500); }
await page.screenshot({path:D+'/dg_map2.png'});
console.log('DINGUS in-game enqAudio:', enqGame, '| abort:', abort);
await browser.close();
