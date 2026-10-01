#!/usr/bin/env python3
"""Build a self-booting Mac OS 8.1 + Warlords II disk that auto-launches the game.
Reads the System Folder from a reassembled Mac OS 8.1 HFS image, adds the curated
game stage, writes a bootable HFS volume with startapp = the game."""
import sys, os
import machfs, xattr

SRC_OS   = sys.argv[1]            # /tmp/macos81.img (reassembled Mac OS 8.1 HFS)
GAME_DIR = sys.argv[2]            # /tmp/wl_min (app + assets + scenario)
OUT      = sys.argv[3]            # /tmp/warlords_boot.hda
SIZE     = int(sys.argv[4]) if len(sys.argv) > 4 else 96*1024*1024
APPNAME  = "Warlords II.app"

def finfo(p):
    try:
        fi = xattr.getxattr(p, "com.apple.FinderInfo"); return fi[0:4], fi[4:8]
    except Exception: return None, None

def add_file(container, p, name):
    f = machfs.File()
    with open(p, "rb") as fh: f.data = fh.read()
    try:
        with open(os.path.join(p, "..namedfork", "rsrc"), "rb") as fh: f.rsrc = fh.read()
    except (FileNotFoundError, OSError): pass
    t, c = finfo(p)
    if t and t != b"\x00\x00\x00\x00": f.type = t
    if c and c != b"\x00\x00\x00\x00": f.creator = c
    container[name] = f

def add_dir(container, dpath):
    for name in sorted(os.listdir(dpath)):
        if name.startswith("."): continue
        p = os.path.join(dpath, name)
        if os.path.isdir(p):
            fold = machfs.Folder(); container[name] = fold; add_dir(fold, p)
        else:
            add_file(container, p, name)

print("reading Mac OS 8.1 image...")
v81 = machfs.Volume(); v81.read(open(SRC_OS, "rb").read())
sf = v81["System Folder"]

def size_of(folder):
    t=0
    for _,o in folder.items():
        t += (len(o.data)+len(o.rsrc)) if isinstance(o, machfs.File) else size_of(o)
    return t

# --- strip System Folder to a minimal bootable set (avoids the error-type-10
#     extension crash AND shrinks toward the 15-25MB target) ---
KEEP_FONTS = {"Chicago", "Geneva", "Charcoal", "Monaco"}
def strip_system_folder(sf):
    before = size_of(sf)
    # ENABLE disabled extensions/control panels: InfiniteMac ships 8.x with most of them OFF
    # (moved to "<name> (Disabled)" folders). Merge them back into the active folders so the
    # sound extensions + Sound control panel actually load. (QuickTime VR is dropped below.)
    DIS_MAP = {"Control Panels": "Control Panels", "Extensions": "Extensions",
               "Control Strip Modules": "Control Strip Modules", "System Extensions": "Extensions"}
    for base, target in DIS_MAP.items():
        dis = base + " (Disabled)"
        if dis in sf:
            if target not in sf: sf[target] = machfs.Folder()
            for nm in list(sf[dis].keys()):
                sf[target][nm] = sf[dis][nm]
            del sf[dis]
    # drop any leftover "(Disabled)" folders (e.g., Startup/Shutdown Items disabled = cruft)
    for k in [x for x in list(sf.keys()) if x.endswith("(Disabled)")]:
        del sf[k]
    # Drop whole folders not needed to boot (KEEP Extensions + Control Panels — they hold
    # AppearanceLib/Appearance Extension and other boot-critical shared libs).
    # KEEP "Control Strip Modules" — it has Sound Volume (volume control) + Monitor BitDepth (256-color switch)
    # KEEP "Apple Menu Items" (holds the Control Panels shortcut so the user can open Sound etc.)
    for drop in ["Launcher Items", "Internet Search Sites", "Help", "Application Support",
                 "Editors", "Favorites", "Internet Plug-ins", "ColorSync Profiles"]:
        if drop in sf: del sf[drop]
    # Drop QuickTime (its movie playback crashes SheepShaver-wasm; not needed — game sound is
    # via Sound Manager in the System). Keep everything else incl. Control Strip / Sound Volume.
    if "Extensions" in sf:
        ext = sf["Extensions"]
        DROP_EXT = {"QuickTime™ VR"}  # isolate: keep base QuickTime + Musical Instruments (sound), drop only VR
        for k in list(ext.keys()):
            if k in DROP_EXT: del ext[k]
    if "Fonts" in sf:
        fonts = sf["Fonts"]
        for fn in list(fonts.keys()):
            if fn not in KEEP_FONTS: del fonts[fn]
    # KEEP "Preferences" — holds Sound / Monitors&Sound prefs (system volume). Clearing it left
    # the volume unset so nothing played. Still clear Startup Items (stale "Infinite HD" alias).
    for fold in ["Text Encodings", "Scripting Additions", "Startup Items", "Shutdown Items"]:
        if fold in sf:
            f = sf[fold]
            for k in list(f.keys()): del f[k]
    print("  System Folder stripped: %.1f -> %.1f MB" % (before/1e6, size_of(sf)/1e6))
    return sf

