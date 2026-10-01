import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords_boot.hda'; const D='tools/infinitemac';
const browser = await chromium.launch({ headless: false });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
page.on('filechooser', async fc=>{ await fc.setFiles(HDA); });
const shot=async n=>{ await page.screenshot({path:`${D}/${n}.png`}); const e=await page.locator('text=Emulator Error').count(); console.log('shot',n,'emu_error:',e); };
// custom builder, NO system disk -> set the single disk row to our bootable disk-file
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0&machine=Power%20Macintosh%209500',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
const sel=page.locator('select.CustomFields-Repeated-Disk');
const n = await sel.count(); console.log('disk selects:', n);
await sel.first().selectOption('disk-file');   // replace default with our bootable disk
await page.waitForTimeout(2500);
await shot('B_dialog');  // confirm disk added
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
console.log('booting self-booting disk...');
let _t=0; for (const w of [30,40,50,60,70,80,90,100,110,120]) { await page.waitForTimeout((w-_t)*1000); _t=w; await shot("B_"+w+"s"); }
console.log("window staying open ~3min so you can watch/interact..."); await page.waitForTimeout(180000); await browser.close();
