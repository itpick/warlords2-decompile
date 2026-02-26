# City Build Selection Implementation Plan

> **For Claude:** REQUIRED SUB-SKILL: Use superpowers:executing-plans to implement this plan task-by-task.

**Goal:** Replace `ShowCityProductionDialog` with `ShowCityBuildSelection` — a full-window overlay with a live map on the left and city production controls on the right, matching the original Warlords II layout.

**Architecture:** Single self-contained `CWindow` the same size as the main game window. Left half renders the map via `DrawMapInWindow`. Right half draws marble background, faction name, CAPITAL shield, Current indicator, up to 4 unit-type rings+sprites, STOP button, bottom action buttons, Done. Replaces all `ShowCityProductionDialog` call sites.

**Tech Stack:** Classic Mac OS Toolbox (QuickDraw, WindowManager), Retro68/GCC PPC cross-compile, deployed via `./src/deploy.sh solo`.

---

### Task 1: Add forward declaration for `ShowCityBuildSelection`

**Files:**
- Modify: `src/main.c` — find the line with `static void ShowCityProductionDialog(short cityIndex);` (around line 9861) and add a new forward decl directly below it.

**Step 1: Find the forward declaration**

```bash
grep -n "ShowCityProductionDialog" src/main.c | head -5
```

Expected output includes a line like `9861: static void ShowCityProductionDialog(short cityIndex);`

**Step 2: Add the new forward declaration**

After `static void ShowCityProductionDialog(short cityIndex);`, add:
```c
static void ShowCityBuildSelection(short cityIndex);
```

**Step 3: Build to confirm no new errors**

```bash
cd src && ./deploy.sh solo 2>&1 | grep -E "error:|warning:.*ShowCity" | head -10
```
Expected: no new errors.

**Step 4: Commit**

```bash
git add src/main.c
git commit -m "Add ShowCityBuildSelection forward declaration"
```

---

### Task 2: Implement `ShowCityBuildSelection` — window creation and map rendering

**Files:**
- Modify: `src/main.c` — insert new function immediately before the existing `ShowCityProductionDialog` implementation (around line 19080). Find it with:
  ```bash
  grep -n "^static void ShowCityProductionDialog" src/main.c
  ```

**Step 1: Insert the function skeleton + window creation**

Insert before `ShowCityProductionDialog`:

