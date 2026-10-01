import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
let abort=false, enq=0; const logs=[];
page.on('console',m=>{const t=m.text(); if(/Aborted|out of bounds/i.test(t)) abort=true; if(t.includes('ENQ_AUDIO')) enq++; if(/audio|Initializing|error|dingus|boot/i.test(t)&&logs.length<12) logs.push(t.slice(0,120));});
page.on('pageerror',e=>logs.push('ERR: '+e.message.slice(0,100)));
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%207200',{waitUntil:'domcontentloaded',timeout:60000}).catch(e=>console.log('goto',e.message));
for (const w of [45,75,100]) { await page.waitForTimeout((w===45?45:25)*1000); await page.screenshot({path:`${D}/dingus_${w}s.png`}); console.log('shot',w,'abort:',abort,'enqAudio:',enq); }
console.log('--- logs ---'); logs.forEach(l=>console.log(l));
await browser.close();