def strip_86(sf):
    """Aggressive strip for Mac OS 8.6 that keeps the game + sound working.
    Removes by NAME so all shared libraries (*Lib) survive. Round 1 = clearly-safe big wins."""
    before = size_of(sf)
    # Clear startup/shutdown items (stale Infinite HD alias etc.)
    for fold in ["Startup Items", "Shutdown Items"]:
        if fold in sf:
            for k in list(sf[fold].keys()): del sf[fold][k]
    # Drop whole top-level folders the game never needs (no print/network/help/colorsync).
    DROP_TOP = ["Help", "ColorSync Profiles", "Internet Search Sites", "MS Preference Panels",
                "Scripting Additions", "Scripts", "Language & Region Support", "Application Support",
                "Favorites", "Launcher Items", "PrintMonitor Documents", "Contextual Menu Items",
                "Note Pad File", "Scrapbook File", "Stickies", "Text Encodings"]
    for d in DROP_TOP:
        if d in sf: del sf[d]
    # Drop ALL disabled folders (HFS truncates names to 31 chars, so "(Disabled)" may lose its
    # closing paren — match on "Disabled" instead).
    for k in [x for x in list(sf.keys()) if "Disabled" in x]:
        del sf[k]
    # Extensions: drop big unneeded ones by name; KEEP every *Lib + QuickTime base/PowerPlug + Appearance + sound.
    if "Extensions" in sf:
        ext = sf["Extensions"]
        # NOTE: KEEP "QuickTime™ Musical Instruments" — it's the General MIDI instrument set the
        # game's MIDI music plays through (QuickTime Music Architecture). Removing it = wrong/silent music.
        EXT_DROP = {"Voices", "QuickTime™ VR", "QuickDraw™ 3D", "QuickDraw™ 3D RAVE",
                    "QuickDraw™ 3D IR",
                    "Apple Guide", "MacinTalk Pro", "MacinTalk 3", "Speech Manager",
                    "ColorSync Extension", "CSW 6000 Series", "LaserWriter 8", "Color SW 1500",
                    "Color SW 2500", "Printer Share", "AppleScript", "OpenTpt Remote Access",
                    "Apple Enet", "EtherTalk Phase 2", "Find By Content", "FBC Indexing Scheduler",
                    "Network Setup Extension", "Web Sharing Extension", "URL Access",
                    "Apple Modem Tool", "Serial Tool", "Apple Built-in Ethernet"}
        for k in list(ext.keys()):
            if k in EXT_DROP: del ext[k]
    # Control Panels: keep only essentials.
    if "Control Panels" in sf:
        cp = sf["Control Panels"]
        CP_KEEP = {"Appearance", "Monitors & Sound", "Sound", "Date & Time", "General Controls",
                   "Keyboard", "Mouse", "Memory", "Startup Disk", "Extensions Manager"}
        for k in list(cp.keys()):
            if k not in CP_KEEP: del cp[k]
    # Apple Menu Items: drop the big bundled apps.
    if "Apple Menu Items" in sf:
        am = sf["Apple Menu Items"]
        AM_DROP = {"Apple System Profiler", "Sherlock", "Graphing Calculator", "Apple Video Player",
                   "AppleCD Audio Player", "Network Browser", "Remote Access Status", "Internet Access",
                   "Connect To", "Automated Tasks", "Recent Servers", "Apple DVD Player", "Stickies",
                   "Note Pad", "Scrapbook", "Key Caps", "Jigsaw Puzzle", "Calculator",
                   "Recent Applications", "Recent Documents", "Recent Servers", "Chooser"}
        for k in list(am.keys()):
            if k in AM_DROP: del am[k]
    # Fonts: keep only the basics.
    if "Fonts" in sf:
        fonts = sf["Fonts"]
        for fn in list(fonts.keys()):
            if fn not in KEEP_FONTS: del fonts[fn]
    # --- Round 2: bigger but still safe cuts ---
    # Preferences: drop the IE internet cache + network prefs (keep sound/date/appearance prefs).
    if "Preferences" in sf:
        pref = sf["Preferences"]
        PREF_DROP = {"MS Internet Cache", "Explorer", "SNMP Preferences", "Internet Preferences",
                     "Remote Access", "Location Manager Prefs", "Printing Prefs",
                     "Users & Groups Data File", "Apple Video Player Prefs",
                     "Stickies file", "Note Pad File", "Scrapbook File"}
        for k in list(pref.keys()):
            if k in PREF_DROP: del pref[k]
    # Appearance: drop desktop wallpaper + UI sound sets (keep Theme Files / active Platinum theme).
    if "Appearance" in sf:
        ap = sf["Appearance"]
        for k in ["Desktop Pictures", "Sound Sets"]:
            if k in ap: del ap[k]
    # Extensions round 2: networking (game is offline) + misc unneeded. KEEP Sound Manager, Color Picker, all *Lib, QuickTime base.
    if "Extensions" in sf:
        ext = sf["Extensions"]
        EXT_DROP2 = {"OpenTransportLib", "Open Transport Library", "Open Tpt AppleTalk Library",
                     "OpenTptSNMPLib", "Open Tpt Internet Library", "OpenTptInternetLib", "AppleShare",
                     "Internet Access", "NetSprocketLib", "Find", "SimpleText Guide",
                     "UDF Volume Access", "IrDALib", "Apple CMM 2", "Default Calibrator",
                     "QuickTime™ MPEG Extension", "SystemAV", "Time Synchronizer", "Foreign File Access",
                     # round 3 — squeeze non-essential extensions seen in the inventory
                     # (game is offline, English, no print). KEEP every *Lib shared library.
                     "Text Encoding Converter", "PrintingLib", "Indeo® Video", "Indeo Video",
                     "MS Font Embed Library (PPC)", "MS Font Embed Library", "File Sharing Extension",
                     "Location Manager Guide", "Demo drag/lock", "VT102 Tool", "Apple Photo Access"}
        for k in list(ext.keys()):
            if k in EXT_DROP2: del ext[k]
    print("  STRIP86: %.1f -> %.1f MB" % (before/1e6, size_of(sf)/1e6))
    return sf

