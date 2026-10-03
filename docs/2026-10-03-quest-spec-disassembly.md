# Warlords II PPC 1.0.7 — quest system, exact spec (from disassembly)

All addresses PPC code. Source: capstone disassembly of tools/ppc_verification/wl2_code.bin
(listings kept in SCRATCH/qgen.txt, SCRATCH/qview_a.txt, SCRATCH/q/qca.txt, SCRATCH/qdone.txt,
SCRATCH/q/vict.txt, full binary SCRATCH/q/all.txt).

## Conventions

- `gs` = game state, `me` = `gs+0x110` (current player).
- `Q` = quest record `gs+0x1142 + me*0xC`, six shorts:
  - `Q.active` (+0)
  - `Q.type` (+2)
  - `Q.hero` (+4, unit index)
  - `Q.target` (+6)
  - `Q.amount` (+8)
  - `Q.progress` (+0xA)
- `U[i]` = unit `i` (`_DAT_60000000` = data+0xafd0, 0x16 bytes per unit):
  - `.x` +0, `.y` +2 (shorts)
  - `.type` +4, `.owner` +5 (signed bytes)
  - `.nameSlot` +10 (byte); the hero name is at `gs+0x224 + nameSlot*0x14`.
- `SEL` = selected-unit pointer `_DAT_57e31838` (data+0x4a1bc). Unit count is `gs+0x182`.
- City `c`: `C[c] = gs+0x1604 + c*0x42`.
  - `.x` +0, `.y` +2, `.name` +4 (gs+0x1608), `.owner` +0x15 (signed byte, 0xF = neutral).
  - City count is `gs+0x1602`.
- `isCityTile(x,y)`: `gs[0x711 + (mapword[y*0xE0 + x*2] >> 24)] == 10`, where `mapword` is the u32 read at map base (data+0xafcc) + y*0xE0 + x*2.
- Item `i`: `I[i] = gs+0xD12 + i*0x1E`.
  - `.name` +0
  - `.status` +0x16 (byte): 0 = gone, 1 = ground, 2 = in site, 3 = carried
  - `.loc` +0x18 (short: site index or unit index)
  - `.gx` +0x1A, `.gy` +0x1C (ground position)
  - There are 22 items.
- Site `s`: `S[s] = gs+0x812 + s*0x20`.
  - `.x` +0, `.y` +2, `.name` +4 (gs+0x816), known mask +0x1E (gs+0x830).
  - Site count is `gs+0x810`.
- `Dice(n,sides,add)` = FUN_1005f230. The result is add + n×[1..sides].
- `DAT(g,i)` = FUN_1005f678(g,i). The text with its raw index is listed where it is used.
- `Euclid(x1,y1,x2,y2)` = FUN_1000a884 = `trunc(sqrt(dx²+dy²))`. The 10000 branch is reachable only on NaN, because the threshold constant is 0.0.
- `human()` is the test that appears inline everywhere: `(*(short*)data+0xac98 == 0) && gs[0xd0+me*2] != 1`.
  - data+0xac98 (`_DAT_38a0ffff`) is set to 1 by AI step 0 (FUN_1000c9c8) and cleared by FUN_1000d808.
  - `gs+0xd0[p] == 1` means the player is computer-controlled.
- `Msg(a,b)` = FUN_1003ced4(a,b), a two-line message.
- `Cancel(g)`: `if (human()) Msg(DAT(g,0), DAT(g,1));  Q.active = 0;  return 0;`.
  - The DAT lookup order in the code is (g,1) then (g,0). That order does not matter.

---

## 1. FUN_1004b11c(short isAI) — quest generator (0x1004b11c-0x1004bc90)

Jump table (TOC -0x1cd0 → code 0x1004bc70):

| type | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
|---|---|---|---|---|---|---|---|
| case address | 0x1004b2bc | 0x1004b3dc | 0x1004b69c | 0x1004b778 | 0x1004b8dc | 0x1004bab4 | 0x1004bbe0 |

The human type table is at data 0xbe90 (TOC -0x1974). It holds 11 shorts followed by a 0 pad:
`T[11] = {0,1,2,3,4,5,6,4,4,5,6}`.

Per-type odds for a human: 0,1,2,3 = 1/11 each; 4 = 3/11; 5 = 2/11; 6 = 2/11. These are the odds of a pick. Failed picks re-roll.

