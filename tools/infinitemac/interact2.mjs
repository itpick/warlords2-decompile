import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA = '/tmp/warlords.hda';
const D = 'tools/infinitemac';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport: { width: 1280, height: 1000 }});
page.on('filechooser', async fc => { await fc.setFiles(HDA); });
const shot = async n => { await page.screenshot({ path: `${D}/${n}.png` }); console.log('shot', n); };
const dbl = async (x,y,l) => { await page.mouse.move(x,y); await page.waitForTimeout(120); await page.mouse.dblclick(x,y,{delay:80}); console.log('dbl',l,x,y); };

await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0', { waitUntil:'networkidle', timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
await page.getByRole('button', { name: '+', exact: true }).first().click();
await page.waitForTimeout(400);
const sel = page.locator('select.CustomFields-Repeated-Disk');
await sel.nth((await sel.count())-1).selectOption('disk-file');
await page.waitForTimeout(2000);
await page.locator('footer').getByRole('button', { name: 'Run', exact: true }).first().click();
console.log('booting...'); await page.waitForTimeout(70000);
// dismiss dialog
await page.mouse.click(776,356); await page.waitForTimeout(2000);
// click empty desktop to defocus stickies
await page.mouse.click(640,780); await page.waitForTimeout(800);
await shot('k_pre');
// open Warlords II disk (try a couple of y offsets)
await dbl(1103,232,'disk@232'); await page.waitForTimeout(4000); await shot('k_open1');
await dbl(1103,240,'disk@240'); await page.waitForTimeout(4000); await shot('k_open2');
await browser.close();
