# PICT Resource Catalog — Warlords II

Complete catalog of all 57 PICT resources in the original Warlords II app resource fork.
Cross-referenced with code usage in `main.c` and the RE documents.

## Legend
- **Size**: pixel dimensions (WxH)
- **Used in code**: where our reconstruction references this PICT
- **Status**: whether we currently load/use it

---

## 1000-series: UI Chrome & Backgrounds

| ID | Name | Size | Description | Used In Code | Status |
|----|------|------|-------------|--------------|--------|
| 1000 | — | 292x380 | **Title/Loading screen** — Warlords II cover art (knight on dragon, SSG logo). Displayed during app startup as splash screen. | `GetResource('PICT', 1000)` at startup (line 18169, 18669) | USED |
| 1001 | MARBLE | 512x364 | **Marble texture** — Grey marble tileable background. Used as dialog/window background pattern throughout the game. | `LoadPICTIntoGWorld(1001)` (line 18716), `DrawMarbleBackground()` (line 1106) | USED |
| 1002 | — | 127x30 | **Horizontal marble bar** — Narrow marble-textured horizontal strip. Used as a horizontal separator/border in dialogs. | Not yet referenced | TODO |
| 1003 | — | 272x230 | **"A Random Scenario" scroll** — Parchment scroll graphic with text "A Random Scenario". Shown in scenario selection when random map is chosen. | Scenario preview PICT (RE_serialization: PICT 1003 = scenario preview) | TODO |
| 1004 | — | (indexed) | **White/indexed graphic** — Appears blank without game palette. Likely a dialog element using palette-indexed colors. | Not yet identified | TODO |
| 1005 | — | 7x371 | **Vertical marble border (tall)** — Thin marble-textured vertical strip. Left/right border for windows/panels. | Status bar icon PICT 1005 (line 18858-18863) — also used as window border | PARTIAL |
| 1006 | — | (indexed) | **Indexed graphic** — Appears blank without palette. Likely another border or UI element. | Status bar icon PICT 1006 (cities icon fallback) | PARTIAL |
| 1007 | — | 7x378 | **Vertical marble border (tall, dark)** — Dark marble vertical strip. Border variant. | Status bar icon PICT 1007 (armies icon fallback) | PARTIAL |
| 1008 | — | 7x352 | **Vertical marble border (medium)** — Another vertical marble strip variant. | Status bar icon PICT 1008 | PARTIAL |
| 1009 | — | 7x94 | **Vertical marble border (short)** — Short vertical marble strip. For smaller panels. | Status bar icon PICT 1009 (line 18858) | PARTIAL |
| 1010 | — | (indexed) | **Indexed graphic** — Blank without palette. Large (72KB). Likely a full dialog background. | Not yet identified | TODO |
| 1011 | — | 184x21 | **Horizontal label bar** — Small horizontal strip, likely a section header/label background. | Not yet referenced | TODO |
| 1012 | — | 224x312 | **Strategy map overlay** — Same dimensions as PICT 10011 STRAT. Appears to be the game map in a dialog-sized view (dark, mostly black). | Not yet referenced | TODO |
| 1013 | — | 7x314 | **Vertical marble border** — Border strip for medium-height dialogs. | Not yet referenced | TODO |
| 1014 | — | 7x214 | **Vertical marble border** — Border strip for shorter dialogs. | Not yet referenced | TODO |
| 1015 | — | 7x364 | **Vertical marble border** — Border strip matching marble background height. | Not yet referenced | TODO |
| 1016 | — | 396x276 | **Dark green marble frame** — Rectangular frame with thick dark green marble border and black center. Used as an overlay frame for dialog artwork areas. | Not yet referenced | TODO |
| 1020 | HELPGFX | 512x110 | **Help toolbar mockup** — Shows a mockup of the game's toolbar with labeled sections: "minimap", "task", "speed", "end", "skill", "options", "misc". Tutorial/help graphic. | Not yet referenced | TODO |
| 1041 | — | 252x96 | **Warlords II logo** — The game title in ornate gold/purple fantasy lettering. Used in About box and credits. | Not yet referenced | TODO |
| 1042 | — | 188x111 | **SSG logo** — Strategic Studies Group company logo in gold metallic style. Used in About box and credits. | Not yet referenced | TODO |
| 1050 | — | 309x431 | **Talking head / Hero portrait frame** — Viking helmet warrior portrait with blue cape, green background. Used as the frame for hero hire dialog and other hero-related screens. The "talking head" - green areas are chromakey for compositing. | Referenced in hero hire dialog; View 1050 area | TODO |
| 1051 | VOICEBIT | 160x141 | **Voice animation frames** — Grid of eye/mouth positions for the talking head animation. 4 rows x 3 columns of close-up face segments showing different expressions. | Not yet referenced | TODO |

