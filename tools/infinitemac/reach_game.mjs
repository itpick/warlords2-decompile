import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
let enq=0, maxsrc=0;
page.on('console',m=>{const t=m.text(); if(t.includes('ENQ_AUDIO')) enq++; const mm=t.match(/num_sources=(\d+)/); if(mm) maxsrc=Math.max(maxsrc,+mm[1]);});
const shot=async n=>{ await page.screenshot({path:`${D}/rg_${n}.png`}); console.log('shot',n,'enq:',enq,'maxsrc:',maxsrc); };
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(120000);                    // OS9 slow boot
await shot('1_scenario');
// start: click "Use Selected Scenario" AND press Return (belt+suspenders)
await page.mouse.click(498,663); await page.waitForTimeout(800); await page.keyboard.press('Enter');
await page.waitForTimeout(12000); await shot('2_afterstart');
// dismiss Tutorial "Done" (click + Return)
await page.mouse.click(768,590); await page.waitForTimeout(800); await page.keyboard.press('Enter');
await page.waitForTimeout(10000); await shot('3_map');
const beforeMap = enq;
// trigger sounds on the map: end turn / center / clicks
for (const k of ['Tab','Space','Tab']) { await page.keyboard.press(k); await page.waitForTimeout(3000); }
for (const [x,y] of [[640,500],[600,520],[680,460]]) { await page.mouse.click(x,y); await page.waitForTimeout(2500); }
await page.keyboard.press('Tab'); await page.waitForTimeout(4000);
await shot('4_afteractions');
console.log('RESULT maxsrc:', maxsrc, '| ENQ total:', enq, '| ENQ on map:', enq-beforeMap);
await browser.close();