```c
void FUN_1004b11c(short isAI) {
    // ONCE: "notable event" 3 = "%s receives a quest" (DAT 0x5f idx 5, raw 449)
    FUN_10038c60(me, 3, 0, 0, gs + 0x224 + SEL->nameSlot*0x14);   // hero name of SELECTED unit

    short tries = 0, type;       // type (r18) persists across tries
    for (;;) {                   // label RETRY = 0x1004b190
        tries++;
        short heroIdx = (short)(((unsigned)(SEL - U)) / 0x16);   // recomputed each try (same value)
        if (isAI == 0) {
            type = T[Dice(1, 11, -1)];                 // one Dice per try
        } else if (tries == 1) {
            type = (Dice(1, 5, -1) == 0 && gs[0x114] != 0) ? 5 : 4;  // Dice ONLY on try 1
        } else if (tries == 2) type = 3;
        else if (tries == 3)   type = 6;
        /* tries >= 4: type unchanged (unreachable in practice: type 6 never fails) */

        // PER TRY (before the switch): written on every try, including failed ones
        Q.active = 1;
        Q.hero   = heroIdx;
        Q.type   = type;

        switch (type) {
        case 0: { // slay hero
            short n = 0;
            for (short i = gs[0x182]-1; i >= 0; i--)               // last unit -> first
                if (U[i].type == 0x1C && U[i].owner != me) n++;    // NO alive (x,y>=0) test
            if (n <= 0) continue;                                   // RETRY
            short k = Dice(1, n, 0), m = 0, i;
            for (i = gs[0x182]-1; i >= 0; i--)
                if (U[i].type == 0x1C && U[i].owner != me && ++m == k) break;
            Q.target = i;
            return;
        }
        case 1: { // find item
            short R = isAI ? 30 : 50, n = 0, x, y;
            for (short i = 0; i < 22; i++) {
                FUN_1003a0f4(i, &x, &y);   // status 0: x,y NOT written (stale); 1: gx,gy;
                                           // 2: S[loc].x,y; 3: U[loc].x,y
                if (I[i].status == 2 && FUN_100390e4(*I[i] /*32 bytes by value*/) == 0
                    && abs(SEL->x - x) < R && abs(SEL->y - y) < R) n++;
            }
            if (n <= 0) continue;                                   // RETRY
            short k = Dice(1, n, 0), m = 0, i;
            for (i = 0; i < 22; i++) {
                FUN_1003a0f4(i, &x, &y);
                if (I[i].status != 0 /* BUG: !=0, not ==2 */ && FUN_100390e4(*I[i]) == 0
                    && abs(SEL->x - x) < R && abs(SEL->y - y) < R && ++m == k) break;
            }
            Q.target = i;
            // reveal (ONCE, on success; for AI too: no isAI test)
            FUN_1003a0f4(i, &x, &y);
            FUN_1000931c(me, x, y);              // fog reveal 3x3 (5x5 on a city tile / naval mode 2); no-op if fog off (gs+0x124==0)
            short s = FUN_1002bef8(x, y);        // site index at (x,y), or -1
            if (s >= 0) {
                S[s].known |= 1 << me;           // gs+0x830 + s*0x20
                FUN_10064498(1, x, y);           // redraw that map tile
            }
            FUN_100635e0(me);                    // redraw fog/overview buffer (fog on only)
            FUN_10060608(1, 1, 0);               // full overview-map redraw
            return;
        }
        case 2: { // kill a unit of type t
            short t, attempts = 0, found;
            for (;;) {
                found = 0;
                t = FUN_10032d4c();              // uniform over types with flag byte !=0 (table+i*6+4), i<28; else 0x19
                for (short i = gs[0x182]-1; i >= 0; i--)
                    if (U[i].type == t && U[i].owner != me && U[i].x >= 0 && U[i].y >= 0) { found = 1; break; }
                attempts++;
                if (attempts >= 5) break;
                if (found) break;
            }
            if (!found) continue;                // RETRY
            Q.target = t;
            return;
        }
        case 3: { // slaughter N armies of player q
            if (gs[0x15c] != 0) continue;        // game already won -> RETRY
            short attempts = 0, found = 0, q;
            do {
                q = Dice(1, 8, -1);
                if (q != me && gs[0x138 + q*2] != 0) found = 1;
                attempts++;
            } while (!found && attempts < 200);
            if (!found) continue;
            if (attempts >= 200) continue;       // QUIRK: a hit on the 200th draw is rejected
            short N = Dice(1, 12, 10);           // 11..22
            short live = 0;
            for (short i = gs[0x182]-1; i >= 0; i--)
                if (U[i].owner == q && U[i].x >= 0 && U[i].y >= 0) live++;   // any type
            if (N > live) continue;              // RETRY (whole thing)
            Q.target = q; Q.amount = N; Q.progress = 0;
            return;
        }
        case 4: { // occupy city
            if (gs[0x15c] != 0) continue;
            short best = 0, bestC = -1;
            for (short c = gs[0x1602]-1; c >= 0; c--) {      // last city -> first
                short R = isAI ? 40 : 60;
                if (C[c].owner == me) continue;
                if (!isCityTile(C[c].x, C[c].y)) continue;
                short s = Dice(1, 50, 0);
                if (Euclid(SEL->x, SEL->y, C[c].x, C[c].y) < R) s += 50;
                if (gs[0x11c] != 0 /*diplomacy*/ && C[c].owner != 0xF
                    && ((*(uint32*)(gs + 0x1582 + me*0x10 + C[c].owner*2) >> 26) & 3) == 2)
                    s += Dice(1, 50, 0);          // only rolled when this condition holds
                if (s > best) { best = s; bestC = c; }   // strict: ties keep the higher index
            }
            if (bestC == -1) continue;
            Q.target = bestC;
            return;
        }
        case 5: { // raze city
            if (gs[0x15c] != 0) continue;
            if (gs[0x114] == 0) continue;        // razing disabled
            short attempts = 0, found = 0, c;
            do {
                c = Dice(1, gs[0x1602], -1);
                if (C[c].owner != me && isCityTile(C[c].x, C[c].y)
                    && (Euclid(SEL->x, SEL->y, C[c].x, C[c].y) <= 60 || attempts >= 100))
                    found = 1;                   // the distance is computed only when the first two tests pass
                attempts++;
            } while (!found && attempts < 200);
            if (!found) continue;
            if (attempts >= 200) continue;       // QUIRK as in case 3
            Q.target = c;                        // same 60 for AI and human
            return;
        }
        case 6: // steal gold
            Q.target = 0;
            Q.progress = 0;
            Q.amount = Dice(3, 300, 500);        // 503..1400
            return;
        }
        /* type > 6: function returns */
    }
}
```

