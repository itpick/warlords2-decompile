import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA = '/tmp/warlords.hda';
const SHOTDIR = 'tools/infinitemac';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport: { width: 1280, height: 1000 }});
page.on('filechooser', async fc => { await fc.setFiles(HDA); });

async function shot(name){ await page.screenshot({ path: `${SHOTDIR}/${name}.png` }); console.log('shot', name); }
async function click(x,y,label){ await page.mouse.click(x,y); console.log('click',label||'',x,y); }
async function dbl(x,y,label){ await page.mouse.dblclick(x,y); console.log('dblclick',label||'',x,y); }

// --- boot with Mac OS 9.0 + warlords.hda via custom builder ---
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0', { waitUntil:'networkidle', timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
await page.getByRole('button', { name: '+', exact: true }).first().click();
await page.waitForTimeout(400);
const sel = page.locator('select.CustomFields-Repeated-Disk');
await sel.nth((await sel.count())-1).selectOption('disk-file');
await page.waitForTimeout(2000);
await page.locator('footer').getByRole('button', { name: 'Run', exact: true }).first().click();
console.log('booting...');
await page.waitForTimeout(70000);
await shot('iw_desktop');

// dismiss "Infinite HD" dialog -> Continue
await click(776, 356, 'Continue');
await page.waitForTimeout(1500);
await shot('iw_after_continue');

// open the Warlords II disk (top-right, under Macintosh HD)
await dbl(1103, 228, 'Warlords II disk');
await page.waitForTimeout(3500);
await shot('iw_disk_open');
await browser.close();