```c
/* ===================================================================
 * ShowCityBuildSelection — Full-window city production UI
 * Layout: left half = live map, right half = marble panel with
 * faction name, CAPITAL shield, Current indicator, unit rings, Done.
 * =================================================================== */
static void ShowCityBuildSelection(short cityIndex)
{
    WindowPtr   bsWin;
    GWorldPtr   bsGW;
    Rect        winRect, gwRect;
    EventRecord bsEvt;
    Boolean     bsDone = false;
    short       redraw = 1;
    unsigned char *gs, *city;
    short       curPlayer, cityOwner;
    short       panelX;          /* x where right panel starts */
    short       winW, winH;
    short       selectedType = -1;   /* -1 = STOP/none */
    short       typeList[4];
    short       typeCount = 0;
    short       i;

    if (*gGameState == 0 || *gExtState == 0) return;
    if (cityIndex < 0 || cityIndex >= 40) return;
    gs = (unsigned char *)*gGameState;
    city = gs + 0x812 + cityIndex * 0x20;
    curPlayer = *(short *)(gs + 0x110);
    cityOwner = *(short *)(city + 0x04);
    if (cityOwner != curPlayer) return;   /* only own cities */

    /* Read production slots from extCity+0x06..0x0D (up to 4 types) */
    {
        unsigned char *ext = (unsigned char *)*gExtState;
        unsigned char *extCity = ext + 0x24c + cityIndex * 0x5c;
        short curProd = *(short *)(extCity + 0x02);
        for (i = 0; i < 4; i++) {
            short pType = *(short *)(extCity + 0x06 + i * 2);
            if (pType >= 0 && pType < MAX_UNIT_TYPES)
                typeList[typeCount++] = pType;
        }
        if (typeCount == 0) {
            /* Fallback: first 4 unit types */
            short max4 = sUnitTypesLoaded ? sUnitTypeCount : 4;
            if (max4 > 4) max4 = 4;
            for (typeCount = 0; typeCount < max4; typeCount++)
                typeList[typeCount] = typeCount;
        }
        /* Pre-select current production */
        selectedType = curProd;
        if (selectedType < 0) selectedType = -1;
    }

    /* Window same size as main game window (or 512x342 fallback) */
    if (*gMainGameWindow != 0) {
        winRect = ((WindowPtr)*gMainGameWindow)->portRect;
        /* Convert portRect to global coords */
        {
            Point tl = {winRect.top, winRect.left};
            Point br = {winRect.bottom, winRect.right};
            SetPort((WindowPtr)*gMainGameWindow);
            LocalToGlobal(&tl);
            LocalToGlobal(&br);
            SetRect(&winRect, tl.h, tl.v, br.h, br.v);
        }
    } else {
        SetRect(&winRect, 0, 0, 512, 342);
        OffsetRect(&winRect,
            (qd.screenBits.bounds.right - 512) / 2,
            (qd.screenBits.bounds.bottom - 342) / 2);
    }
    winW = winRect.right  - winRect.left;
    winH = winRect.bottom - winRect.top;
    panelX = winW / 2;    /* right panel starts at horizontal midpoint */

    bsWin = NewCWindow(NULL, &winRect, "\p", true,
                       plainDBox, (WindowPtr)-1L, false, 0);
    if (bsWin == NULL) return;

    SetRect(&gwRect, 0, 0, winW, winH);
    NewGWorld(&bsGW, 0, &gwRect, NULL, NULL, 0);
    if (bsGW == NULL) { DisposeWindow(bsWin); return; }

    SetPort(bsWin);
```

**Step 2: Build to confirm it compiles (incomplete function — will get "missing return" or brace warnings)**

```bash
cd src && ./deploy.sh solo 2>&1 | grep "error:" | head -10
```

Do not worry about warnings yet. If there are `error:` lines fix them before proceeding.

---

### Task 3: Implement map rendering into the left half

**Files:**
- Modify: `src/main.c` — continue the `ShowCityBuildSelection` function body (the event loop goes at the end).

**Step 1: Understand `DrawMapInWindow`**

Read lines around `DrawMapInWindow` (line ~6561). It takes a `WindowPtr` and draws into its portRect using `sViewportX`/`sViewportY` globals. We will render the map into our offscreen GWorld then blit.

**Step 2: Add map render + right-panel draw into the redraw block**

Inside the `while (!bsDone)` loop (add after the variable declarations above), add:

