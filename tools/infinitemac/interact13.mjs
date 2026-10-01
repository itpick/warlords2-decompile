import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords.hda'; const D='tools/infinitemac';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
page.on('filechooser', async fc=>{ await fc.setFiles(HDA); });
const shot=async n=>{ await page.screenshot({path:`${D}/${n}.png`}); const e=await page.locator('text=Emulator Error').count(); console.log('shot',n,'emu_error:',e); };
const cmd=async k=>{ await page.keyboard.down('Meta'); await page.keyboard.press(k); await page.keyboard.up('Meta'); };
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
await page.getByRole('button',{name:'+',exact:true}).first().click(); await page.waitForTimeout(400);
const sel=page.locator('select.CustomFields-Repeated-Disk');
await sel.nth((await sel.count())-1).selectOption('disk-file'); await page.waitForTimeout(2000);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
console.log('booting...'); await page.waitForTimeout(58000);
for (const t of [0,8,8,8,8]) { await page.waitForTimeout(t*1000); await page.mouse.click(776,356); }
await page.waitForTimeout(1500);
await page.mouse.click(1103,240); await page.waitForTimeout(600); await cmd('o');   // open disk
await page.waitForTimeout(4000);
await page.mouse.click(345,360); await page.waitForTimeout(500);                   // focus disk window (empty area)
await page.keyboard.press('w'); await page.waitForTimeout(900); await shot('z_sel'); // type-select app
await cmd('o'); console.log('launch'); await page.waitForTimeout(13000); await shot('z_dlg');
await page.mouse.click(785,361); console.log('clicked Yes'); await page.waitForTimeout(7000); await shot('z_g1');
await page.waitForTimeout(8000); await shot('z_g2');
await page.waitForTimeout(8000); await shot('z_g3');
await browser.close();
