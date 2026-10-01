import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
let abort=false; page.on('console',m=>{if(/Aborted|out of bounds/i.test(m.text())) abort=true;});
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(60000);  // boot -> scenario screen (no dialog now)
await page.screenshot({path:D+'/start_0.png'});
// click "Use Selected Scenario" (Tutoria is preselected) ~ (498,663)
await page.mouse.click(498,663); console.log('clicked Use Selected Scenario');
for (const w of [6,14,25]) { await page.waitForTimeout((w===6?6:(w-(w===14?6:14)))*1000); await page.screenshot({path:`${D}/start_${w}s.png`}); console.log('shot',w,'abort:',abort); }
await browser.close();
