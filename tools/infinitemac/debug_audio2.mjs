import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords_boot.hda';
const browser = await chromium.launch({ headless: true, args: ["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1024,height:768}});
// track every AudioContext: its state over time
await page.addInitScript(() => {
  window.__acs = [];
  const O = window.AudioContext;
  window.AudioContext = class extends O {
    constructor(...a){ super(...a); window.__acs.push(this); console.log('AC_CREATED state='+this.state+' sr='+this.sampleRate); }
  };
});
page.on('console', m => { const t=m.text(); if(/AC_CREATED|Initializing audio|suspend|resume/i.test(t)) console.log('[c]',t.slice(0,160)); });
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0&machine=Power%20Macintosh%209500',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
const sel=page.locator('select.CustomFields-Repeated-Disk');
await sel.first().selectOption('disk-file'); await page.waitForTimeout(2500);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
await page.waitForTimeout(50000);
const states = await page.evaluate(() => (window.__acs||[]).map(a => ({state:a.state, sr:a.sampleRate, baseLatency:a.baseLatency})));
console.log('=== AudioContext instances after boot ===', JSON.stringify(states,null,1));
await browser.close();