Notes:

- **Once:** the history event at the start; the item reveal and redraws (case 1 success only); the final field writes of the successful case.
- **Per try:**
  - the type roll: human Dice(1,11,-1); AI try 1 Dice(1,5,-1);
  - the `active`, `hero` and `type` writes;
  - all of the case's own dice, including in failed tries.
- **RNG order per try:** type roll, then the case-specific rolls:
  - case 0: `Dice(1,n,0)` only if n > 0.
  - case 1: `Dice(1,n,0)`.
  - case 2: FUN_10032d4c (`Dice(1,cnt,-1)` inside) once per inner attempt.
  - case 3: `Dice(1,8,-1)` per attempt, then `Dice(1,12,10)`.
  - case 4: for each candidate city (from the last down), `Dice(1,50,0)` and optionally a second `Dice(1,50,0)` for war.
  - case 5: `Dice(1,ncities,-1)` per attempt.
  - case 6: `Dice(3,300,500)`.
- `Q.amount` and `Q.progress` are only written by cases 3 and 6. Other types keep stale values from older quests. They are unused for those types.
- **The diplomacy word:** `gs+0x1582 + me*0x10 + owner*2` is read as a u32, and `(>>26)&3` is bits 10-11 of the short `[me][owner]`. FUN_1000c9c8 uses stride 0x12 for `[me][me]`, which matches 8x8 shorts.
- **Case 0 has no liveness test.** It relies on dead units no longer having type 0x1C or a non-me owner. Uncertain what a dead unit record holds.

---

## 2. FUN_1004c0b8 — quest description view (0x1004c0b8-0x1004d09c)

- The view is `_DAT_7fa83811` (data+0xc0a0), resource view 0x1068.
- The field setter is FUN_10090e0c(view, 'strN', pstr, 1). FUN_100b19f4 is a C-to-Pascal copy.
- The function copies Q into a local (12 bytes).
- Format strings in the data segment:
  - 0xbea8 `"%s's Quest"`
  - 0xbeb4 `"%s"`
  - 0xbeb8 `"%s's Quest"`
  - 0xbec4 `"gold"`

```c
str1 = sprintf("%s's Quest", gs + 0x224 + U[Q.hero].nameSlot*0x14);   // hero name
fabledOK = 1;                                                          // r26
switch (Q.type) {   // jump table TOC -0x1cc8 -> 0x4d0b0
```

`dir(a→b)` = the C string `DIR[FUN_1002c970(ax,ay,bx,by)]`, where DIR is the pointer table at data 0xb0d0 → strings at data 0xb110.... These are **not DAT 1000**, and use lower case with no hyphen:
`DIR = {"north","northeast","east","southeast","south","southwest","west","northwest"}`.

