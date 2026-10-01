import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords.hda'; const D='tools/infinitemac';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
page.on('filechooser', async fc=>{ await fc.setFiles(HDA); });
const shot=async n=>{ await page.screenshot({path:`${D}/${n}.png`}); const e=await page.locator('text=Emulator Error').count(); console.log('shot',n,'emu_error:',e); };
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
await page.getByRole('button',{name:'+',exact:true}).first().click(); await page.waitForTimeout(400);
const sel=page.locator('select.CustomFields-Repeated-Disk');
await sel.nth((await sel.count())-1).selectOption('disk-file'); await page.waitForTimeout(2000);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
console.log('booting...'); await page.waitForTimeout(78000);
await page.mouse.click(776,356); await page.waitForTimeout(1800);   // Continue
await page.mouse.click(640,790); await page.waitForTimeout(700);
await page.mouse.dblclick(1103,240,{delay:90}); await page.waitForTimeout(4000); await shot('q_disk');  // open disk
// select app icon (single click) then Cmd+O to launch
await page.mouse.click(170,193); await page.waitForTimeout(600);
await page.keyboard.down('Meta'); await page.keyboard.press('o'); await page.keyboard.up('Meta');
console.log('sent Cmd+O'); await page.waitForTimeout(9000); await shot('q_launch1');
await page.waitForTimeout(8000); await shot('q_launch2');
await browser.close();