```c
    while (!bsDone) {
        if (redraw) {
            CGrafPtr savePort;
            GDHandle saveGD;
            Rect leftR, rightR;

            SetRect(&leftR,  0,      0, panelX, winH);
            SetRect(&rightR, panelX, 0, winW,   winH);

            GetGWorld(&savePort, &saveGD);
            SetGWorld(bsGW, NULL);
            LockPixels(GetGWorldPixMap(bsGW));

            /* --- Left half: render the map --- */
            /* Temporarily set port to our GWorld and draw map tiles */
            {
                /* Draw terrain tiles directly into left half of GWorld */
                unsigned char *mapData = (*gMapTiles != 0) ? (unsigned char *)*gMapTiles : NULL;
                if (mapData != NULL) {
                    short tx, ty;
                    short tilesWide = panelX / TERRAIN_TILE_W + 1;
                    short tilesHigh = winH   / TERRAIN_TILE_H + 1;
                    for (ty = 0; ty < tilesHigh; ty++) {
                        for (tx = 0; tx < tilesWide; tx++) {
                            short mapX = sViewportX + tx;
                            short mapY = sViewportY + ty;
                            Rect  dstR;
                            /* (simplified: fill with dark green if no terrain loaded) */
                            SetRect(&dstR,
                                    tx * TERRAIN_TILE_W,
                                    ty * TERRAIN_TILE_H,
                                    tx * TERRAIN_TILE_W + TERRAIN_TILE_W,
                                    ty * TERRAIN_TILE_H + TERRAIN_TILE_H);
                            if (mapX >= 0 && mapX < sMapWidth &&
                                mapY >= 0 && mapY < sMapHeight) {
                                /* Use the existing tile-draw path */
                                DrawOneTile(mapX, mapY, &dstR);
                            } else {
                                RGBColor dark = {0x2222, 0x3333, 0x2222};
                                RGBForeColor(&dark);
                                PaintRect(&dstR);
                            }
                        }
                    }
                } else {
                    RGBColor dark = {0x2222, 0x3333, 0x2222};
                    RGBForeColor(&dark);
                    PaintRect(&leftR);
                }

                /* Red rectangle around capital tile */
                {
                    short capX = *(short *)(city + 0x00);
                    short capY = *(short *)(city + 0x02);
                    short sx = (capX - sViewportX) * TERRAIN_TILE_W;
                    short sy = (capY - sViewportY) * TERRAIN_TILE_H;
                    if (sx >= 0 && sx < panelX && sy >= 0 && sy < winH) {
                        Rect capR;
                        RGBColor red = {0xFFFF, 0x2222, 0x2222};
                        SetRect(&capR, sx, sy, sx + TERRAIN_TILE_W, sy + TERRAIN_TILE_H);
                        RGBForeColor(&red);
                        PenSize(2, 2);
                        FrameRect(&capR);
                        PenNormal();
                    }
                }
            }

            /* --- Right half: marble background --- */
            DrawMarbleBackground(&rightR);
```

**Step 3: Check if `DrawOneTile` exists; if not, use a simpler approach**

```bash
grep -n "DrawOneTile\|static.*DrawOneTile" src/main.c | head -5
```

If `DrawOneTile` doesn't exist, replace the tile loop with a simple fallback:
```c
RGBColor mapGreen = {0x2222, 0x5555, 0x2222};
RGBForeColor(&mapGreen);
PaintRect(&leftR);
```
We will refine map rendering in a follow-up task.

**Step 4: Build**

```bash
cd src && ./deploy.sh solo 2>&1 | grep "error:" | head -10
```

---

### Task 4: Draw the right panel — faction name, CAPITAL shield, Current indicator

**Files:**
- Modify: `src/main.c` — continuing the redraw block in `ShowCityBuildSelection`.

**Step 1: Add faction name and CAPITAL row**

After the marble background call, add:

