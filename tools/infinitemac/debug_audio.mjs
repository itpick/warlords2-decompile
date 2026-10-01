import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA='/tmp/warlords_boot.hda';
const browser = await chromium.launch({ headless: true, args: ["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1024,height:768}});
const audioLogs=[];
page.on('console', m => { const t=m.text(); if(/audio|sound|sample|AudioContext|SharedArrayBuffer|worklet|ringbuf|suspend|crossOrigin/i.test(t)) audioLogs.push(t.slice(0,200)); });
page.on('pageerror', e => audioLogs.push('PAGEERROR: '+e.message.slice(0,160)));
await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0&machine=Power%20Macintosh%209500',{waitUntil:'networkidle',timeout:60000}).catch(()=>{});
await page.waitForTimeout(2500);
const sel=page.locator('select.CustomFields-Repeated-Disk');
await sel.first().selectOption('disk-file'); await page.waitForTimeout(2500);
await page.locator('footer').getByRole('button',{name:'Run',exact:true}).first().click();
await page.waitForTimeout(50000);  // let it boot + init audio
const env = await page.evaluate(() => ({
  crossOriginIsolated: self.crossOriginIsolated,
  hasSAB: typeof SharedArrayBuffer !== 'undefined',
  hasAudioContext: typeof AudioContext !== 'undefined',
  audioWorklet: typeof AudioWorkletNode !== 'undefined',
}));
console.log('=== ENV ===', JSON.stringify(env,null,1));
console.log('=== AUDIO-RELATED CONSOLE LOGS ===');
console.log(audioLogs.length ? audioLogs.join('\n') : '(none captured)');
await browser.close();
