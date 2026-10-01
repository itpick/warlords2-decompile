import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
const probes=new Set(); let enq=0, lastMax=0;
page.on('console',m=>{const t=m.text(); if(t.includes('AUDIO_PROBE')){probes.add(t); const mm=t.match(/num_sources=(\d+)/); if(mm) lastMax=Math.max(lastMax,+mm[1]);} if(t.includes('ENQ_AUDIO')) enq++;});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(95000);                          // OS9 bigger -> longer boot
await page.mouse.click(498,663); await page.waitForTimeout(10000);   // Use Selected Scenario
await page.screenshot({path:D+'/o9_tut.png'});
await page.mouse.click(768,590); await page.waitForTimeout(9000);    // CLICK "Done" -> map
await page.screenshot({path:D+'/o9_map.png'});
for (const k of ['Tab','Space','Tab']) { await page.keyboard.press(k); await page.waitForTimeout(3500); }
for (const [x,y] of [[640,500],[600,520],[700,480]]) { await page.mouse.click(x,y); await page.waitForTimeout(2500); }
await page.keyboard.press('Tab'); await page.waitForTimeout(4000);
await page.screenshot({path:D+'/o9_map2.png'});
console.log('OS9 max num_sources:', lastMax, '| ENQ_AUDIO:', enq);
await browser.close();
