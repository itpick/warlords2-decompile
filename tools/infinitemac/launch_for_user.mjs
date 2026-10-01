import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords_boot.hda';
const browser = await chromium.launch({ headless: false, args: ["--autoplay-policy=no-user-gesture-required", "--enable-features=SharedArrayBuffer"] });
const page = await browser.newPage({ viewport:{width:1280,height:960}});
page.on('filechooser', async fc=>{ await fc.setFiles(HDA); });
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0&machine=Power%20Macintosh%209500',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
const sel=page.locator('select.CustomFields-Repeated-Disk');
await sel.first().selectOption('disk-file'); await page.waitForTimeout(2500);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
console.log('BOOTING — Warlords II will auto-launch in ~75s. Window stays open 30 min. Drive it with your mouse/keyboard.');
await page.waitForTimeout(1800000);  // keep window open 30 minutes for you to play
await browser.close();
