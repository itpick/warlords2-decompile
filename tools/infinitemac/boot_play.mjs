import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords_boot.hda'; const D='tools/infinitemac';
const ans = process.argv[2]||'no'; const bx = ans==='yes'?785:714;
const browser = await chromium.launch({ headless: false });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
page.on('filechooser', async fc=>{ await fc.setFiles(HDA); });
const shot=async n=>{ await page.screenshot({path:`${D}/${n}.png`}); const e=await page.locator('text=Emulator Error').count(); console.log('shot',n,'emu_error:',e); };
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0&machine=Power%20Macintosh%209500',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
const sel=page.locator('select.CustomFields-Repeated-Disk');
await sel.first().selectOption('disk-file'); await page.waitForTimeout(2500);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
console.log('booting + auto-launching game...');
await page.waitForTimeout(75000); await shot('P_dlg');
await page.mouse.click(bx,361); console.log('clicked',ans,'on color dialog');
for (const w of [5,12,20,30,45]) { await page.waitForTimeout((w===5?5:(w-prevP(w)))*1000); await shot('P_'+w+'s'); }
function prevP(w){ const a=[5,12,20,30,45]; return a[a.indexOf(w)-1]; }
console.log('keeping window open ~2min'); await page.waitForTimeout(120000);
await browser.close();