## 3000-series: Game Setup & Turn Flow

| ID | Name | Size | Description | Used In Code | Status |
|----|------|------|-------------|--------------|--------|
| 3000 | — | 480x360 | **Scenario selection screen** — Full background for the scenario chooser. Shows "Scenario" title text, crystal ball (red orb) in center, with gold dragons as ornaments. Labels: Name, Description, Cities, Ruins, Players. | Used in ShowScenarioSelection() | USED (partially) |
| 3011 | — | 11x20 | **Small scroll icon** — Tiny parchment/scroll icon. Likely used as a list item indicator in the scenario list or similar UI. | Not yet referenced | TODO |
| 3015 | Roller left | (indexed) | **Scroll roller left end** — Left endcap of the parchment scroll roller. Used with 3016/3017 for the scenario description scroll. | Not yet referenced | TODO |
| 3016 | Roller center | (indexed) | **Scroll roller center** — Repeating center section of parchment scroll roller bar. | Not yet referenced | TODO |
| 3017 | Roller right | 3x23 | **Scroll roller right end** — Right endcap of parchment scroll roller bar. | Not yet referenced | TODO |
| 3100 | — | 320x312 | **Turn announcement — Castle gate** — Stone castle wall with open portcullis gate showing a medieval town. Two guards on horseback flank the gate. Used for "Faction Name — Turn N" announcement at start of each player's turn. | Not yet referenced in code (View 3100 defines the dialog layout) | TODO |
| 3200 | — | 224x170 | **Hero scene — Male** — Boy/man receiving a quest from a princess/woman. Shows a shield emblem between them. Used for hero hire dialog background (male hero). | `GetPicture(3200)` in ShowHeroOffer() (line 12431-12432) | USED |
| 3201 | — | 224x170 | **Hero scene — Female** — Exotic woman in front of an ornate palace/dome. Used for hero hire dialog background (female hero). | Alternate to 3200 for female heroes | TODO |
| 3300 | — | 128x128 | **Blacksmith/forge scene** — Muscular figure at an anvil/forge, working with fire. Used for the item/equipment crafting or city production screen. | Not yet referenced | TODO |
| 3800 | — | 320x200 | **Battle scene** — Knights in armor with shields bearing a dragon emblem, against a burning castle backdrop. Used as combat/war declaration background. | Not yet referenced | TODO |

## 4000-series: In-Game Dialogs & Events