FUN_1002c970(x1,y1,x2,y2) is an 8-way sign test, not an angle:

```c
if (x1==x2) return (y1<y2) ? 4 /*south*/ : 0 /*north; also same tile*/;
if (y1==y2) return (x1<x2) ? 2 /*east*/  : 6 /*west*/;
if (x2<x1)  return (y2<y1) ? 7 /*NW*/    : 5 /*SW*/;
            return (y2<y1) ? 1 /*NE*/    : 3 /*SE*/;
```

The y axis grows southwards. The source point is always the **quest hero's unit** `U[Q.hero]` (not SEL).

### Fields per type

| type | str2 | str3 | str4 | str5 | str6 | str7 |
|---|---|---|---|---|---|---|
| 0 slay hero (T = U[Q.target]) | DAT(0x16,0) r238 "Thou shalt seek out" | DAT(0x16,1) r239 "and slay the foul" | sprintf(DAT(0x16,2) r240 "%s hero", gs + T.owner*0x14) = **faction name of the target's owner** | DAT(0x16,3) r241 "He can be found to the" | dir(hero → T.x,T.y) | — |
| 1 find item (i = Q.target) | DAT(0x17,0) r242 "Thou shalt retrieve" | DAT(0x17,1) r243 "the famed and priceless" | item name `I[i].name` (raw copy, no sprintf) | **not set** | DAT(0x17,2) r244 "It can be found to the" | dir(hero → FUN_1003a0f4(i) x,y) |
| 2 kill unit type | DAT(0x18,0) r245 "Thou shalt locate" | DAT(0x18,1) r246 "and mercilessly slay" | DAT(0x18,2) r247 "a unit of enemy" | sprintf("%s", FUN_1004a21c(Q.target)) = unit-type name | — | — |
| 3 slaughter | DAT(0x19,0) r248 "Thou shalt slaughter" | sprintf(DAT(0x19,1) r249 "%d armies of the treacherous", Q.amount) | faction name `gs + Q.target*0x14` (raw copy) | **not set** | DAT(0x19,2) r250 "Thou hast already slain" | sprintf(DAT(0x19,3) r251 "%d of them", Q.progress) |
| 4 occupy | DAT(0x1a,0) r252 "Thou shalt force the" | sprintf(fabledOK ? DAT(0x1a,1) r253 "city of %s" : DAT(0x1a,2) r254 "fabled city of %s", C[t].name) | DAT(0x1a,3) r255 "into submission and" | DAT(0x1a,4) r256 "occupy it." | DAT(0x1a,5) r257 "It can be found to the" | dir(hero → C[t].x,C[t].y) |
| 5 raze | DAT(0x1b,0) r258 "Thou shalt conquer the" | sprintf(fabledOK ? DAT(0x1b,1) r259 "city of %s" : DAT(0x1b,2) r260 "fabled city of %s", C[t].name) | DAT(0x1b,3) r261 "then burn it to the" | DAT(0x1b,4) r262 "ground" | DAT(0x1b,5) r263 "It can be found to the" | dir(hero → city) |
| 6 steal gold | DAT(0x1c,0) r264 "Thou shalt sack and" | sprintf(DAT(0x1c,1) r265 "pillage %d gold", Q.amount) | DAT(0x1c,2) r266 "from thy mighty" | DAT(0x1c,3) r267 "foes." | DAT(0x1c,4) r268 "Thou hast already stolen" | sprintf(DAT(0x1c,5) r269 "%d gold", Q.progress) |

- "—" or "not set" means the field keeps the view resource's default text. The 0x1068 view is created fresh each time the quest menu opens (it is destroyed after the modal loop).
- Type 0: no str7. Type 2: no direction, no str6/str7.
- Type 1, when `I[i].status == 0`: FUN_1003a0f4 does not write x,y, so the direction uses uninitialised stack values. In practice this never happens, because code −1 cancels the quest at turn start.

### Overview-map overlay drawn after the text

All overlay calls draw into the 2-pixels-per-tile overview buffer, using colour index 8.

- **Type 0:**
  1. FUN_1002c734(hero.x, hero.y, T.x, T.y, 8): a line from hero to target, drawn only if fog is off or both end tiles are explored.
  2. FUN_1002c6bc(&T, 8) → FUN_1002c310(T.x, T.y, 8): a 4×4 filled marker.
  3. FUN_1002c6f8(&T, 8) → FUN_1002c508: an 8×8 box outline.
  4. FUN_10061354(NULL): blit the whole overview.
