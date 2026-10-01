import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords.hda'; const D='tools/infinitemac';
const ans = process.argv[2] || 'yes'; const bx = ans==='yes'?785:714;
const browser = await chromium.launch();
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
page.on('filechooser', async fc=>{ await fc.setFiles(HDA); });
const shot=async n=>{ await page.screenshot({path:`${D}/${n}.png`}); const e=await page.locator('text=Emulator Error').count(); console.log('shot',n,'emu_error:',e); };
const cmd=async k=>{ await page.keyboard.down('Meta'); await page.keyboard.press(k); await page.keyboard.up('Meta'); };
const dbl=async(x,y)=>{ await page.mouse.move(x,y); await page.mouse.down(); await page.mouse.up(); await page.waitForTimeout(110); await page.mouse.down(); await page.mouse.up(); };
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
await page.getByRole('button',{name:'+',exact:true}).first().click(); await page.waitForTimeout(400);
const sel=page.locator('select.CustomFields-Repeated-Disk');
await sel.nth((await sel.count())-1).selectOption('disk-file'); await page.waitForTimeout(2000);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
console.log('booting...'); await page.waitForTimeout(58000);
for (const t of [0,8,8,8,8]) { await page.waitForTimeout(t*1000); await page.mouse.click(776,356); }
await page.waitForTimeout(1500);
await page.mouse.click(1103,240); await page.waitForTimeout(700); await cmd('o'); await page.waitForTimeout(4000);
// ROBUST LAUNCH: double-click app icon AND type-select+Cmd+O
await dbl(428,263); await page.waitForTimeout(1500);
await page.keyboard.press('w'); await page.waitForTimeout(700); await cmd('o');
console.log('launch attempts done'); await page.waitForTimeout(12000); await shot('R_dlg');
await page.mouse.click(bx,361); console.log('clicked',ans); await page.waitForTimeout(4000); await shot('R_a1');
await page.waitForTimeout(7000); await shot('R_a2');
await page.waitForTimeout(8000); await shot('R_a3');
await page.waitForTimeout(8000); await shot('R_a4');
await browser.close();