| ID | Name | Size | Description | Used In Code | Status |
|----|------|------|-------------|--------------|--------|
| 4022 | LEVEL2 | 320x200 | **Hero level 2 scene** — Two armored knights flanking empty center space (for text). Dark forest background. Shown when a hero reaches level 2. | Not yet referenced | TODO |
| 4023 | LEVEL3 | 320x200 | **Hero level 3 scene** — Two mounted knights on armored horses. Flanking layout. Shown at hero level 3. | Not yet referenced | TODO |
| 4024 | LEVEL4 | 320x200 | **Hero level 4 scene** — Two dragon riders flanking center. Shown at hero level 4 (max). | Not yet referenced | TODO |
| 4100 | SEARCH | 320x200 | **Ruin search scene** — Knight with shield approaching a ruined castle/fortress in a lightning storm. Used when a hero searches ruins/temples. | Not yet referenced | TODO |
| 4101 | TEMPLE | 396x356 | **Temple scene** — Classical Greek-style temple on a clifftop with the text "A Temple" at top. Dark marble frame border. Used for temple visit events. | Not yet referenced | TODO |
| 4200 | — | (indexed) | **Indexed graphic** — Appears blank without palette. Large (47KB). Likely a dialog or scene background needing the custom palette to render. | Not yet referenced | TODO |
| 4300 | DIPLOM | 416x85 | **Diplomacy icons** — Row of 5 small icons on magenta background (chromakey): crossed swords, flags, shield variants, envelope. Used in the diplomacy screen for relationship status indicators (War, Peace, Allied, etc.). | Not yet referenced | TODO |
| 4410 | MEDAL0 | 320x200 | **Medal scene — Rank 1** — "A Medal!" text with a star-shaped military medal on dark background. Green dot (player color indicator). Triumphs/victory screen. | Not yet referenced | TODO |
| 4411 | MEDAL1 | 320x200 | **Medal scene — Rank 2** — "A Medal!" with a cross-shaped medal. Different medal design per rank. | Not yet referenced | TODO |
| 4412 | MEDAL2 | 320x200 | **Medal scene — Rank 3** — "A Medal!" with green ribbon cross medal. | Not yet referenced | TODO |
| 4413 | MEDAL3 | 320x200 | **Medal scene — Rank 4** — "A Medal!" with highest-rank medal design. | Not yet referenced | TODO |
| 4420 | — | 118x128 | **Wizard with scroll** — Robed wizard/sage holding a parchment document. Used for quest/message delivery scenes. | Not yet referenced | TODO |
| 4500 | — | (indexed) | **Indexed graphic** — Blank without palette. Large (92KB). Likely a victory or endgame scene. | Not yet referenced | TODO |
| 4501 | — | 360x299 | **Victory scene — Heroes** — Three warriors/heroes standing triumphantly. A lord in purple, a knight, and a smaller warrior. Endgame/victory screen. | Not yet referenced | TODO |
| 4502 | — | 320x282 | **Defeat scene — Severed head** — Gruesome defeated warrior head on spikes. Endgame loss/defeat screen. | Not yet referenced | TODO |

## 10000-series: Engine Sprite Sheets & Overlays

| ID | Name | Size | Description | Used In Code | Status |
|----|------|------|-------------|--------------|--------|
| 10002 | HIDDEN | 336x82 | **Fog of war transition tiles** — Gradient/blend tiles for fog of war edges. 4 rectangular sections showing smooth transparency transitions. Magenta = transparent. Used to blend fog of war edges on the map. | Not yet referenced | TODO |
| 10003 | WAR | 240x180 | **War/event sprite sheet** — Contains individual sprites on magenta background: fire explosion with "WAR" text, question mark icon, skull icon, and a blue gem/orb. Used for map event overlays and battle animations. | Not yet referenced | TODO |
| 10004 | ABITS | 544x40 | **Army attribute icons** — Sprite sheet of small icons on magenta background (2 rows x ~34 cols of ~16x20 cells). Contains unit type indicators, movement dots, shield mini-icons in player colors, cities icon, treasure chest icon, gold coins icon, and other unit status indicators. 6th column from right: cities (top) and chest (bottom). To the right of cities: gold coins. | Not yet referenced | TODO |
| 10005 | SPECBITS | 320x126 | **Temple encounters** — Graphics used for temple encounter scenes. Shows 4 different castle/fortress styles on blue sky background. Used for temple visit events and encounters. | Not yet referenced | TODO |
| 10006 | POPUP | 256x75 | **Popup banner background** — Stone/marble textured rectangular banner with beveled edges. Magenta border = transparent. Used for popup messages and quick info overlays on the map. | Not yet referenced | TODO |
| 10007 | POPUP2 | 256x76 | **Popup banner variant** — Similar to POPUP but slightly different height. Alternate popup style. | Not yet referenced | TODO |
| 10008 | POPUP3 | 256x128 | **Popup oval background** — Larger oval/elliptical stone surface on magenta background. Used for bigger popup dialogs or tooltip areas. | Not yet referenced | TODO |
| 10009 | HIDDENPP | 336x82 | **Hidden map player-perspective tiles** — Similar to HIDDEN (10002) but for player-specific fog of war perspective. Different gradient pattern. | Not yet referenced | TODO |
| 10010 | ATRANS3 | 144x94 | **Army transition/shield mini-icons** — Row of 9 tiny shield icons in different player colors on light grey background. Used for the minimap or strategy view army indicators. | Not yet referenced | TODO |
| 10011 | STRAT | 224x312 | **Strategy map template** — Appears mostly black/dark. Same dimensions as PICT 1012. Template for the zoomed-out strategy map view. | Not yet referenced | TODO |