```c
            /* --- Faction name (Illuria 24pt gold) --- */
            {
                RGBColor gold = {0xFFFF, 0xDDDD, 0x4444};
                Str255 fname;
                short flen = 0;
                unsigned char *fn = gs + curPlayer * FACTION_NAME_LEN;
                while (flen < 19 && fn[flen]) flen++;
                fname[0] = (unsigned char)flen;
                BlockMoveData(fn, fname + 1, flen);

                TextFont(2);   /* Illuria */
                TextSize(24);
                TextFace(bold);
                RGBForeColor(&gold);
                {
                    short tw = StringWidth(fname);
                    MoveTo(panelX + (winW - panelX - tw) / 2, 32);
                    DrawString(fname);
                }
                TextFace(0); TextFont(3); TextSize(9);
            }

            /* --- "CAPITAL" label + shield --- */
            {
                RGBColor white  = {0xFFFF, 0xFFFF, 0xFFFF};
                RGBColor silver = {0xAAAA, 0xAAAA, 0xAAAA};
                short shieldX = panelX + 8;
                short shieldY = 44;
                Rect shieldR;
                SetRect(&shieldR, shieldX, shieldY, shieldX + 20, shieldY + 20);
                DrawShieldIcon(curPlayer, &shieldR);

                RGBForeColor(&silver);
                TextFont(3); TextSize(7); TextFace(bold);
                MoveTo(shieldX + 22, shieldY + 8);
                DrawString("\pCAPITAL");
                TextFace(0); TextSize(9);

                /* "Current:" label */
                RGBForeColor(&white);
                MoveTo(shieldX + 70, shieldY + 14);
                DrawString("\pCurrent:");

                /* Current production ring */
                {
                    short ringCX = shieldX + 140;
                    short ringCY = shieldY + 10;
                    short ringR2 = 18;
                    Rect ringOval;
                    SetRect(&ringOval, ringCX - ringR2, ringCY - ringR2,
                                       ringCX + ringR2, ringCY + ringR2);
                    if (selectedType < 0) {
                        /* Empty grey ring */
                        RGBColor grey = {0x6666, 0x6666, 0x6666};
                        RGBForeColor(&grey);
                        PenSize(2, 2);
                        FrameOval(&ringOval);
                        PenNormal();
                    } else {
                        /* Filled ring + sprite */
                        RGBColor ringFill = {0x6666, 0x5555, 0xCCCC};
                        RGBForeColor(&ringFill);
                        PaintOval(&ringOval);
                        /* Draw unit sprite centered on ring */
                        /* (sprite draw deferred to Task 5) */
                    }
                }
            }
```

**Step 2: Build and confirm the faction name and CAPITAL row render**

```bash
cd src && ./deploy.sh solo 2>&1 | grep "error:" | head -5
```

---

### Task 5: Draw unit type rings and sprites

**Files:**
- Modify: `src/main.c` — continuing the redraw block.

**Step 1: Understand the sprite GWorld structure**

```bash
grep -n "sUnitSpriteGWorld\|sArmyGWorld\|sSpriteGW\|army.*gworld\|GWorld.*army\|army.*sprite" src/main.c | head -10
```

This tells us the GWorld array name holding army sprites.

**Step 2: Add unit ring row**

After the CAPITAL row code, add:

```c
            /* --- Unit type rings + sprites row --- */
            {
                short rowY = 72;
                short ringR2 = 18;
                short slotW  = 44;   /* spacing between ring centers */
                short rowStartX = panelX + 12;
                short si;

                for (si = 0; si < typeCount; si++) {
                    short typeIdx = typeList[si];
                    short cx = rowStartX + si * slotW + ringR2;
                    short cy = rowY + ringR2;
                    Rect ringOval;
                    SetRect(&ringOval, cx - ringR2, cy - ringR2,
                                       cx + ringR2, cy + ringR2);

                    if (si == /* index of selectedType in typeList */ -1) {
                        /* Selected: solid purple ring */
                        RGBColor sel = {0x6666, 0x5555, 0xCCCC};
                        RGBForeColor(&sel);
                        PaintOval(&ringOval);
                    } else {
                        /* Unselected: grey outline */
                        RGBColor grey = {0x5555, 0x5555, 0x5555};
                        RGBForeColor(&grey);
                        PenSize(2, 2);
                        FrameOval(&ringOval);
                        PenNormal();
                    }

                    /* Draw army sprite (typeIdx) centered on ring */
                    /* Army sprites: 29x32px in sArmySpriteGW, row stride 30px */
                    /* DrawArmySpriteAt(typeIdx, cx - 14, cy - 16) */
                    /* (use whatever army sprite draw helper exists) */
                }

                /* STOP button */
                {
                    short stopX = rowStartX + typeCount * slotW + 4;
                    short stopY = rowY;
                    Rect stopR;
                    RGBColor stopRed = {0xDDDD, 0x2222, 0x2222};
                    RGBColor white   = {0xFFFF, 0xFFFF, 0xFFFF};
                    SetRect(&stopR, stopX, stopY, stopX + 36, stopY + 36);
                    RGBForeColor(&stopRed);
                    PaintRoundRect(&stopR, 8, 8);
                    RGBForeColor(&white);
                    PenSize(2, 2);
                    FrameRoundRect(&stopR, 8, 8);
                    PenNormal();
                    TextFont(3); TextSize(8); TextFace(bold);
                    MoveTo(stopX + 5, stopY + 21);
                    DrawString("\pSTOP");
                    TextFace(0); TextSize(9);
                }
            }
```