- **Type 1:** the overlay depends on a nested switch on `I[i].status`, with jump table TOC -0x1ccc (0x4d09c):
  - status 0: nothing.
  - status 2: **first** `S[I[i].loc].known |= 1<<me` (viewing the quest re-marks the site known), then the same as status 1.
  - status 1 and 3:
    1. FUN_1002c734(hero → x,y, 8)
    2. FUN_1002c310(x, y, 8)
    3. FUN_1002c508(x, y, 8)
    4. FUN_10061354(NULL)
- **Type 2:** FUN_100625a8(0, -1, Q.target, 1, 0) highlights units filtered by type = target (owner −1 = any), then FUN_10061354(NULL).
- **Type 3:** FUN_100625a8(0, Q.target, -1, 1, 0) highlights all units of player target, then FUN_10061354(NULL).
- **Types 4 and 5:** the same overlay for both:
  1. FUN_1002c734(hero → city, 8)
  2. FUN_1002c460(c, 8) (city marker 4×4)
  3. FUN_1002c614(c, 8) (8×8 box)
  4. **No** FUN_10061354 call.
- **Type 6:** no overlay.

### "fabled city" rule (types 4 and 5)

The fog map is data+0xafd8 (TOC -0x54c), 1 byte per tile, row stride 0x70. The "explored" bit is bit 29 of the big-endian u32 read at `fog + y*0x70 + x`, which is bit 5 of byte (x,y). FUN_1000931c and FUN_1002c734 use the same bit.

```c
fabledOK = 1;
if (gs[0x124] /*fog/hidden map on*/ &&
    !explored(C.x, C.y) && !explored(C.x+1, C.y+1) && !explored(C.x, C.y+1))
    fabledOK = 0;      // -> "fabled city of %s"
```

- Tile (x+1, y) is **not** tested. The code checks (x,y), then (x+1,y+1), then (x,y+1).
- With fog off, the line always reads "city of %s".

### FUN_1004d0d0 (the Quest… menu, cmd 0x5e3) around it

- `ok = Q.active && U[Q.hero].x >= 0 && U[Q.hero].y >= 0 && U[Q.hero].type == 0x1C`.
- If not ok:
  - 'titl' hidden (FUN(+0x660)(1,1)) and 'scro' (0,1). The exact semantics of these two calls are uncertain: they are show/hide toggles.
  - 'none' = DAT(0x15,-1), a random line of r234-237:
    - "Thou hast no quests!"
    - "But thou art not questing!"
    - "Quest?  What quest?"
    - "Seek a quest in a temple!"
- Then FUN_10060608(0,0,0).
- If ok: FUN_1004c0b8(), then FUN_10061980(U[hero].x, U[hero].y, 1).
- Then the modal loop, then command 0x3fa.

### FUN_10060608 and FUN_10061980

- **FUN_10060608(a, b, rect\*)** renders the **overview (mini) map**, 0x70×0x9C tiles at 2 px.
  - With rect == NULL it does a full redraw. With a rect it redraws that area.
  - With fog on, it returns early when `gs+0xd0[me] != 0 && gs+0x15a == 0 && _DAT_7fc60774 == 0`. That is the computer player in hidden mode.
- **FUN_10061980(x, y, kind)** blits a small sprite from a rect table indexed by `kind` onto the overview window, at pixel ((x*2-6+4)&~7, y*2-6) clamped to ≥ 0.
  - It is used with kind 1 to mark the quest hero's position.
  - It is the "you are here" marker; the exact sprite was not identified.

---

## 3. FUN_1004d404(short kind, short arg) — quest-completed view (0x1004d404-0x1004d924)

It is called by FUN_1004d9cc(kind, arg) **after** FUN_1004e0f4 has applied the reward. FUN_1004d9cc then draws FUN_10061980(hero.x, hero.y, 1).

```c
str1 = sprintf("%s's Quest" /*data 0xbeb8*/, gs+0x224 + U[Q.hero].nameSlot*0x14);
str2 = DAT(0x1d,0)  r270 "Thou hast completed thy"
str3 = DAT(0x1d,1)  r271 "quest!"
if ((unsigned)kind > 3) return;        // jump table TOC -0x1cc4 -> 0x4d924
// str4 is never set
```

