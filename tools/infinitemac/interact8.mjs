import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords.hda'; const D='tools/infinitemac';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
page.on('filechooser', async fc=>{ await fc.setFiles(HDA); });
const shot=async n=>{ await page.screenshot({path:`${D}/${n}.png`}); const e=await page.locator('text=Emulator Error').count(); console.log('shot',n,'emu_error:',e); };
const cmd=async k=>{ await page.keyboard.down('Meta'); await page.keyboard.press(k); await page.keyboard.up('Meta'); };
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0&infinite_hd=true',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
await page.getByRole('button',{name:'+',exact:true}).first().click(); await page.waitForTimeout(400);
const sel=page.locator('select.CustomFields-Repeated-Disk');
await sel.nth((await sel.count())-1).selectOption('disk-file'); await page.waitForTimeout(2000);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
console.log('booting...'); await page.waitForTimeout(76000);
await page.mouse.click(1103,302); await page.waitForTimeout(600); await cmd('o');   // open Warlords disk
await page.waitForTimeout(4000); await shot('u_diskwin');
// app icon in the open (frontmost) disk window ~ (300,263); double-click to launch
await page.mouse.dblclick(300,263,{delay:80}); await page.waitForTimeout(9000); await shot('u_try1');
await page.mouse.dblclick(300,263,{delay:80}); await page.waitForTimeout(9000); await shot('u_try2');
await browser.close();
