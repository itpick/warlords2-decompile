import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const D='tools/infinitemac';
const browser = await chromium.launch({ args:["--autoplay-policy=no-user-gesture-required"] });
const page = await browser.newPage({ viewport:{width:1280,height:1000}});
let enqMenu=0, enqGame=0, inGame=false; const ex=[];
page.on('console',m=>{const t=m.text(); if(t.includes('ENQ_AUDIO')){ if(inGame) enqGame++; else enqMenu++; if(ex.length<6) ex.push(t);} });
await page.goto('http://localhost:3127/?disk=Warlords%20II&machine=Power%20Macintosh%209500',{waitUntil:'domcontentloaded',timeout:60000}).catch(()=>{});
await page.waitForTimeout(62000);                         // -> scenario screen
await page.screenshot({path:D+'/ig_scenario.png'});
console.log('enqueueAudio at MENU:', enqMenu);
// start the scenario: click "Use Selected Scenario" (try a couple of times + a dblclick)
await page.mouse.click(498,663); await page.waitForTimeout(800);
await page.mouse.dblclick(498,663); await page.waitForTimeout(800);
await page.mouse.click(498,663);
inGame=true;
await page.waitForTimeout(18000); await page.screenshot({path:D+'/ig_game.png'});
console.log('enqueueAudio IN-GAME (after starting scenario):', enqGame);
ex.forEach(s=>console.log(s));
await browser.close();