| kind | str5 | str6 | str7 | other |
|---|---|---|---|---|
| 0 item | DAT(0x1f,0) r274 "As reward, the priests" | DAT(0x1f,1) r275 "give thee the" | `I[arg].name` (gs+0xd12+arg*0x1e), raw | — |
| 1 site | DAT(0x1e,0) r272 "As reward, the priests" | DAT(0x1e,1) r273 "show thee the site of" | `S[arg].name` (gs+0x816+arg*0x20), raw | overview overlay |
| 2 gold | DAT(0x20,0) r276 "As reward, the priests" | DAT(0x20,1) r277 "give thee" | sprintf(DAT(0x20,2) r278 "%d %s", arg, "gold" /*data 0xbec4, not DAT*/) | — |
| 3 allies | DAT(0x20,0) r276 | DAT(0x20,1) r277 | sprintf(DAT(0x20,2) "%d %s", arg, FUN_1004a21c(*(short*)data+0x4aefa)) | — |

- The kind 1 overlay is:
  1. FUN_1002c734(hero.x, hero.y, S.x, S.y, 8)
  2. FUN_1002c4b8(arg, 8) (site 4×4 marker)
  3. FUN_1002c66c(arg, 8) (site 8×8 box)
- In kind 3, data+0x4aefa (TOC -0x2c4) is the ally unit type that FUN_1004e0f4 kind 3 stored from FUN_100357ec. FUN_1004a21c returns that unit type's name.
- In kind 3, FUN_1004a21c is called before the DAT lookup. This does not matter: no RNG is involved.

---

## 4. FUN_100472f4 — Victory dialog default button (0x1004763c-0x10047710, verified)

```c
OSType def = 'occu';
if (gs[0x11e] /*quests on*/ && Q(me).active &&
    SEL == &U[Q(me).hero]) {                      // pointer compare, me captured at function entry
    if (Q.type == 5 && Q.target == cityIdx /*param_4*/)  def = 'raze';
    else if (Q.type == 6) {
        if (FUN_1004639c(cityIdx))      def = 'sack';
        else if (FUN_1004645c(cityIdx)) def = 'pill';
    }
}
FUN_10078c94(defaultButtonHolder, def, 0);
```

- The default is set **before** the buttons are enabled or disabled:
  - 'pill' is disabled if FUN_1004645c == 0.
  - 'sack' is disabled if FUN_1004639c == 0.
  - 'raze' is disabled if `gs+0x114 == 0`.
- A type-5 quest needs `gs+0x114` at generation, so 'raze' is normally enabled when it is the default.

---

## 5. FUN_1004e384(short code, _, short gold) — quest check (0x1004e384-0x1004f36c)

All callers test `Q.active != 0` before calling. The function itself does not.

Jump table TOC -0x1cbc → 0x4f36c, indexed by `code+1`:

| code | −1 | 0 | 1 | 2 | 3 | 4 |
|---|---|---|---|---|---|---|
| case address | 0x1004e4c4 | 0x1004e9b4 | 0x1004ee08 | 0x1004efd4 | 0x1004f26c | 0x1004eb90 |

### Battle globals used

All of these are filled per battle by FUN_100ac0cc (battle set-up) and FUN_1002d654 (the rounds).

| global | TOC | meaning |
|---|---|---|
| ATT_N | -0x3d0 → data 0x4a228 | byte, attacker count. Set in FUN_100ac0cc to the moving-stack count (-0x1bc → 0x4a1b8) or 1. |
| ATT_P | -0x3b0 → data 0x4a368 | u32[] attacker unit pointers, copied from the moving-stack list (-0x1b8 → 0x4a198) or the single unit (-0x1c0 → 0x4a190). Not compacted after deaths. |
| DEF_N | -0x3c8 → data 0x4a280 | byte, defender count |
| DEF_P | -0x3b4 → data 0x4a2e8 | u32[] defender unit pointers |
| DEF_ALIVE | -0x3bc → data 0x4a2c0 | byte[]; set to 0 in FUN_1002d654 when that defender dies in the rounds |
| DEF_TYPE | -0x110 → data 0x4a3b8 | byte[], `DEF_TYPE[i] = DEF_P[i]->type` (FUN_100ac0cc 0x100ad134) |
| DEF_OWNER | -0x130 → data 0x4a2b1 | byte, `(mapword(battle tile) >> 16) & 0xF`. This is the owner nibble of the defended tile (0xF = neutral). |