---

## Palette Resources (also in graphics/)

| Resource | Size | Description | Used In Code | Status |
|----------|------|-------------|--------------|--------|
| pltt 1000 "Main" | 256 colors | **Main game palette** — The custom 256-color palette used by the game. All indexed-color PICTs and sprite rendering depend on this. Shows as a vertical color swatch strip. Contains terrain colors (blues for water, greens for forest, browns for land, etc.). | NOT loaded — this is why the map doesn't render! | **CRITICAL TODO** |
| pltt 1001 "Masking palette" | 256 colors | **Masking palette** — All-black palette used for masking/transparency operations. | Not yet referenced | TODO |
| pltt 1004 "B&W" | 2 colors | **Black & White palette** — Simple 2-color palette for monochrome fallback. | Not yet referenced | TODO |

---

## Summary by Game Screen

### Startup
- PICT 1000 — Splash/loading screen

### Scenario Selection
- PICT 3000 — Background (crystal ball + dragons)
- PICT 1003 — "Random Scenario" scroll
- PICT 3011 — List scroll icon
- PICT 3015/3016/3017 — Roller scrollbar pieces

### Game Setup
- PICT 3200/3201 — Hero scene backgrounds (used in View 3200)

### Turn Announcement
- PICT 3100 — Castle gate scene ("Faction — Turn N")

### Hero System
- PICT 1050 — Talking head frame (hero portrait)
- PICT 1051 — Voice animation frames (eye/mouth positions)
- PICT 3200 — Hero hire background (male)
- PICT 3201 — Hero hire background (female)
- PICT 4022/4023/4024 — Hero level-up scenes (levels 2/3/4)
- PICT 4420 — Wizard with scroll (quest giver)

### Combat & Events
- PICT 3800 — Battle scene background
- PICT 4100 — Ruin search scene
- PICT 4101 — Temple visit scene
- PICT 10003 — WAR explosion + event icons sprite sheet

### Diplomacy
- PICT 4300 — Diplomacy status icons

### Triumphs & Endgame
- PICT 4410-4413 — Medal scenes (4 ranks)
- PICT 4501 — Victory scene
- PICT 4502 — Defeat scene

### Map Rendering
- pltt 1000 — **Main palette** (CRITICAL — needed for all indexed rendering)
- PICT 10002/10009 — Fog of war transition tiles
- PICT 10004 — Army attribute icons
- PICT 10005 — Spectra terrain variant
- PICT 10006/10007/10008 — Popup message backgrounds
- PICT 10010 — Mini shield icons for strategy view
- PICT 10011/1012 — Strategy map templates

### UI Chrome (borders & backgrounds)
- PICT 1001 — Marble tileable background
- PICT 1002 — Horizontal marble bar
- PICT 1005/1006/1007/1008/1009 — Vertical marble borders (various heights)
- PICT 1011 — Horizontal label bar
- PICT 1013/1014/1015 — More vertical borders
- PICT 1016 — Dark green marble frame

### Help & About
- PICT 1020 — Help toolbar graphic
- PICT 1041 — Warlords II logo
- PICT 1042 — SSG logo
