import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords.hda'; const D='tools/infinitemac';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
page.on('filechooser', async fc=>{ await fc.setFiles(HDA); });
const shot=async n=>{ await page.screenshot({path:`${D}/${n}.png`}); const e=await page.locator('text=Emulator Error').count(); console.log('shot',n,'emu_error:',e); };
const cmd=async k=>{ await page.keyboard.down('Meta'); await page.keyboard.press(k); await page.keyboard.up('Meta'); };
// NO infinite_hd -> clean desktop (only Warlords disk), but a modal "Infinite HD missing" dialog appears
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
await page.getByRole('button',{name:'+',exact:true}).first().click(); await page.waitForTimeout(400);
const sel=page.locator('select.CustomFields-Repeated-Disk');
await sel.nth((await sel.count())-1).selectOption('disk-file'); await page.waitForTimeout(2000);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
console.log('booting...'); await page.waitForTimeout(58000);
// robustly dismiss the modal "Continue" whenever it appears
for (const t of [0,8,8,8,8]) { await page.waitForTimeout(t*1000); await page.mouse.click(776,356); }
await page.waitForTimeout(1500); await shot('v_desktop');
// open Warlords II disk (2nd slot, no infinite_hd) via select + Cmd+O
await page.mouse.click(1103,240); await page.waitForTimeout(600); await cmd('o');
await page.waitForTimeout(4000); await shot('v_diskwin');
// type-select the app by name, launch with Cmd+O
await page.keyboard.press('w'); await page.waitForTimeout(900); await shot('v_sel');
await cmd('o'); console.log('launching...'); await page.waitForTimeout(12000); await shot('w_startdlg'); await page.mouse.click(785,361); console.log('clicked Yes (256 colors)'); await page.waitForTimeout(6000); await shot('w_game1');
await page.waitForTimeout(8000); await shot('w_game2'); await page.waitForTimeout(8000); await shot('w_game3');
await browser.close();