```c
int FUN_1004e384(short code, int unused, short gold) {
    Qrec q = Q(me);                     // 12-byte snapshot (r31)
    int done = 0;                       // r28
    int inStack = 0;                    // r27

    // hero-dead test (always first)
    if (U[q.hero].owner != me) {        // signed byte compare
        if (human()) Msg(DAT(0x21,0) r279 "Alas! Thy hero is dead!",
                         DAT(0x21,1) r280 "Thy quest hath become impossible!");
        Q.active = 0;
        return 0;
    }
    if ((unsigned)(code+1) > 5) goto END;

    #define IN_BATTLE_STACK() for (i=0;i<ATT_N;i++) if (ATT_P[i]==&U[q.hero]) {inStack=1;break;}

    switch (code) {
    case -1:   // turn start
        if (q.type == 4 && !isCityTile(C[q.target]))  Cancel(0x22); // r281 "Alas! The city is razed!" / r282 "Thy quest hath become impossible!"
        if (q.type == 5 && !isCityTile(C[q.target]))  Cancel(0x22);
        if ((q.type == 5 || q.type == 4) && C[q.target].owner == me)
                                                      Cancel(0x2b); // r299 "The city of thy quest was not won by thy hero!" / r300 "Alas! Thy quest is now invalid!"
        if (q.type == 0 && U[q.target].type != 0x1C)  Cancel(0x2a); // r297 "Alas! The hero thou didst seek is slain!" / r298
        if (q.type == 3 && gs[0x138 + q.target*2] == 0) Cancel(0x28); // r293 "Alas! The foes of thy quest are all dead!" / r294
        if (q.type == 1 && I[q.target].status == 0)   Cancel(0x29); // r295 "Alas! The item thou didst seek is gone!" / r296
        break;                                        // -> END (done = 0)

    case 0:    // after a battle started by me
        IN_BATTLE_STACK();
        if (!inStack) break;
        if (q.type == 3 && DEF_OWNER == q.target) {
            short k = 0;
            for (i = 0; i < DEF_N; i++) if (DEF_ALIVE[i] == 0) k++;   // defenders killed THIS battle
            Q.progress += k;
            if (Q.progress >= Q.amount) done = 1;
            break;
        }
        if (q.type == 2) {
            for (i = 0; i < DEF_N; i++)
                if (DEF_ALIVE[i] == 0 && DEF_TYPE[i] == q.target) { done = 1; break; }
            break;
        }
        if (q.type == 0) {
            for (i = 0; i < DEF_N; i++)
                if (DEF_ALIVE[i] == 0 && DEF_P[i] == &U[q.target]) { done = 1; break; }
        }
        break;
        // (type 3 with DEF_OWNER != target falls into the type-2/type-0 tests, which do not match)

    case 1:    // pillage / sack; gold = amount taken
        IN_BATTLE_STACK();                   // computed first, used after
        if ((q.type == 5 || q.type == 4) && C[q.target].owner == me && isCityTile(C[q.target]))
            Cancel(0x25);                    // r287 "Alas! Thy quest was not to pillage this city!" / r288 "Thy quest is now invalid!"  (no inStack test)
        if (!inStack) break;
        if (q.type == 6) {
            Q.progress += gold;
            if (Q.progress >= Q.amount) done = 1;
        }
        break;

    case 2:    // raze
        IN_BATTLE_STACK();
        if (q.type == 5 && C[q.target].owner == 0xF && !isCityTile(C[q.target])
            && FUN_1002be50(U[q.hero].x, U[q.hero].y) == q.target) {   // city index at the hero's tile
            if (inStack) done = 1;
            else { Q.active = 0;             // cleared BEFORE the message here
                   if (human()) Msg(DAT(0x26,0) r289 "Alas! The city was not razed by thy hero!", DAT(0x26,1) r290);
                   return 0; }
        }
        if (q.type == 4 && !isCityTile(C[q.target]))
            Cancel(0x27);                    // r291 "Alas! Thy quest was to keep this city!" / r292  (no owner or inStack test)
        break;

    case 3:    // item taken (FUN_10053330 Take; PPC_0004 225)
        if (q.type == 1 && I[q.target].status == 3 && I[q.target].loc == q.hero) {
            I[q.target].status = 0;          // item consumed
            done = 1;                        // NO inStack test
        }
        break;

    case 4:    // occupy
        IN_BATTLE_STACK();
        if (q.type == 4 && C[q.target].owner == me && isCityTile(C[q.target])) {
            if (inStack) done = 1;
            else { Q.active = 0;             // cleared BEFORE the message
                   if (human()) Msg(DAT(0x23,0) r283 "Alas! The city was not taken by thy hero!", DAT(0x23,1) r284);
                   return 0; }
        }
        if (q.type == 5 && C[q.target].owner == me && isCityTile(C[q.target]))
            Cancel(0x24);                    // r285 "Alas! Thy quest was to raze this city!" / r286
        break;
    }

END:                                         // 0x1004f2bc
    if (done) {                              // 0x1004f2c4
        Q.active = 0;
        short arg;                           // local at sp+0x38 (r23)
        short kind = FUN_1004dc94(&arg);     // reward roll (see review A0; not re-verified here)
        FUN_1004e0f4(kind, arg);             // apply, event 2, +10 XP
        if (human()) {
            FUN_10092484(3);                 // sound 3
            FUN_1004d9cc(kind, arg);         // completed view (section 3)
        }
    }
    return done;
}
```