**Step 3: Fix the "selected ring" check**

Replace the placeholder `/* index of selectedType in typeList */ -1` with the actual comparison:
```c
                    if (typeIdx == selectedType) {
```

**Step 4: Find the army sprite drawing code and plug it in**

```bash
grep -n "army.*sprite\|DrawArmySprite\|sArmySprite\|CopyBits.*army\|army.*GWorld\|GWorld.*army" src/main.c | head -15
```

Use the existing sprite draw path (same code used in the stack dialog and city dialog) to draw each unit type sprite centered on its ring oval.

**Step 5: Build and test**

```bash
cd src && ./deploy.sh solo 2>&1 | grep "error:" | head -5
```

---

### Task 6: Draw bottom action buttons and Done button

**Files:**
- Modify: `src/main.c` — continuing the redraw block.

**Step 1: Find the existing city dialog bottom button rendering**

```bash
grep -n "bottom.*button\|CITY_BTN\|action.*button\|DrawCityButton\|cityBtn\|bBtn\|PICT 1603\|PICT 1604\|PICT 1605" src/main.c | head -10
```

Use the same PICT IDs and draw calls as `ShowCityDialog`.

**Step 2: Add bottom row**

After the unit rings block, add:

```c
            /* --- Bottom action buttons + Done --- */
            {
                short btnY = winH - 40;
                short btnH = 32;
                short btnW = 32;
                short btnX = panelX + 8;
                RGBColor black = {0,0,0};
                RGBColor white = {0xFFFF, 0xFFFF, 0xFFFF};
                short bi;
                short btnPicts[] = {1602, 1603, 1604, 1605};  /* adjust to actual IDs */
                for (bi = 0; bi < 4; bi++) {
                    Rect btnR;
                    PicHandle ph;
                    SetRect(&btnR, btnX + bi * (btnW + 4), btnY,
                                   btnX + bi * (btnW + 4) + btnW, btnY + btnH);
                    RGBForeColor(&black);
                    PaintRect(&btnR);
                    ph = GetPicture(btnPicts[bi]);
                    if (ph) DrawPicture(ph, &btnR);
                }

                /* Done button */
                {
                    Rect doneR;
                    SetRect(&doneR, winW - 60, btnY, winW - 8, btnY + btnH);
                    RGBForeColor(&black);
                    PaintRoundRect(&doneR, 8, 8);
                    RGBForeColor(&white);
                    PenSize(2, 2);
                    FrameRoundRect(&doneR, 8, 8);
                    PenNormal();
                    TextFont(3); TextSize(11); TextFace(bold);
                    MoveTo(doneR.left + 10, btnY + 21);
                    DrawString("\pDone");
                    TextFace(0); TextSize(9);
                }
            }
```

**Step 3: Finish the redraw block and blit to window**

After all drawing code, add:

```c
            /* --- Blit offscreen GWorld to window --- */
            UnlockPixels(GetGWorldPixMap(bsGW));
            SetGWorld(savePort, saveGD);
            SetPort(bsWin);
            {
                PixMapHandle pm = GetGWorldPixMap(bsGW);
                LockPixels(pm);
                CopyBits((BitMap *)*pm,
                         &bsWin->portBits,
                         &gwRect, &gwRect,
                         srcCopy, NULL);
                UnlockPixels(pm);
            }
            redraw = 0;
        }   /* end if (redraw) */
```

**Step 4: Build**

```bash
cd src && ./deploy.sh solo 2>&1 | grep "error:" | head -5
```

---

### Task 7: Implement the event loop (click handling)

**Files:**
- Modify: `src/main.c` — add the event loop after the redraw block.

**Step 1: Add event loop**

