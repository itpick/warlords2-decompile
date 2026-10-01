import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
const probes=[]; let enq=0, lastMax=0;
page.on('console',m=>{const t=m.text(); if(t.includes('AUDIO_PROBE')){probes.push(t); const mm=t.match(/num_sources=(\d+)/); if(mm) lastMax=Math.max(lastMax,+mm[1]);} if(t.includes('ENQ_AUDIO')) enq++;});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(85000);                       // boot 8.6 -> scenario
await page.mouse.click(490,538); await page.waitForTimeout(700);
await page.keyboard.press('Enter'); await page.waitForTimeout(11000);   // start scenario
await page.keyboard.press('Enter'); await page.waitForTimeout(10000);   // Done (hero/tutorial) -> map (fanfare?)
const before = enq;
// deliberate sound triggers: accept hero (Enter), end turn (Tab), center (Space), invalid keys (beeps)
for (const k of ['Enter','Tab','Space','Tab','Escape','Backspace','Tab']) { await page.keyboard.press(k); await page.waitForTimeout(3000); }
await page.mouse.click(640,500); await page.waitForTimeout(2000); await page.keyboard.press('Tab'); await page.waitForTimeout(4000);
await page.screenshot({path:D+'/trig_map.png'});
console.log('max num_sources seen:', lastMax, '| ENQ_AUDIO total:', enq, '| ENQ after reaching map:', enq-before);
await browser.close();
