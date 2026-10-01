import pkg from '/opt/homebrew/lib/node_modules/playwright/index.js';
const { chromium } = pkg;
const HDA = process.argv[2] || '/tmp/warlords.hda';
const browser = await chromium.launch();
const page = await browser.newPage({ viewport: { width: 1280, height: 1000 }});
page.on('console', m => { const t=m.text(); if(/Unexpected|cannot|corrupt|warlord|partition/i.test(t)) console.log('[c]', t.slice(0,150)); });
// Feed the disk file whenever a file chooser opens
page.on('filechooser', async fc => { console.log('filechooser -> setFiles', HDA); await fc.setFiles(HDA); });

await page.goto('http://localhost:3127/?edit&disk=Mac%20OS%209.0', { waitUntil:'networkidle', timeout:60000}).catch(e=>console.log('goto',e.message));
await page.waitForTimeout(2500);

// The disk row select(s) have class CustomFields-Repeated-Disk. Add a new row via its "+" button.
const plusButtons = page.locator('footer ~ *, .Dialog-Content').first();
// Click the "+" AddRemove button in the first disk row to add a second row
const addBtns = page.getByRole('button', { name: '+', exact: true });
const nAdd = await addBtns.count();
console.log('"+" buttons found:', nAdd);
if (nAdd > 0) { await addBtns.first().click(); await page.waitForTimeout(500); }

// Now set the LAST disk select to "disk-file"
const diskSelects = page.locator('select.CustomFields-Repeated-Disk');
const nSel = await diskSelects.count();
console.log('disk selects:', nSel);
await diskSelects.nth(nSel-1).selectOption('disk-file');
await page.waitForTimeout(2500); // allow file read + runDef update

await page.screenshot({ path: 'tools/infinitemac/dialog_with_disk.png' });
const dlgText = await page.locator('.Dialog-Content').first().innerText().catch(()=>'(no dialog content)');
console.log('--- dialog content ---\n' + dlgText.slice(0,600));

// Click Run in the dialog footer
const runBtn = page.locator('footer').getByRole('button', { name: 'Run', exact: true });
console.log('footer Run count:', await runBtn.count());
await runBtn.first().click();
console.log('clicked Run, booting...');

for (const w of [40, 75]) {
  await page.waitForTimeout(w===40?40000:35000);
  await page.screenshot({ path: `tools/infinitemac/run_${w}s.png` });
  console.log('shot at', w, 's');
}
await browser.close();