```c
        /* Event loop */
        if (WaitNextEvent(mDownMask | keyDownMask, &bsEvt, 20, NULL)) {
            if (bsEvt.what == mouseDown) {
                Point mp = bsEvt.where;
                GlobalToLocal(&mp);

                /* Check unit ring clicks */
                {
                    short rowY = 72, ringR2 = 18, slotW = 44;
                    short rowStartX = panelX + 12;
                    short si;
                    for (si = 0; si < typeCount; si++) {
                        short cx = rowStartX + si * slotW + ringR2;
                        short cy = rowY + ringR2;
                        short dx = mp.h - cx, dy = mp.v - cy;
                        if (dx*dx + dy*dy <= ringR2*ringR2) {
                            selectedType = typeList[si];
                            redraw = 1;
                            break;
                        }
                    }
                }

                /* Check STOP button */
                {
                    short rowY = 72, slotW = 44;
                    short rowStartX = panelX + 12;
                    short stopX = rowStartX + typeCount * slotW + 4;
                    Rect stopR;
                    SetRect(&stopR, stopX, rowY, stopX + 36, rowY + 36);
                    if (PtInRect(mp, &stopR)) {
                        selectedType = -1;
                        redraw = 1;
                    }
                }

                /* Check Done button */
                {
                    short btnY = winH - 40, btnH = 32;
                    Rect doneR;
                    SetRect(&doneR, winW - 60, btnY, winW - 8, btnY + btnH);
                    if (PtInRect(mp, &doneR)) {
                        bsDone = true;
                    }
                }

            } else if (bsEvt.what == keyDown) {
                char ch = (char)(bsEvt.message & charCodeMask);
                short keyCode = (bsEvt.message >> 8) & 0xFF;

                if (ch == 13 || ch == 3) {          /* Enter/Return: Done */
                    bsDone = true;
                } else if (ch == 27) {              /* Escape: cancel */
                    selectedType = -2;   /* sentinel: no change */
                    bsDone = true;
                } else if (keyCode == 0x7B || ch == 28) {  /* Left arrow */
                    short curIdx = -1, si;
                    for (si = 0; si < typeCount; si++)
                        if (typeList[si] == selectedType) { curIdx = si; break; }
                    if (curIdx > 0) { selectedType = typeList[curIdx - 1]; redraw = 1; }
                } else if (keyCode == 0x7C || ch == 29) {  /* Right arrow */
                    short curIdx = -1, si;
                    for (si = 0; si < typeCount; si++)
                        if (typeList[si] == selectedType) { curIdx = si; break; }
                    if (curIdx >= 0 && curIdx < typeCount - 1) {
                        selectedType = typeList[curIdx + 1]; redraw = 1;
                    }
                }
            }
        }
    }   /* end while (!bsDone) */
```

**Step 2: Add the commit/cleanup block after the event loop**

```c
    /* Write selection back to extCity (unless Escape'd) */
    if (selectedType != -2 && *gExtState != 0) {
        unsigned char *ext = (unsigned char *)*gExtState;
        unsigned char *extCity = ext + 0x24c + cityIndex * 0x5c;
        if (selectedType >= 0) {
            *(short *)(extCity + 0x02) = selectedType;
            *(short *)(extCity + 0x58) = GetProductionTurns(selectedType);
        } else {
            *(short *)(extCity + 0x02) = -1;
        }
    }

    DisposeGWorld(bsGW);
    DisposeWindow(bsWin);

    /* Redraw main window */
    if (*gMainGameWindow != 0) {
        SetPort((WindowPtr)*gMainGameWindow);
        InvalRect(&((WindowPtr)*gMainGameWindow)->portRect);
    }
}   /* end ShowCityBuildSelection */
```

**Step 3: Build**

```bash
cd src && ./deploy.sh solo 2>&1 | grep "error:" | head -10
```

---

### Task 8: Replace all `ShowCityProductionDialog` call sites with `ShowCityBuildSelection`

