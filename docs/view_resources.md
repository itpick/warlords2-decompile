# Warlords II MacApp View Resources Catalog

This document catalogs all MacApp View resources (`'View'` type) extracted from the Warlords II application, along with a summary of other resource types found in the extracted resources directory.

Source directory: `/Users/lucaspick/Desktop/release-macos/test/original-decompiled-converted/resources/`

## Binary Format Notes

MacApp View resources (version 3) use the following binary layout:

- **Bytes 0-1**: Version tag `0x03 0x00` (version 3)
- **Bytes 2-3**: Constant `0x00 0x03`
- **Bytes 4-7**: Root view type tag (4-char code, e.g. `wind`, `view`, `fwnd`, `tevw`, `cntl`)
- **Bytes 8-11**: Big-endian 32-bit size of remaining data (file_size - 8)
- **Byte 12+**: View data containing Pascal-string class names, 4-char identifiers, bounds, flags, adorner lists, behaviors, and child views

View type tags encountered:
- `wind` -- Standard window (TWindow / TBetterWindow)
- `fwnd` -- Floating window (TBetterFloatWindow)
- `view` -- Generic view (TView subclass, used for sub-panels)
- `tevw` -- Text editing view (TDialogTEView)
- `cntl` -- Control view (used for standalone controls like TProdView)

Each view element contains:
- A **Pascal string** class name (length byte + ASCII, e.g. `\x0DTBetterWindow`)
- A **4-char identifier** used for programmatic lookup (e.g. `map `, `turn`, `name`, `dlog`)
- Flags, super-view references, bounding rectangles, and adorner/behavior data

---

## View Resource Summary Table