if os.environ.get("STRIP86") == "1":
    si = sf.get("Startup Items")
    sf = strip_86(sf)
elif os.environ.get("STOCK") == "1":
    # STOCK mode: keep the ENTIRE System Folder as InfiniteMac ships it (nothing stripped,
    # nothing enabled/merged). Only remove the stale "Infinite HD" startup alias so it doesn't
    # error at boot. This is the "use exactly what works" baseline; strip later.
    si = sf.get("Startup Items")
    if si:
        for k in list(si.keys()):
            if "infinite" in k.lower():
                del si[k]
    print("  STOCK mode: full System Folder kept (%.1f MB)" % (size_of(sf)/1e6))
elif os.environ.get("STRIP", "1") == "1":
    sf = strip_system_folder(sf)

print("assembling bootable volume...")
vol = machfs.Volume(); vol.name = "Macintosh HD"
vol["System Folder"] = sf                      # reuse the System Folder tree (blessed via bootable=True)
# Put the game in Startup Items so Mac OS 8.1 auto-launches it on boot (boot-block startapp
# is ignored by OS 8). The app + its asset folders live together so the game finds its data.
LAUNCHER_APP = os.environ.get("LAUNCHER_APP")  # path to "Warlords Launcher" app
if LAUNCHER_APP:
    # Sound-safe auto-launch + desktop access: the "Warlords II" folder is placed on the DESKTOP
    # (invisible "Desktop Folder" at the volume root) so the user sees/relaunches it easily and it
    # does NOT launch during boot; a small launcher app in Startup Items waits for the system to
    # settle, primes the sound mixer, then launches the game (avoids the boot sound race).
    desktop = machfs.Folder(); vol["Desktop Folder"] = desktop
    game_folder = machfs.Folder(); desktop["Warlords II"] = game_folder
    add_dir(game_folder, GAME_DIR)
    add_file(sf["Startup Items"], LAUNCHER_APP, os.path.basename(LAUNCHER_APP))
    print("  LAUNCHER mode: game on Desktop, '%s' in Startup Items (delayed launch)" % os.path.basename(LAUNCHER_APP))
elif os.environ.get("NO_AUTOLAUNCH") == "1":
    # Game on disk at volume root (NOT Startup Items) so it does NOT launch during boot.
    game_folder = machfs.Folder(); vol["Warlords II"] = game_folder
    add_dir(game_folder, GAME_DIR)
    print("  NO_AUTOLAUNCH: game placed at volume root (manual launch)")
else:
    add_dir(sf["Startup Items"], GAME_DIR)

# size accounting
tot = sum(len(f.data)+len(f.rsrc) for _,f in vol.iter_paths() if isinstance(f, machfs.File))
print("content: %.1f MB, volume: %.1f MB" % (tot/1e6, SIZE/1e6))

img = vol.write(SIZE, align=512, desktopdb=True, bootable=True, startapp=None)
open(OUT, "wb").write(img)
print("wrote bootable disk:", OUT, "(%d bytes)" % len(img))
