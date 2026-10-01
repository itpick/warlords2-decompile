import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
let abort=false, enqMap=0, inMap=false;
page.on('console',m=>{const t=m.text(); if(/Aborted/i.test(t)) abort=true; if(inMap && t.includes('ENQ_AUDIO')) enqMap++;});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(60000);
await page.mouse.click(490,538); await page.waitForTimeout(700);   // select Tutoria
await page.keyboard.press('Enter'); await page.waitForTimeout(9000); // start -> Tutorial intro
await page.screenshot({path:D+'/im_intro.png'});
await page.keyboard.press('Enter');                                // "Done" is default -> into map
await page.waitForTimeout(8000); inMap=true; await page.screenshot({path:D+'/im_map.png'});
console.log('reached map, abort so far:', abort);
// poke around the map to trigger sounds (select a unit/army, attempt a move)
for (const [x,y] of [[640,500],[660,500],[600,520],[700,480]]) { await page.mouse.click(x,y); await page.waitForTimeout(2500); }
await page.screenshot({path:D+'/im_map2.png'});
console.log('IN-MAP enqueueAudio:', enqMap, '| abort:', abort);
await browser.close();
