import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords_boot.hda';
let browser;
try {
  browser = await chromium.launch({ channel: 'chrome', headless: false, args: ["--autoplay-policy=no-user-gesture-required"] });
  console.log('USING INSTALLED GOOGLE CHROME (real audio output)');
} catch (e) {
  console.log('No installed Chrome ('+e.message.slice(0,80)+') — falling back to bundled Chromium (likely silent)');
  browser = await chromium.launch({ headless: false, args: ["--autoplay-policy=no-user-gesture-required"] });
}
const page = await browser.newPage({ viewport:{width:1280,height:960}});
page.on('filechooser', async fc=>{ await fc.setFiles(HDA); });
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0&machine=Power%20Macintosh%209500',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
const sel=page.locator('select.CustomFields-Repeated-Disk');
await sel.first().selectOption('disk-file'); await page.waitForTimeout(2500);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
console.log('Booting — listen for the startup chime + game sound. Click NO on the color dialog.');
await page.waitForTimeout(1800000);
await browser.close();