| View ID | Size | Root Type | Root Class | Purpose |
|---------|------|-----------|------------|---------|
| 200 | 659 | wind | TDeskScrapView | Clipboard/Scrap Window |
| 300 | 161 | tevw | TDialogTEView | Text Editing Dialog View (shared) |
| 1000 | 288 | wind | TBetterWindow | Generic Dialog Window (PICT background) |
| 1001 | 730 | wind | TBetterWindow | **Main Game Window** (map, scroller, turn indicator) |
| 1002 | 225 | fwnd | TBetterFloatWindow | Strategy/Overview Map (floating) |
| 1003 | 259 | fwnd | TTripleSizeFloatWindow | Info Area Panel (floating, triple-size) |
| 1004 | 402 | fwnd | TBetterFloatWindow | Button Area / Control Panel (floating) |
| 1005 | 2140 | view | TProdView | Army Production Slots (8 armies + chevrons + fly/ground) -- variant A |
| 1006 | 2140 | view | TProdView | Army Production Slots -- variant B (identical layout to 1005) |
| 1007 | 2038 | view | TProdView | Army Production Slots -- variant C (similar, slightly smaller) |
| 1008 | 2613 | view | T3DIconButton | **Button Bar** (move/next/leave/guard/desert/path/delete + scroll + diplomacy + custom buttons + help) |
| 1009 | 2422 | view | T3DIconButton | Button Bar -- variant B (no diamond help button, plain scroll buttons) |
| 1010 | 847 | wind | TBetterWindow | Generic Dialog Window |
| 1012 | 225 | fwnd | TBetterFloatWindow | Strategy/Overview Map -- alternate (same as 1002) |
| 1020 | 1117 | wind | TBetterWindow | PICT-Dismiss Dialog (background image + 2-3 text strings) |
| 1030 | 973 | wind | TBetterWindow | GFX View Dialog (e.g. help graphics viewer) |
| 1040 | 1488 | wind | TBetterWindow | **About Box** (credits, address, scenario buttons) |
| 1041 | 1409 | view | TSunkenText | About Box -- Credits Sub-Panel (version, window info) |
| 1042 | 957 | view | TSunkenText | About Box -- Address Sub-Panel (6 text lines) |
| 1043 | 1155 | view | TPlainPicture | About Box -- Scenario Info Sub-Panel (name, strings, by, designer) |
| 1050 | 235 | wind | TBetterWindow | Minimal Dialog Window |
| 1060 | 679 | wind | TBetterWindow | Dialog with Drawing Environment |
| 2000 | 4802 | wind | TBetterWindow | **Keyboard Shortcuts Dialog** (4 category buttons + 26 radio shortcut slots) |
| 2010 | 1812 | wind | TBetterWindow | **Sound Volumes Dialog** (music/sound/speed sliders + cancel/ok) |
| 3000 | 1913 | wind | TBetterWindow | **Scenario Selection Dialog** (list view + Random/Start buttons) |
| 3010 | 3033 | wind | TBetterWindow | **Random Map Dialog** (water/hills/cities/forest sliders + terrain/army/city/shield popups + ally checkbox) |
| 3020 | 5276 | wind | TBetterWindow | **Game Setup Dialog - 8 Player** (8 player clusters with checkboxes, rollers, icons + options + edit/select/go) |
| 3021 | 5086 | wind | TGameOptionsWindow | **Game Options Dialog** (options list + neutral/razing radios + quest/vendetta/hidden/diplomacy/vprod checkboxes + random/international/quick/military checkboxes) |
| 3022 | 3457 | wind | TBetterWindow | **Side Setup Dialog** (side symbols + character list + description fields) |
| 3023 | 2621 | wind | TBetterWindow | **AOCE Catalog Dialog** (network catalog view for multiplayer addressing) |
| 3024 | 3614 | wind | TBetterWindow | **Game Setup Dialog - Compact** (8 shield/side radios + computer level radios + options + go) |
| 3030 | 7503 | wind | TBetterWindow | **In-Game Settings Dialog** (8 player clusters: human/enhanced/observer checkboxes + death status + hidden/speed + address/done/cancel) |
| 3100 | 637 | wind | TBetterWindow | **Start of Turn Banner** (player name + turn number) |
| 3200 | 2512 | wind | TBetterWindow | **Hero Hire Dialog** (overview map + hero info + hire/don't buttons + male/female radios) |
| 3300 | 1636 | wind | TBetterWindow | **City Dialog** (overview + info/build/production/vectoring icon buttons + name + ok) |
| 3301 | 1577 | view | TSideSymbol | City Dialog -- **Info Sub-Panel** (side symbols, income, defense, owner, city picture, capital flag, 4 production slots, 3 info lines) |
| 3302 | 1389 | view | TSideSymbol | City Dialog -- **Build Sub-Panel** (side symbols, income, defense, owner + rename/raze/buy production buttons) |
| 3303 | 1961 | view | TSideSymbol | City Dialog -- **Production Sub-Panel** (current production + 4 army slots + stop button + army/time/cost/strength/movement labels) |
| 3304 | 2492 | view | TSunkenText | City Dialog -- **Vectoring Sub-Panel** (here/going units + see button + 8 command slots + to/dest navigation + from/to strings) |
| 3305 | 1903 | view | TPicCopyView | City Dialog -- **Ruins Sub-Panel** (4 key icons + type/explored/3 info strings) |
| 3310 | 6485 | wind | TBetterWindow | **Build Production Dialog** (side symbols + name + 20 army production slots with strings + 4 "pro" slots + money + done) |
| 3400 | 1621 | wind | TBetterWindow | **Generic Message Dialog -- 2 Line** (5 background PICTs + heading + 2 strings + cancel/ok) |
| 3410 | 1737 | wind | TBetterWindow | **Generic Message Dialog -- 4 Line** (5 PICTs + heading + 4 strings + cancel/ok with cmd keys) |
| 3420 | 1621 | wind | TBetterWindow | **Graceful/Play Dialog** (5 PICTs + heading + 3 strings + graceful/play/ungraceful buttons) |
| 3500 | 2369 | wind | TBetterWindow | **History Graph Dialog** (overview + name + city/gold/winning/events icon buttons + line/bar graphs + turn/comment + left/right nav + done) |
| 3510 | 2946 | wind | TBetterWindow | **Triumphs Dialog** (name + 8 side icons + 5 army/string pairs + done) |
| 3600 | 1963 | wind | TBetterWindow | **Army Bonuses Dialog** (name + headers + scrollable army bonus list + done) |
| 3610 | 4406 | wind | TBetterWindow | **Items Dialog** (14 item/bonus text pairs + bonus button + done) |
| 3620 | 3561 | wind | TBetterWindow | **Stack Dialog** (headers + max bonus + 8 army/chevron pairs + stack info view + group/ungroup/cancel/ok) |
| 3700 | 1976 | wind | TBetterWindow | **Report Dialog** (overview + name + army/city/gold/prod/winning icon buttons + description + player + hire/done) |
| 3701 | 173 | view | TBarGraph | Report -- Bar Graph Sub-View |
| 3702 | 735 | view | TDrawingEnvironment | Report -- Production List Sub-View (scrollable list) |
| 3800 | 1782 | wind | TBetterWindow | **Fight Result Dialog** (heading + 4 strings + occupy/pillage/sack/raze buttons with cmd keys) |
| 3810 | 2696 | wind | TBetterWindow | **Fight Info / Battle Summary Dialog** (5 PICTs + heading + 4 strings + 3 army/type/gold sets) |
| 3900 | 1841 | wind | TBetterWindow | **Confirmation Dialog** (5 PICTs + heading + 2 text lines + cancel/ok) |
| 4000 | 5396 | wind | TBetterWindow | **Hero Inspect Dialog** (overview + name + 8 army slots + title/nearby/battles/commands/level/experience labels + carried/ground item lists + up/down/left/right nav + done) |
| 4010 | 6333 | wind | TBetterWindow | **Army Detail Dialog** (name + column headers + 6 army rows with name/level/exp/need/strength/movement fields + done) |
| 4020 | 1129 | wind | TBetterWindow | **Level Up Dialog** (PICT-dismiss + level picture) |
| 4100 | 1745 | wind | TBetterWindow | **Search Result Dialog** (5 PICTs + name + 4 text lines + done + take button) |
| 4110 | 1012 | wind | TBetterWindow | **Search Choice Dialog** (3 text lines + bless/quest buttons with cmd keys) |
| 4120 | 2575 | wind | TBetterWindow | **Sage Dialog** (overview + name + 5 strings + 3 lines + item/money/maps/done buttons) |
| 4130 | 1951 | wind | TBetterWindow | **List Selection Dialog** (5 PICTs + name + scrollable text list + cancel/ok) |
| 4200 | 2107 | wind | TBetterWindow | **Map Overview Dialog** (title + overview map + done + "none" text) |
| 4300 | 859 | wind | TBetterWindow | **Diplomacy Main Dialog** (PICT background + done button) |
| 4301 | 2255 | view | TSunkenText | Diplomacy -- **Report Sub-Panel** (grid + 8 side symbols/ambassador labels + active button) |
| 4302 | 5301 | view | TSunkenText | Diplomacy -- **Status Matrix Sub-Panel** (side name/symbols + 7 status/proposal views + 7 peace/hostile/war buttons + report button) |
| 4400 | 1011 | wind | TBetterWindow | **Shield/Side Display Dialog** (PICT-dismiss + defender/attacker shield views + 2 text lines) |
| 4401 | 96 | view | TPicCopyView | Standalone PicCopy View (reusable image slot) |
| 4402 | 105 | cntl | TProdView | Standalone Production View Control (reusable army icon) |
| 4410 | 1130 | wind | TBetterWindow | **Medal/Award Dialog** (PICT-dismiss + medal picture + army view) |
| 4420 | 1575 | wind | TBetterWindow | **Generic Info Dialog -- 3 Line** (5 PICTs + heading + 3 strings + done) |
| 4500 | 2066 | wind | TBetterWindow | **Peace Offer Dialog** (4 side PICTs + background + offer/reject text lines + reject/accept buttons) |
| 4510 | 1089 | wind | TBetterWindow | **Simple PICT-Dismiss Dialog** (5 PICTs + 2 text lines, click to dismiss) |
| 4600 | 7965 | wind | TBetterWindow | **Fight Order Dialog** (side symbols + name + 20 army slots with strings + reset/cancel/done + left/right navigation) |

---

## Detailed View Hierarchies

### View 200 -- Clipboard/Scrap Window
```
wind TDeskScrapView [CLIP]
```
MacApp standard clipboard viewer. Contains scroller with TDeskScrapView and scroll bars.

### View 300 -- Text Edit Dialog View
```
tevw TDialogTEView  bounds=(0,1)-(1025,257) [256x1025]
```
Shared text editing subview used as a reusable component.

### View 1000 -- Generic Dialog Window
```
wind TBetterWindow
  dlgb TBetterDialogBehavior [dlog]
  pict (PICT background)
```
Template dialog with PICT background and dialog behavior. Used as a base for simple modal dialogs.

### View 1001 -- Main Game Window
```
wind TBetterWindow [WIND]
  cntl TTurnView [turn]       -- Turn indicator control (top bar)
  scrl TWholeRedrawScroller [SCLR]
    view TMapView [map]       -- Scrollable terrain map
  ssbr (horizontal scroll bar)
  ssbr (vertical scroll bar)
```
The primary game window containing the scrollable map, turn indicator, and scroll bars. This is the main gameplay interface.

### View 1002 -- Strategy Map (Floating)
```
fwnd TBetterFloatWindow
  dlgb TDialogBehavior [dlog]
  view TOverviewView [over]   -- Minimap/overview
```
Floating window showing the overview/minimap.

### View 1003 -- Info Area Panel (Floating)
```
fwnd TTripleSizeFloatWindow
  dlgb TInfoAreaDialogBehavior [dlog]
  cntl TInfoArea [info]
```
Floating panel showing terrain/unit information. Uses TTripleSizeFloatWindow for larger display.

### View 1004 -- Button Area / Control Panel (Floating)
```
fwnd TBetterFloatWindow
  dlgb TButtonAreaDialogBehavior [dlog]
  cntl TButtonArea [butt]
```
Floating control panel with game action buttons.

### View 1005/1006/1007 -- Army Production Slot Panels
```
view TProdView [arm0]
  view TPicCopyView [che0]    -- Chevron indicator for army 0
view TProdView [arm1]
  view TPicCopyView [che1]    -- Chevron indicator for army 1
... (8 army slots total)
view TPicCopyView [fly]       -- Flying indicator
view TPicCopyView [grou]      -- Ground indicator
```
Reusable panel showing 8 army production slots with chevron overlays, plus flying/ground type indicators. Three variants (1005, 1006, 1007) likely used in different contexts (city production, stack view, etc.).

### View 1008 -- Button Bar (Full)
```
view T3DIconButton [move]     -- Move command
view T3DIconButton [next]     -- Next group
view T3DIconButton [leav]     -- Leave group
view T3DIconButton [guar]     -- Guard/defend
view T3DIconButton [dese]     -- Deselect
view T3DIconButton [path]     -- Set path
view T3DIconButton [dele]     -- Delete/disband
view T3DScrollIconButton [scr7] -- Scroll NW
view T3DScrollIconButton [scr0] -- Scroll N
view T3DScrollIconButton [scr1] -- Scroll NE
view T3DScrollIconButton [scr6] -- Scroll W
view T3DScrollIconButton [cent] -- Center
view T3DScrollIconButton [scr2] -- Scroll E
view T3DScrollIconButton [scr5] -- Scroll SW
view T3DScrollIconButton [scr4] -- Scroll S
view T3DScrollIconButton [scr3] -- Scroll SE
view T3DIconButton [dipl]     -- Diplomacy
view T3DIconButton [but1]     -- Custom button 1
view T3DIconButton [but2]     -- Custom button 2
view T3DIconButton [but3]     -- Custom button 3
view T3DIconButton [but4]     -- Custom button 4
view T3DDiamondIconButton [help] -- Help (diamond shape)
```
Full button bar with army commands, 8-directional scroll pad with center, diplomacy, 4 customizable buttons, and diamond help button.

### View 1009 -- Button Bar (Compact)
Same as 1008 but without the diamond help button and using plain T3DIconButton for scroll buttons instead of T3DScrollIconButton.

### View 1020 -- PICT-Dismiss Dialog
```
wind TBetterWindow [wind]
  TBroadcastCmdKey
  TPictDismissDialogBehavior [dlog]
  pict TPlainPicture x5       -- 5 stacked background PICTs
  stat TSunkenText [1str]
  stat TSunkenText [2st1]
  stat TSunkenText [2st2]
```
Dialog that dismisses when the picture is clicked. Shows text strings over a PICT background.

### View 1030 -- GFX View Dialog
```
wind TBetterWindow [wind]
  dlgb TDialogBehavior [dlog]
  pict TPlainPicture
  view TGFXView [gfx]         -- Custom graphics view
  butn T3DButton [done]
  TDrawingEnvironment
```
Dialog containing a custom graphics view (likely for help images).

### View 1040 -- About Box
```
wind TBetterWindow [wind]
  dlgb TAboutBoxDialogBehavior [dlog]
  TBroadcastCmdKey
  pict TPlainPicture
  butn T3DButton [cred]       -- Credits
  butn T3DButton [addr]       -- Address
  butn T3DButton [scen]       -- Scenario info
  butn T3DButton [done]       -- Close
```
About box with tabs for credits, address, and scenario information.

Sub-panels:
- **View 1041**: Credits text (version, window info, menu info)
- **View 1042**: Address text (6 lines of developer/publisher info)
- **View 1043**: Scenario info (name, 5 detail strings, by, designer)

### View 2000 -- Keyboard Shortcuts Dialog
```
wind TBetterWindow
  dlgb TMenuShortcutsDialogBehavior [dlog]
  pict TPlainPicture
  stat TSunkenText x2
  butn T3DIconButton [but1..but4]  -- 4 shortcut category buttons
  clus T3DCluster [shor]
    radi T3DIconRadio [sho1..shoJ]  -- 26 shortcut radio buttons
  butn T3DButton [canc]
  butn T3DButton [ok]
```
Allows customizing keyboard shortcuts with 26 assignable slots.

### View 2010 -- Sound Volumes Dialog
```
wind TBetterWindow
  dlgb TBetterDialogBehavior [dlog]
  pict TPlainPicture x5
  cntl TSlider [musi]         -- Music volume
  cntl TSlider [soun]         -- Sound effects volume
  cntl TSlider [spee]         -- Animation speed
  butn T3DButton [canc]
  butn T3DButton [ok]
```

### View 3000 -- Scenario Selection Dialog
```
wind TBetterWindow
  dlgb TScenarioSelectDialogBehavior [dlog]
  TDrawingEnvironment
  view TScenarioListView [List] -- Scrollable scenario list
  TKeySelectionBehavior
  stat TSunkenText [name]      -- Scenario name
  stat TSunkenText [desc]      -- Description
  stat TSunkenText [city]      -- City count
  stat TSunkenText [ruin]      -- Ruin count
  stat TSunkenText [play]      -- Player count
  view T3DFrameAdorner         -- Decorative frame
  view (overview area)
  butn T3DButton [Rand]        -- Random Map
  butn T3DButton [Star]        -- Start Game
```

### View 3010 -- Random Map Generator Dialog
```
wind TBetterWindow
  dlgb TRandomMapDialogBehavior [dlog]
  cntl TSlider [wate]         -- Water percentage
  cntl TSlider [hill]         -- Hills percentage
  cntl TSlider [citi]         -- Cities count
  cntl TSlider [fore]         -- Forest percentage
  popu T3DPopup [terr]        -- Terrain set popup
  popu T3DPopup [army]        -- Army set popup
  popu T3DPopup [city]        -- City set popup
  popu T3DPopup [shie]        -- Shield set popup
  chkb T3DCheckBox [ally]     -- Allies checkbox
  butn T3DButton [canc]
  butn T3DButton [ok]
```

### View 3020 -- Game Setup Dialog (8-Player)
```
wind TBetterWindow
  dlgb TGameSetupDialogBehavior [dlog]
  (per player 1-8):
    clus T3DCluster [clu1..clu8]
      chkb T3DCheckBox [cha1..cha8]  -- Enable player
      cntl TRoller [rol1..rol8]      -- Player type roller
      butn T3DIconButton [ico1..ico8] -- Player icon
  clus T3DCluster [opti]       -- Options cluster
    butn T3DButton [edit]      -- Edit options
    chkb T3DCheckBox [grea]    -- Great game
    popu T3DPopup [popu]       -- Difficulty popup
    chkb T3DCheckBox [mail]    -- Email game
    butn T3DButton [addr]      -- Address
  butn T3DButton [sele]        -- Select scenario
  butn T3DButton [go]          -- Start game
  stat TSunkenText [diff]      -- Difficulty text
  butn T3DButton [fewe]        -- Fewer players
```

### View 3021 -- Game Options Dialog
```
wind TGameOptionsWindow
  dlgb TGameOptionsDialogBehavior [dlog]
  view TOptionsListView [List]  -- Custom options list
  butn T3DButton [dele]         -- Delete option
  butn T3DButton [new]          -- New option
  clus T3DCluster [affe]        -- Affected settings
  clus T3DCluster [neut]
    radi T3DRadio [neu1..neu3]  -- Neutral city behavior
  clus T3DCluster [razi]
    radi T3DRadio [raz1..raz3]  -- Razing policy
  chkb T3DCheckBox [ques]       -- Quests
  chkb T3DCheckBox [vene]       -- Vendettas
  chkb T3DCheckBox [hidd]       -- Hidden map
  chkb T3DCheckBox [dipl]       -- Diplomacy
  chkb T3DCheckBox [vpro]       -- Victory production
  clus T3DCluster [nota]
    chkb T3DCheckBox [rand]     -- Random events
    chkb T3DCheckBox [intn]     -- International
    chkb T3DCheckBox [quic]     -- Quick combat
    chkb T3DCheckBox [mili]     -- Military advisor
  butn T3DButton [canc]
  butn T3DButton [ok]
```

### View 3022 -- Side Setup Dialog
```
wind TBetterWindow
  dlgb TSideSetupDialogBehavior [dlog]
  clus T3DCluster [side]        -- Side selection
    view TSideSymbol [sid1]     -- Side icon 1
    view TSideSymbol [sid2]     -- Side icon 2
  clus T3DCluster [desc]        -- Description area
    view TCharacterListView [List]
    stat TSunkenText [desc]
    view TSideSymbol [sid3]
    stat TSunkenText [des1..des6] -- 6 description lines
  butn T3DButton [canc]
  butn T3DButton [ok]
```

### View 3023 -- AOCE Network Catalog Dialog
```
wind TBetterWindow [wind] bounds=(0,0,256,868)
  dlgb TBetterDialogBehavior [dlog]
  view TAOCECatalogView [cata]  -- Network address book
```
Used for multiplayer network addressing via Apple Open Collaboration Environment.

### View 3024 -- Game Setup Dialog (Compact)
```
wind TBetterWindow
  dlgb TGameSetupDialogBehavior [dlog]
  (8 shield/side pairs):
    view TPicCopyView [shi0..shi7]  -- Shield images
    radi T3DRadio [sid0..sid7]      -- Side selection radios
  clus T3DCluster [comp]
    radi T3DRadio [com0..com2]      -- Computer difficulty
  clus T3DCluster [opti]
    chkb T3DCheckBox [grea]
    popu T3DPopup [popu]
    butn T3DButton [edit]
  stat TSunkenText [diff]
  butn T3DButton [more]              -- More options
  butn T3DButton [go]                -- Start game
```

### View 3030 -- In-Game Settings Dialog
```
wind TBetterWindow
  dlgb TSettingsDialogBehavior [dlog]
  (per player 1-8):
    clus T3DCluster [clu1..clu8]
      view TPlotIconIcon [ico1..ico8] -- Player icon
      chkb T3DCheckBox [hum1..hum8]   -- Human player
      chkb T3DCheckBox [enh1..enh8]   -- Enhanced AI
      chkb T3DCheckBox [obs1..obs8]   -- Observer mode
      stat TSunkenText [dea1..dea8]   -- Death status
  stat TSunkenText [name]
  clus T3DCluster [pmac]
    chkb T3DCheckBox [hidd]           -- Hidden cursor
    chkb T3DCheckBox [spee]           -- Speed setting
  butn T3DButton [addr]
  butn T3DButton [done]
  butn T3DButton [canc]
```
71 elements total -- the largest non-battle view.

### View 3100 -- Start of Turn Banner
```
wind TBetterWindow [wind]
  dlgb TStartOfTurnBehavior [dlog]
  pict TPlainPicture [pict]    -- Player banner image
  TDrawingEnvironment
  stat TSunkenText [name]      -- Player name
  stat TSunkenText [turn]      -- Turn number
```

### View 3200 -- Hero Hire Dialog
```
wind TBetterWindow [wind]
  dlgb THeroHire [dlog]
  view TOverviewView [over]    -- Minimap showing hero location
  stat TSunkenText [str1..str4] -- Hero description strings
  butn T3DButton [hire]
  butn T3DButton [dont]
  clus T3DCluster [sex]
    radi T3DRadio [male]
    radi T3DRadio [fema]
```

### View 3300 -- City Dialog (Main)
```
wind TBetterWindow [wind]
  dlgb TCityDialogBehavior [dlog]
  pict TPlainPicture
  view TOverviewView [over]    -- City location on minimap
  butn T3DIconButton [info]    -- Info tab
  butn T3DIconButton [buil]    -- Build tab
  butn T3DIconButton [prod]    -- Production tab
  butn T3DIconButton [vect]    -- Vectoring tab
  butn T3DButton [ok]
  stat TSunkenText [name]      -- City name
```
Tabbed city management dialog. Sub-panels loaded from View 3301-3305:

- **View 3301 -- City Info Tab**: Side symbols, income, defense, owner, city picture, capital indicator, 4 army production slots, 3 info lines
- **View 3302 -- City Build Tab**: Side symbols + rename/raze/buy production buttons
- **View 3303 -- City Production Tab**: Current production unit + 4 available army types + stop button + stats (army/time/cost/strength/movement)
- **View 3304 -- City Vectoring Tab**: "Here" and "going" units + 8 command slots + destination navigation
- **View 3305 -- City Ruins Tab**: 4 key item icons + type/explored/3 info strings

### View 3310 -- Build Production Dialog
```
wind TBetterWindow [wind]
  dlgb TBuildProdDialogBehavior [dlog]
  view TSideSymbol [sid1, sid2]
  stat TSunkenText [name, subt]
  (20 army production slots [arm0..armC] with labels [str0..strC])
  (4 "pro" preview slots [pro0..pro3])
  stat TSunkenText [mone]      -- Cost/money display
  butn T3DButton [done]
```
Used for reassigning city production. Supports up to 20 army types (using characters 0-9 then : through C for IDs).

### View 3400/3410/3420 -- Generic Message Dialogs
- **3400**: 2-line message with cancel/ok (heading + str1 + str2)
- **3410**: 4-line message with cancel/ok + command keys (heading + str1..str4)
- **3420**: 3-line with graceful/play/ungraceful buttons (for surrender options)

### View 3500 -- History Graph Dialog
```
wind TBetterWindow [wind]
  dlgb THistoryDialogBehavior [dlog]
  view TOverviewView [over]
  stat TSunkenText [name]
  butn T3DIconButton [city/gold/winn/even]  -- Category buttons
  view TLineGraph [grap]       -- Line graph
  view TLineGraph [barg]       -- Bar graph
  stat TSunkenText [turn]      -- Turn display
  stat TSunkenText [comm]      -- Commentary
  butn T3DIconButton [left/righ] -- Navigation
  butn T3DButton [done]
```

### View 3510 -- Triumphs Dialog
```
wind TBetterWindow [wind]
  dlgb THistoryDialogBehavior [dlog]
  stat TSunkenText [name]
  butn T3DIconButton [sid0..sid7]  -- 8 player side buttons
  (5 army/string pairs: arm0..arm4 + str0..str4)
  butn T3DButton [done]
```

### View 3600 -- Army Bonuses Dialog
```
wind TBetterWindow [wind]
  dlgb TDialogBehavior [dlog]
  stat TSunkenText [name]
  scrl TWholeRedrawScroller [Scrl]
    view TArmyBonusListView [List]  -- Scrollable bonus list
  butn T3DButton [done]
```

### View 3610 -- Items Dialog
```
wind TBetterWindow [wind]
  dlgb TItemsDialogBehavior [dlog]
  (14 item/bonus pairs: ite0..ite= + bon0..bon=)
  butn T3DButton [bonu]       -- Bonus button
  butn T3DButton [done]
```

### View 3620 -- Stack Dialog
```
wind TBetterWindow [wind]
  dlgb TStackDialogBehavior [dlog]
  stat TSunkenText [maxb]      -- Max bonus display
  (8 army/chevron pairs: arm0..arm7 + che0..che7)
  view TStackInfoView [stac]   -- Stack summary
  butn T3DButton [grou]        -- Group
  butn T3DButton [ungr]        -- Ungroup
  butn T3DButton [canc]
  butn T3DButton [ok]
```

### View 3700 -- Report Dialog
```
wind TBetterWindow [wind]
  dlgb TReportDialogBehavior [dlog]
  view TOverviewView [over]
  stat TSunkenText [name, desc, play]
  butn T3DIconButton [army/city/gold/prod/winn]  -- Report category buttons
  butn T3DButton [hire]
```
Sub-views:
- **View 3701**: Bar graph (TBarGraph)
- **View 3702**: Production list (TNewProductionListView in scroller)

### View 3800 -- Fight Result Dialog (City Capture)
```
wind TBetterWindow [wind]
  dlgb TFightResultDialogBehavior [dlog]
  stat TSunkenText [head, str1..str4]
  butn T3DButton [occu]        -- Occupy
  butn T3DButton [pill]        -- Pillage
  butn T3DButton [sack]        -- Sack
  butn T3DButton [raze]        -- Raze
```
All four buttons have command key behaviors for quick keyboard selection.

### View 3810 -- Battle Summary Dialog
```
wind TBetterWindow [wind]
  dlgb TPictDismissDialogBehavior [dlog]
  pict TPlainPicture x5
  stat TSunkenText [head, str1..str4]
  (3 army/type/gold triplets: arm1..arm3 + typ1..typ3 + gol1..gol3)
```

### View 3900 -- Confirmation Dialog
```
wind TBetterWindow [wind]
  dlgb TBetterDialogBehavior [dlog]
  pict TPlainPicture x5
  stat TSunkenText [head]
  butn T3DButton [canc]
  butn T3DButton [ok]
```

### View 4000 -- Hero Inspect Dialog
```
wind TBetterWindow [wind]
  dlgb THeroInspectDialogBehavior [dlog]
  view TOverviewView [over]
  stat TSunkenText [name]
  cntl TProdView [arm0..arm7]   -- 8 army slots
  stat TSunkenText [ntit]       -- Title
  stat TSunkenText [near]       -- Nearby info
  stat TSunkenText [batt]       -- Battles
  stat TSunkenText [comm]       -- Commands
  stat TSunkenText [leve]       -- Level
  stat TSunkenText [expe]       -- Experience
  view TItemListView [carr]     -- Carried items list
  butn T3DIconButton [up/down]  -- Scroll carried items
  view TItemListView [grou]     -- Ground items list
  stat TSunkenText [numb]       -- Item count
  butn T3DIconButton [left/righ] -- Scroll ground items
  butn T3DButton [done]
```

### View 4010 -- Army Detail Dialog
```
wind TBetterWindow [wind]
  dlgb TBetterDialogBehavior [dlog]
  stat TSunkenText [name]       -- Army group name
  (column headers: 6 unlabeled TSunkenText)
  (6 army rows, each with):
    cntl TProdView [arm0..arm5]
    stat TSunkenText [nam0..nam5]  -- Unit name
    stat TSunkenText [lev0..lev5]  -- Level
    stat TSunkenText [exp0..exp5]  -- Experience
    stat TSunkenText [nee0..nee5]  -- Needed XP
    stat TSunkenText [str0..str5]  -- Strength
    stat TSunkenText [mov0..mov5]  -- Movement
  butn T3DButton [done]
```

### View 4020 -- Level Up Dialog
```
wind TBetterWindow
  dlgb TPictDismissDialogBehavior [dlog]
  pict TPlainPicture [pict]     -- Level-up image
  pict TPlainPicture [leve]     -- Level badge
```

### View 4100 -- Search Result Dialog
```
wind TBetterWindow [wind]
  dlgb TSearchDialogBehavior [dlog]
  pict TPlainPicture x5
  stat TSunkenText [name]
  stat TSunkenText [lin1..lin4]
  butn T3DButton [done]
  butn T3DButton [take]         -- Take item
```

### View 4110 -- Search Choice Dialog (Sage/Temple)
```
wind TBetterWindow [wind]
  dlgb TSearchDialogBehavior [dlog]
  stat TSunkenText [lin1..lin3]
  butn T3DButton [bles]         -- Blessing
  butn T3DButton [ques]         -- Quest
```

### View 4120 -- Sage Dialog
```
wind TBetterWindow [wind]
  dlgb TSageDialogBehavior [dlog]
  view TOverviewView [over]
  stat TSunkenText [name, str1..str5, lin1..lin3]
  butn T3DButton [item]         -- Items info
  butn T3DButton [mone]         -- Money info
  butn T3DButton [maps]         -- Maps info
  butn T3DButton [done]
```

### View 4130 -- List Selection Dialog
```
wind TBetterWindow
  dlgb TDialogBehavior [dlog]
  stat TSunkenText [name]
  view TListTextListView [list]  -- Scrollable text list
  TKeySelectionBehavior
  butn T3DButton [canc]
  butn T3DButton [ok]
```

### View 4200 -- Map Overview Dialog
```
wind TBetterWindow [wind]
  dlgb TDialogBehavior [dlog]
  stat TSunkenText [titl]       -- Title
  view TOverviewView [over]     -- Full overview map
  butn T3DButton [done]
  stat TSunkenText [none]       -- "No data" placeholder
```

### View 4300 -- Diplomacy Main Dialog
```
wind TBetterWindow [wind]
  dlgb TDiplomacyDialogBehavior [dlog]
  pict TPlainPicture
  butn T3DButton [done]
```
Container for diplomacy sub-panels:

- **View 4301 -- Diplomacy Report**: name + grid + 8 side/ambassador pairs + active button
- **View 4302 -- Diplomacy Status Matrix**: 7 columns of status/proposal views + 7 sets of peace/hostile/war buttons + report button (51 elements total)

### View 4400 -- Shield/Side Display
```
wind TBetterWindow
  dlgb TPictDismissDialogBehavior [dlog]
  pict TPlainPicture [pict]
  view TPicCopyView [shed]      -- Defender shield
  view TPicCopyView [shea]      -- Attacker shield
  stat TSunkenText [lin1, lin2]
```

### View 4401/4402 -- Standalone Reusable Views
- **4401**: TPicCopyView (96 bytes) -- simple image copy view for reuse
- **4402**: TProdView (105 bytes) -- simple production icon control for reuse

### View 4410 -- Medal/Award Dialog
```
wind TBetterWindow
  dlgb TPictDismissDialogBehavior [dlog]
  pict TPlainPicture [pict]
  pict TPlainPicture [meda]     -- Medal image
  cntl TProdView [army]         -- Army that earned award
```

### View 4420 -- Generic Info Dialog (3 Lines)
```
wind TBetterWindow [wind]
  dlgb TBetterDialogBehavior [dlog]
  pict TPlainPicture x5
  stat TSunkenText [head, str1..str3]
  butn T3DButton [done]
```

### View 4500 -- Peace Offer Dialog
```
wind TBetterWindow
  dlgb TPeaceDialogBehavior [dlog]
  pict TPlainPicture [sid0..sid3]  -- 4 side images
  pict TPlainPicture [pict]
  stat TSunkenText [off0..off2]    -- Offer text (3 lines)
  stat TSunkenText [rej0..rej2]    -- Rejection text (3 lines)
  butn T3DButton [reje]            -- Reject
  butn T3DButton [acce]            -- Accept
```

### View 4510 -- Simple PICT-Dismiss
```
wind TBetterWindow
  dlgb TPictDismissDialogBehavior [dlog]
  pict TPlainPicture x5
  stat TSunkenText x2
```

### View 4600 -- Fight Order Dialog
```
wind TBetterWindow [wind]
  dlgb TFightOrderDialogBehavior [dlog]
  view TSideSymbol [sid1, sid2]
  stat TSunkenText [name, subt]
  (20 army slots: arm0..armJ with labels str0..strJ)
  butn T3DButton [rese]         -- Reset order
  butn T3DButton [canc]         -- Cancel
  butn T3DButton [done]         -- Confirm
  butn T3DIconButton [left]     -- Scroll left
  butn T3DIconButton [righ]     -- Scroll right
```
68 elements. Uses TFightOrderProdView for army slots (specialized drag-reorderable production views).

---

## Custom View Classes (Warlords II Specific)

These classes are defined by Warlords II (not part of standard MacApp):

| Class | Type Tag | Description |
|-------|----------|-------------|
| TBetterWindow | wind | Enhanced TWindow with better resize behavior |
| TBetterFloatWindow | fwnd | Floating palette window variant |
| TTripleSizeFloatWindow | fwnd | Floating window at 3x size (for info area) |
| TBetterDialogBehavior | dlgb | Enhanced dialog behavior (handles button clicks, etc.) |
| TMapView | view | Main game map rendering view |
| TTurnView | cntl | Turn indicator control (shows current turn/player) |
| TOverviewView | view | Strategy/minimap overview |
| TInfoArea | cntl | Terrain/unit info display control |
| TButtonArea | cntl | Game action button container |
| TProdView | cntl | Army production icon (shows unit type picture) |
| TPicCopyView | view | Image copy/display view |
| TPlainPicture | pict | Simple PICT display |
| TSunkenText | stat | Sunken-style static text label |
| T3DButton | butn | 3D-style push button |
| T3DIconButton | butn/view | 3D icon button (toolbar style) |
| T3DScrollIconButton | view | 3D icon button for scroll direction |
| T3DDiamondIconButton | view | Diamond-shaped icon button (help) |
| T3DIconRadio | radi | 3D icon-style radio button |
| T3DRadio | radi | 3D radio button |
| T3DCheckBox | chkb | 3D checkbox |
| T3DPopup | popu | 3D popup menu |
| T3DCluster | clus | Container for radio/checkbox groups |
| T3DFrameAdorner | (adorner) | 3D frame decoration |
| TSlider | cntl | Volume/value slider control |
| TRoller | cntl | Cycling value selector (player type) |
| TLineGraph | view | Line graph for history display |
| TBarGraph | view | Bar graph for reports |
| TSideSymbol | view | Player side icon/shield display |
| TCityPicture | view | City picture display |
| TPlotIconIcon | view | Player icon in settings |
| TStackInfoView | view | Stack army summary |
| TScenarioListView | view | Scrollable scenario list |
| TOptionsListView | view | Game options list |
| TCharacterListView | view | Character/leader list |
| TArmyBonusListView | view | Army bonus scrolling list |
| TNewProductionListView | view | Production availability list |
| TListTextListView | view | Generic text list |
| TItemListView | view | Hero item list |
| TDiplomReportGrid | view | Diplomacy report grid |
| TDiplomPicCopyView | view | Diplomacy status icon |
| TDiplomIconButton | butn | Diplomacy action button |
| TBuildProdProdView | view | Build production slot (specialized) |
| TFightOrderProdView | view | Fight order slot (drag-reorderable) |
| TAOCECatalogView | view | Network catalog for multiplayer |
| TWholeRedrawScroller | scrl | Scroller that redraws fully on scroll |
| TGameOptionsWindow | wind | Custom window for game options |
| TDialogTEView | tevw | Text editing within dialogs |
| TDrawingEnvironment | (env) | Drawing environment settings |
| TBroadcastCmdKey | (behavior) | Broadcasts keyboard shortcuts |
| TCmdKeyBehavior | (behavior) | Handles Cmd+key for individual buttons |
| TKeySelectionBehavior | (behavior) | Type-to-select in lists |
| TPictDismissDialogBehavior | dlgb | Click-to-dismiss dialog |
| TStartOfTurnBehavior | dlgb | Start-of-turn display behavior |
| TScenarioSelectDialogBehavior | dlgb | Scenario selection logic |
| TRandomMapDialogBehavior | dlgb | Random map generator logic |
| TGameSetupDialogBehavior | dlgb | Game setup logic |
| TGameOptionsDialogBehavior | dlgb | Game options logic |
| TSideSetupDialogBehavior | dlgb | Side/player setup logic |
| TSettingsDialogBehavior | dlgb | In-game settings logic |
| TCityDialogBehavior | dlgb | City management logic |
| TBuildProdDialogBehavior | dlgb | Build production logic |
| THistoryDialogBehavior | dlgb | History/triumphs logic |
| TReportDialogBehavior | dlgb | Reports logic |
| TFightResultDialogBehavior | dlgb | Combat result logic |
| TFightOrderDialogBehavior | dlgb | Fight order logic |
| THeroInspectDialogBehavior | dlgb | Hero inspection logic |
| THeroHire | dlgb | Hero hiring logic |
| TSearchDialogBehavior | dlgb | Ruin search logic |
| TSageDialogBehavior | dlgb | Sage/temple logic |
| TDiplomacyDialogBehavior | dlgb | Diplomacy logic |
| TPeaceDialogBehavior | dlgb | Peace offer logic |
| TItemsDialogBehavior | dlgb | Items display logic |
| TStackDialogBehavior | dlgb | Stack management logic |
| TMenuShortcutsDialogBehavior | dlgb | Shortcut customization logic |
| TAboutBoxDialogBehavior | dlgb | About box logic |
| TInfoAreaDialogBehavior | dlgb | Info area behavior |
| TButtonAreaDialogBehavior | dlgb | Button area behavior |

---

## Functional Grouping

### Core Game Windows (always present during gameplay)
| View ID | Description |
|---------|-------------|
| 1001 | Main Game Window (map + turn indicator + scrollbars) |
| 1002/1012 | Strategy Map (floating minimap) |
| 1003 | Info Area Panel (floating terrain/unit info) |
| 1004 | Button Area / Control Panel (floating) |
| 1008/1009 | Button Bar (army commands + scroll pad + action buttons) |
| 1005/1006/1007 | Army Production Slot Panels (reused in multiple dialogs) |

### Pre-Game Dialogs
| View ID | Description |
|---------|-------------|
| 3000 | Scenario Selection |
| 3010 | Random Map Generator |
| 3020 | Game Setup (8-player, full controls) |
| 3024 | Game Setup (compact, shield-based) |
| 3021 | Game Options |
| 3022 | Side/Player Setup |
| 3023 | Network Address (AOCE) |
| 3030 | In-Game Settings (player human/AI toggles) |

### Turn Management
| View ID | Description |
|---------|-------------|
| 3100 | Start of Turn Banner |

### City Management
| View ID | Description |
|---------|-------------|
| 3300 | City Dialog (main, with tab buttons) |
| 3301 | City Info Tab |
| 3302 | City Build Tab |
| 3303 | City Production Tab |
| 3304 | City Vectoring Tab |
| 3305 | City Ruins Tab |
| 3310 | Build Production (reassign city output) |

### Combat
| View ID | Description |
|---------|-------------|
| 3800 | Fight Result (occupy/pillage/sack/raze) |
| 3810 | Battle Summary (casualties and spoils) |
| 4400 | Shield/Side Display (attacker vs defender) |
| 4600 | Fight Order (arrange army priority, 20 slots) |

### Heroes
| View ID | Description |
|---------|-------------|
| 3200 | Hero Hire Dialog |
| 4000 | Hero Inspect (stats, items, armies) |
| 4010 | Army Detail (6-unit stat table) |
| 4020 | Level Up Notification |
| 4100 | Search Result (ruin/temple/library) |
| 4110 | Search Choice (bless or quest) |
| 4120 | Sage Dialog (item/money/maps/done) |
| 4410 | Medal/Award Dialog |

### Reports and History
| View ID | Description |
|---------|-------------|
| 3500 | History Graph (cities/gold/winning/events) |
| 3510 | Triumphs (player army achievements) |
| 3700 | Report Dialog (main) |
| 3701 | Report Bar Graph Sub-View |
| 3702 | Report Production List Sub-View |

### Diplomacy
| View ID | Description |
|---------|-------------|
| 4300 | Diplomacy Main Dialog |
| 4301 | Diplomacy Report Sub-Panel |
| 4302 | Diplomacy Status Matrix (7-player grid) |
| 4500 | Peace Offer Dialog |

### View / Information Dialogs
| View ID | Description |
|---------|-------------|
| 3600 | Army Bonuses |
| 3610 | Items |
| 3620 | Stack (group/ungroup) |
| 4130 | List Selection (generic) |
| 4200 | Map Overview |

### Generic / Reusable Dialogs
| View ID | Description |
|---------|-------------|
| 200 | Clipboard Window |
| 300 | Text Edit View (shared component) |
| 1000 | Simple PICT Dialog |
| 1010 | Generic Dialog |
| 1020 | PICT-Dismiss Dialog (2-3 text strings) |
| 1030 | GFX View Dialog |
| 1050 | Minimal Dialog |
| 1060 | Dialog with Drawing Environment |
| 3400 | 2-line Message (cancel/ok) |
| 3410 | 4-line Message (cancel/ok + cmd keys) |
| 3420 | Graceful/Play/Ungraceful Choice |
| 3900 | Confirmation Dialog (cancel/ok) |
| 4420 | 3-line Info Dialog (done) |
| 4510 | Simple PICT-Dismiss |

### About / Settings
| View ID | Description |
|---------|-------------|
| 1040 | About Box |
| 1041 | About -- Credits Sub-Panel |
| 1042 | About -- Address Sub-Panel |
| 1043 | About -- Scenario Info Sub-Panel |
| 2000 | Keyboard Shortcuts |
| 2010 | Sound Volumes |

### Standalone Reusable Components
| View ID | Description |
|---------|-------------|
| 4401 | TPicCopyView (image display slot) |
| 4402 | TProdView (army icon control) |

---

## Other Resource Types in the Extracted Directory

### Binary Resources (top-level `.bin` files)

| Type | Count | IDs/Names | Description |
|------|-------|-----------|-------------|
| `aedt` | 1 | 400 | Apple Events editor resource |
| `alis` | 15 | 1000-1002, 2000, 3000-3008, 4000 | Alias records pointing to external data files (Terrain0-2, Armies AM, Cities sets, Shields AM) |
| `CARD` | 25 | K000-K008, L000-L008, W000-W008 | Card game data (3 suits x 9 cards) |
| `cctb` | 1 | 2000 | Control color table |
| `clut` | 3 | 1000, 1001, 1004 | Color lookup tables |
| `DAT` | 6 | 1000-1004, 1010-1011 | Custom data: STRING, ERROR, FILE, AREA, BUTTON, RANDOM |
| `DATA` | 1 | 0 | Application data resource |
| `DREL` | 1 | 0 | Data relation resource |
| `FOND` | 2 | 1602 (Illuria), 19999 (.MDEF Font) | Font family resources |
| `GFX` | 4 | 2000-2003 | Help graphics: HITEM, HKEYS, HMOUSE, HMOUSE2 |
| `hdlg` | 1 | 1000 | Help dialog template |
| `Head` | 26 | 1000-1025 | Music headers (RINT0-RINT23, RSTARTUP, RANIM) |
| `HLP` | 1 | 1000 | Help text (WARLORD2) |
| `hmnu` | 3 | 2-4 | Help menu balloon strings |
| `kind` | 1 | 128 | File type/kind info |
| `Last` | 1 | 1000 | Last-played save state reference |
| `NFNT` | 1 | 2816 | .MDEF Font bitmap data |
| `pltt` | 3 | 1000 (Main), 1001 (Masking), 1004 (B&W) | Palette resources |
| `Prfl` | 1 | 128 | Application profile |
| `Rgn` | 5 | 1000 (Big scroll), 1001 (Talking head), 2000-2002 | Region definitions for hit testing |
| `Roll` | 1 | 3020 (Player setup) | Roller control data |
| `SHLD` | 1 | 1000 (America Shields) | Shield graphics data |
| `Shor` | 1 | 2000 | Shortcut key definitions |
| `Soun` | 1 | 1000 (Sound preferences) | Sound configuration |
| `Tune` | 26 | 1000-1025 | MIDI/music tune data (RINT0-RINT23, RSTARTUP, RANIM) |
| `View` | 76 | 200-4600 | **MacApp View resources (this document)** |
| `War2` | 1 | 0 (Owner resource) | Game owner/registration resource |
| `wctb` | 1 | 1000 | Window color table |
| `ZERO` | 1 | 0 | Zero-filled placeholder |

### Audio Resources (`audio/` subdirectory)
36 sound effects in .wav, .mp3, and .m4a formats (108 files total):
- ARMY, ARMY2 -- Army movement sounds
- CHORD -- Musical chord
- DING -- Notification ding
- DRAMATIC -- Dramatic event music
- ORCH -- Orchestral fanfare
- SPLASH -- Water/splash sound
- Plus additional sound effects

### Graphics Resources (`graphics/` subdirectory)
720 files (706 BMP, 7 PNG, 7 PICT):
- `cicn` -- Color icons (game UI icons)
- `crsr` / `CURS` -- Cursors
- `ICN#` / `icl4` / `icl8` / `ics#` / `ics4` / `ics8` -- Icon suite resources
- `NFNT` -- Font glyph bitmaps
- `PICT` -- Picture resources (backgrounds, UI elements)
- `ppat` -- Pixel patterns
- `pltt` / `clut` / `cctb` / `wctb` -- Color/palette resources (exported as .act/.json/.bin)

### Icon Resources (`icons/` subdirectory)
10 `.icns` files -- macOS icon suite files

### Text Resources (`text/` subdirectory)
687 decoded text files covering:
- `STR#` (420) -- String lists (the bulk of game text)
- `seg!` (71) -- Code segment names
- `TxSt` (31) -- Text style definitions
- `DESC` (27) -- Resource descriptions
- `res!` (23) -- Resident resource info
- `DITL` (21) -- Dialog item lists
- `ALRT` (20) -- Alert templates
- `NAME` (18) -- Resource names
- `CMNU` (15) -- Command menus (File, Edit, Orders, Reports, Heroes, View, History, Game + popups)
- `FREF` (10) -- File reference entries
- `NFNT` (5) -- Font metric data
- `CODE` (3) -- Code resource info
- `WDEF` (3) -- Window definition functions
- `STR` (3) -- Single strings
- `WIND` (1) -- Window template
- `DLOG` (1) -- Dialog template
- `CNTL` (1) -- Control template
- `MBAR` (2) -- Menu bar definitions
- `MENU` (1) -- Menu resource
- `MDEF` (1) -- Menu definition function
- `vers` (1) -- Version info
- `SIZE` (1) -- Application size/memory info
- `BNDL` (1) -- Bundle resource
- `cfrg` (1) -- Code fragment configuration
- `acur` (1) -- Animated cursor
- `mem!` (2) -- Memory configuration
- `errs` (2) -- Error string lists

---

## Menu Structure (from CMNU resources)

| Menu ID | Title | Key Items |
|---------|-------|-----------|
| 1 | Apple | (System menu) |
| 2 | File | New, Open (Cmd+O), Close (Cmd+W), Save (Cmd+S), Save As, Revert, Quit (Cmd+Q) |
| 3 | Edit | Undo (Cmd+Z), Cut (Cmd+X), Copy (Cmd+C), Paste (Cmd+V), Clear, Select All |
| 4 | Orders | Group Stack (Cmd+G), Ungroup (Shift+Cmd+G), Move Group (Cmd+M), Move All (Shift+Cmd+M), Cancel Path, Next Group (Cmd+N), Leave Group (Cmd+L), Defend (;), Deselect, Show Army, Show Shadow, Fight Order, Disband, Change Signpost, Resign |
| 5 | Reports | Show Report (Cmd+R), Armies, Cities, Gold, Production, Winning, Diplomacy (Shift+Cmd+D), Quest (Shift+Cmd+Q) |
| 6 | Heroes | Inspect Heroes (Shift+Cmd+H), Plant Flag (Shift+Cmd+P), Hero Levels (Shift+Cmd+L), Search (Shift+Cmd+S) |
| 7 | View | Army Bonuses (Cmd+B), Items (Cmd+I), Build, Cities, Production (Cmd+P), Vectoring, Ruins (Shift+Cmd+R), Stack (Cmd+K) |
| 8 | History | Show History (Cmd+H), Cities, Gold, Winners, Events, Triumphs (Cmd+T) |
| 9 | Game | End Turn (Cmd+E), Save and End (Shift+Cmd+E), Strategy Map, Control Window, Info Window, Clean Up Windows, Game Settings, Sound Volumes, Shortcuts |
| 64-67 | Popups | Terrain Type, Army Set, City Set, Shield Set (used in random map dialog) |
| 128 | Buzzwords | (Hidden/debug menu) |
