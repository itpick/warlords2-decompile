import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
let abort=false; page.on('console',m=>{if(/Aborted|out of bounds/i.test(m.text())) abort=true;});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
for (const w of [50,70]) { await page.waitForTimeout((w===50?50:20)*1000); await page.screenshot({path:`${D}/8bit_${w}s.png`}); console.log('shot',w,'abort:',abort); }
await browser.close();