### What "in stack" means

The quest hero's unit pointer must be in **ATT_P[0..ATT_N)**. This is the attacker list of the **most recent battle** that FUN_100ac0cc set up.

- It is not the live selection.
- Codes 1, 2 and 4 come right after the capture battle (occupy, pillage, sack, raze), so the list is that battle's attacking stack.
- A capture with no battle cannot happen: city entry always goes through a battle, even against 0 defenders. This is uncertain for the AI path FUN_10012a8c, which also checks ATT_P (0x10012af8 reads -0x3d0).
- Attackers who died are still in the list. A dead quest hero is caught earlier by the owner test only if its record's owner was changed. Uncertain what FUN_100214e8 does to `.owner`.

### What "defenders killed" counts (type 3)

It is the number of entries with DEF_ALIVE == 0 among the DEF_N defenders of this battle. FUN_1002d654 zeroes an entry when a defender's hit points run out. The count is added only if the defended tile's owner nibble DEF_OWNER equals the target player.

### Order notes

- In code −1, both razed checks come before the "owner == me" check.
- In code 1, the inStack loop runs before the pillage cancel. The cancel ignores inStack.
- Cancels in codes 2 and 4 that come from a "not in stack" branch set `active = 0` **before** the message. All other cancels show the message first. This has no visible effect.

---

## 6. FUN_10038c60 events 2 and 3

FUN_10038c60(p, id, a, b, str) records one of the player's two "notable events" for the turn summary.

- **Layout:**
  - `gs+0x1422+p*0x2c`: count byte
  - `+0x1423[2]`: ids
  - `+0x1426[2]`: shorts a
  - `+0x142a[2]`: shorts b
  - `+0x142e[2][16]`: strings, copied by FUN_10001e78
- **Priority:** when both slots are full, the new event replaces the slot with the larger id only if the new id is smaller. A lower id is more important.
- **Display:** the switch at 0x10036f64 (TOC -0x1ce4) maps id 2 → DAT(0x5f,4) r448 "%s completes quest" and id 3 → DAT(0x5f,5) r449 "%s receives a quest". The `%s` is the stored string.

**Calls:**

- **Receive, id 3** (FUN_1004b11c start): `FUN_10038c60(me, 3, 0, 0, gs+0x224 + SEL->nameSlot*0x14)`.
  - It uses the selected unit's hero name, once per quest, before any type roll.
- **Complete, id 2** (FUN_1004e0f4 tail, every kind): `FUN_10038c60(me, 2, 0, 0, gs+0x224 + U[Q.hero].nameSlot*0x14)`.
  - Then `FUN_1003357c(&U[Q.hero], 10)`.
- `a` and `b` are both 0 in both calls.
- Hero names live in 20-byte slots, but the event string slot is 16 bytes. A name over 15 chars would overrun into the next slot or field. Uncertain whether names can be that long.

---

## Differences from / additions to the review doc (A0)

- **Generator:**
  - The record writes (active, hero, type) happen on **every try**.
  - The AI keeps type 6 for try ≥ 4. This is unreachable.
  - Cases 3 and 5 reject a hit found on the 200th attempt.
  - Case 3's live count is any unit of q with x,y ≥ 0.
  - Case 0 has no alive test.
  - Case 1's reveal also calls FUN_100635e0(me) and FUN_10060608(1,1,0). It runs for the AI too.
  - Case 4's war test is bits 10-11 of the short `[me][owner]`.
- **Check:**
  - "In stack" means the battle attacker list ATT_P (data 0x4a368), not the live stack.
  - Code 2 type 5 also needs the city owner == 0xF and FUN_1002be50(hero tile) == target.
  - Code 3 has no in-stack test.
  - Code 1's pillage cancel ignores in-stack.
  - Code −1 tests type 4 razed before type 5 razed, then the owner check, then types 0, 3 and 1.
- **View:**
  - The direction strings come from the data segment ("northeast", no hyphen), not DAT 1000.
  - The direction is an 8-way sign test from the quest hero's unit.
  - Type 0 str4 is "<faction of the target hero's owner> hero".
  - Viewing a type-1 quest whose item is in a site re-sets that site's known bit.
  - "fabled" means fog is on and tiles (x,y), (x+1,y+1) and (x,y+1) are all unexplored.
- FUN_1004dc94 (the reward roll) was not re-verified here.