**Files:**
- Modify: `src/main.c` — all call sites.

**Step 1: Find all call sites**

```bash
grep -n "ShowCityProductionDialog" src/main.c
```

Expected sites (from earlier research):
- Line ~12511: city capture handler
- Line ~22299: turn-start production prompt loop
- Line ~25385: double-click on own city
- Line ~25412: re-click selected army on own city
- Line ~25628: single click on unoccupied own city
- Additional: lines ~24494, ~25151, ~25363, ~25390, ~25606

**Step 2: Replace each call site**

For every `ShowCityProductionDialog(ci)` or `ShowCityProductionDialog(cityIndex)` call, replace with `ShowCityBuildSelection(ci)` / `ShowCityBuildSelection(cityIndex)`.

Do NOT replace any lines inside the `ShowCityProductionDialog` function itself.

**Step 3: Build**

```bash
cd src && ./deploy.sh solo 2>&1 | grep "error:" | head -10
```

**Step 4: Commit**

```bash
git add src/main.c
git commit -m "Replace ShowCityProductionDialog with ShowCityBuildSelection"
```

---

### Task 9: Refine map rendering in left panel

**Files:**
- Modify: `src/main.c` — improve the left-half map draw in `ShowCityBuildSelection`.

**Step 1: Check if there's a minimap/overview draw helper**

```bash
grep -n "DrawMiniMap\|DrawOverview\|gOverviewWindow\|DrawMapOverview\|OverviewDraw" src/main.c | head -10
```

**Step 2: Use `DrawMapInWindow` into a temporary port**

The cleanest approach is to temporarily redirect `DrawMapInWindow` into a clip region covering only the left half. Add after window creation:

```c
    /* Render map into left half by clipping DrawMapInWindow */
    SetPort(bsGW);
    {
        RgnHandle clip = NewRgn();
        Rect leftR;
        SetRect(&leftR, 0, 0, panelX, winH);
        RectRgn(clip, &leftR);
        SetClip(clip);
        DrawMapInWindow((WindowPtr)bsGW);  /* NOTE: bsGW is a GWorldPtr, cast carefully */
        ClipRect(&gwRect);  /* restore full clip */
        DisposeRgn(clip);
    }
```

If `DrawMapInWindow` can't accept a GWorldPtr directly, extract the tile-draw loop from it into a helper `DrawMapTiles(CGrafPtr port, Rect *zone)` and call that.

**Step 3: Build and visually verify the map appears in the left panel**

```bash
cd src && ./deploy.sh solo 2>&1 | grep "error:" | head -5
```

**Step 4: Commit**

```bash
git add src/main.c
git commit -m "Improve map rendering in city build selection left panel"
```

---

### Task 10: Final visual polish and army sprite rendering

**Files:**
- Modify: `src/main.c` — unit sprite draw in ring, Current indicator sprite.

**Step 1: Find army sprite draw pattern used in city dialog**

```bash
grep -n "sArmySpriteGW\|sArmyGW\|army.*sprite.*GWorld\|CopyBits.*army\|army.*CopyBits" src/main.c | head -10
```

**Step 2: Plug sprite draw into the ring loop**

Using the same `CopyBits` + mode-36 transparent blit pattern used in the stack dialog and city dialog. Each ring center = `(cx, cy)`; sprite is 29×32px, so offset `(cx-14, cy-16)`.

**Step 3: Plug sprite draw into the Current indicator ring**

Same approach, ring center at `(shieldX + 140, shieldY + 10)`.

**Step 4: Build and visual test**

Start a new game, verify:
- Turn 1: `ShowCityBuildSelection` fires for capital with no production
- Click capital: dialog opens again
- Rings highlight on click
- Done saves production; next turn does not re-prompt
- STOP clears production; next turn re-prompts

```bash
cd src && ./deploy.sh solo 2>&1 | grep "error:" | head -5
```

**Step 5: Final commit**

```bash
git add src/main.c
git commit -m "City build selection: sprite rendering, visual polish"
```
