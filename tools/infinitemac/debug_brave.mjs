import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords_boot.hda'; const D='tools/infinitemac';
const browser = await chromium.launch({ executablePath: "/Applications/Brave Browser.app/Contents/MacOS/Brave Browser", headless: false, args: ["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:960}});
page.on('console', m=>{const t=m.text(); if(/error|fail|blocked|SharedArrayBuffer|worker|service|audio/i.test(t)) console.log('[c]',t.slice(0,160));});
page.on('pageerror', e=>console.log('[pageerror]',e.message.slice(0,160)));
page.on('filechooser', async fc=>{ await fc.setFiles(HDA); });
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(e=>console.log('goto',e.message));
await page.waitForTimeout(3000); await page.screenshot({path:D+'/brave_home.png'});
const sel=page.locator('select.CustomFields-Repeated-Disk');
console.log('disk selects:', await sel.count());
await sel.first().selectOption('disk-file').catch(e=>console.log('select err',e.message)); await page.waitForTimeout(2500);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click().catch(e=>console.log('run err',e.message));
console.log('booting in brave...');
for (const w of [20,45,75]) { await page.waitForTimeout((w===20?20:25)*1000); await page.screenshot({path:D+'/brave_'+w+'s.png'}); console.log('shot',w); }
await page.waitForTimeout(1800000);
await browser.close();
