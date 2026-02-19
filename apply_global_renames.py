#!/usr/bin/env python3
"""
apply_global_renames.py - Rename global variables throughout the Warlords II decompiled codebase.

For each rename:
1. Replace old names with new names (word-boundary regex) in all .c files in src/
   EXCEPT globals.c and globals_extra.c (where the actual definitions live).
2. Add a #define alias in wl2_globals.h (old raw name -> new human name)
   so that any un-replaced references (e.g. in globals_extra.c) still compile
   via the preprocessor.
   EXCEPTION: If the new name is already defined as a named global in
   globals_extra.c, we do NOT add a #define, because it would cause a
   duplicate symbol conflict.
"""

import os
import re
import sys

# ============================================================================
# Rename dictionary: old_name -> new_name
# ============================================================================
RENAMES = {
    # AI / Strategic Assessment
    "iRam10117474":    "gDiploThreatData",
    "iRam10117488":    "gPlayerIdleArmyCounts",
    "iRam1011748c":    "gPlayerTotalArmyCounts",
    "iRam10117490":    "gPlayerTerritoryCounts",
    "psRam10117484":   "gPrimaryThreatPlayer",
    "iRam101176e8":    "gCombatDisplayPieces",
    "psRam101176e4":   "gHeroCount",
    "psRam10115d34":   "gValidArmyStateList",
    "iRam10115ba4":    "gGroupFuncTable",
    "pcRam101174d0":   "gSelectionCount",
    "iRam101174f0":    "gSelectionArray",

    # Combat
    "iRam10115d28":    "gFrontLineLookup",

    # Movement / Pathfinding
    "puRam1011759c":   "gDistGridHandlePtr",
    "piRam101175a0":   "gCostMapPtr",
    "psRam101175a4":   "gZoCPenalty",
    "psRam101175a8":   "gSearchRadius",
    "psRam101175ac":   "gMaxSearchRange",
    "psRam101175b0":   "gLastArmyTypeForCostMap",
    "puRam101175b4":   "gCurrentPathFlags",
    "puRam10117710":   "gCurrentMoveMode",
    "psRam10115eb4":   "gAIModeFlag",
    "psRam10115eb8":   "gZoCMarkingFlag",
    "psRam10115ea4":   "gPathfindingInitialized",
    "psRam10115e2c":   "gAutoModeFlag",
    "iRam10115e84":    "gStdMoveCostTable",
    "iRam10115ed4":    "gFlyingMoveCostTable",
    "iRam10115ebc":    "gNeighborDYOffsets",
    "iRam10115ec0":    "gNeighborDXOffsets",
    "iRam10115ec4":    "gNeighborPatternTable",
    "iRam10115ea8":    "gTileWalkOffsets",
    "iRam10115eac":    "gZoCNeighborDYOffsets",
    "iRam10115eb0":    "gZoCNeighborDXOffsets",
    "piRam10117594":   "gDistGridHandle",
    "piRam10117590":   "gCostMapHandle",
    "puRam10117598":   "gDistGridDeref",
    "piRam10117588":   "gPathCacheHandle",
    "piRam1011758c":   "gPathCachePtr",

    # Rendering
    "iRam10115ee4":    "gSpriteTable",
    "psRam10115ee8":   "gSpriteCount",
    "uRam101176cc":    "gColorPalette",
    "iRam10117688":    "gMinimapGWorld",
    "iRam10115ff0":    "gBackBuffer",
    "piRam10115fe8":   "gScreenGWorld",
    "iRam10116004":    "gArrowDirTable",
    "iRam10116008":    "gArmyIconTable",
    "iRam10115fe4":    "gPlayerColorTable",
    "psRam10115fec":   "gScrollLockFlag",
    "psRam10115ff4":   "gViewportRect",
    "psRam10115ff8":   "gForceRedrawFlag",
    "puRam10115f04":   "gPatternDrawFlag",
    "piRam101163b0":   "gActiveView",
    "puRam10117660":   "gViewportOffset",
    "piRam10115cfc":   "gGWorldListPtr",
    "puRam101176dc":   "gMonoColorTable",

    # Sound / Music
    "piRam101165e8":   "gSndHandle",
    "piRam101165ec":   "gSndChannel",
    "piRam101165f0":   "gTunePlayer",
    "puRam101165f4":   "gTuneHeaderH",
    "puRam101165f8":   "gTuneDataH",
    "psRam10116600":   "gCurrentMusicID",
    "puRam10117738":   "gCombatSoundIDs",
    "uRam10116604":    "gSoundActive",
    "iRam1011788c":    "gSoundPrefs",

    # Serialization
    "piRam10115cf0":   "gCityOwnership",
    "puRam10115f7c":   "gProgressBar",
    "iRam10117604":    "gSCENInfo",

    # Map Generation
    "piRam101175f4":   "gMapGenConfig",
    "piRam101175f0":   "gMapGenData",

    # Framework / MacApp
    "piRam101169c4":   "gAppObject",
    "piRam10116208":   "gMainGameWindow",
    "piRam1011639c":   "gSidePanelWindow",
    "piRam10116200":   "gInfoWindow",
    "piRam10115fa4":   "gOverviewWindow",
    "iRam10117374":    "gFrameworkData",
    "psRam1011736c":   "gShortCounter",
    "iRam101176f0":    "gDisplayState",
    "psRam10116360":   "gUIShortGlobal",

    # Economy / Production
    "uRam101175d4":    "gItemNameBuffer",
    "piRam10115f0c":   "gUnitDataHandle",
    "iRam1011757c":    "gPerPlayerArmyCount",

    # Multi-module
    "piRam10116a48":   "gProgressView",
    "piRam101163ac":   "gActiveDocView",
    "piRam10116204":   "gMainDocView",
    "uRam101177f0":    "gProgressCounterBase",
    "pdRam10116790":   "gDoubleAccumulator",
    "iRam1011681c":    "gRenderingMiscData",
}

# New names that already have separate named definitions in globals_extra.c.
# For these, we must NOT add a #define because the raw definition (e.g.
# long iRam10115ee4 = 0;) would expand via the macro to create a duplicate
# symbol with the existing named definition (e.g. void *gSpriteTable = NULL;).
ALREADY_NAMED = {
    "gActiveView", "gBackBuffer", "gCityOwnership", "gColorPalette",
    "gCombatSoundIDs", "gCurrentMusicID", "gGWorldListPtr", "gMinimapGWorld",
    "gPatternDrawFlag", "gPerPlayerArmyCount", "gProgressBar", "gProgressView",
    "gSCENInfo", "gScreenGWorld", "gSndChannel", "gSndHandle", "gSoundActive",
    "gSoundPrefs", "gSpriteCount", "gSpriteTable", "gTuneDataH",
    "gTuneHeaderH", "gTunePlayer", "gViewportOffset", "gViewportRect",
}

# ============================================================================
# Paths
# ============================================================================
SRC_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), "src")
GLOBALS_H = os.path.join(SRC_DIR, "include", "wl2_globals.h")
GLOBALS_C = os.path.join(SRC_DIR, "core", "globals.c")
GLOBALS_EXTRA_C = os.path.join(SRC_DIR, "stubs", "globals_extra.c")

# Files where we should NOT do replacements (variable definitions live here)
SKIP_FILES = {
    os.path.normpath(GLOBALS_C),
    os.path.normpath(GLOBALS_EXTRA_C),
}


def collect_c_files(src_dir):
    """Collect all .c files under src/."""
    c_files = []
    for root, dirs, files in os.walk(src_dir):
        for f in files:
            if f.endswith(".c"):
                c_files.append(os.path.join(root, f))
    return sorted(c_files)


def read_file(path):
    with open(path, "r") as fh:
        return fh.read()


def write_file(path, content):
    with open(path, "w") as fh:
        fh.write(content)


def find_existing_defines(header_text):
    """Return set of #define names already present in wl2_globals.h."""
    existing = set()
    for m in re.finditer(r"^\s*#define\s+(\w+)", header_text, re.MULTILINE):
        existing.add(m.group(1))
    return existing


def add_defines_to_header(header_path, renames):
    """Add #define old_name new_name lines to wl2_globals.h.

    Skip renames where:
    - The old name already has a #define
    - The new name is in ALREADY_NAMED (would cause duplicate symbol)
    """
    text = read_file(header_path)
    existing = find_existing_defines(text)

    new_defines = []
    skipped_already_named = 0
    for old_name, new_name in sorted(renames.items()):
        if old_name in existing:
            continue
        if new_name in ALREADY_NAMED:
            skipped_already_named += 1
            continue
        new_defines.append(f"#define {old_name}    {new_name}")

    if skipped_already_named:
        print(f"  Skipped {skipped_already_named} defines (new name already has named definition)")

    if not new_defines:
        print(f"  All applicable #define aliases already exist in {header_path}")
        return 0

    # Insert before the final #endif
    marker = "#endif /* WL2_GLOBALS_H */"
    if marker not in text:
        marker = "#endif"
        idx = text.rfind(marker)
        if idx == -1:
            print(f"  ERROR: Cannot find #endif in {header_path}")
            return 0
        before = text[:idx]
        after = text[idx:]
    else:
        idx = text.index(marker)
        before = text[:idx]
        after = text[idx:]

    block = "\n/* ===== Renamed Global Aliases (old raw name -> new human name) ===== */\n"
    block += "/* These #define aliases allow code still using the raw Ghidra names\n"
    block += " * to compile after the rename. The actual variable definitions in\n"
    block += " * globals_extra.c keep their original names. */\n\n"
    for d in new_defines:
        block += d + "\n"
    block += "\n\n"

    new_text = before + block + after
    write_file(header_path, new_text)
    print(f"  Added {len(new_defines)} #define aliases to {header_path}")
    return len(new_defines)


def replace_in_file(filepath, renames):
    """Replace old names with new names using word-boundary regex."""
    text = read_file(filepath)
    original = text
    file_count = 0

    for old_name, new_name in renames.items():
        pattern = r"\b" + re.escape(old_name) + r"\b"
        new_text = re.sub(pattern, new_name, text)
        count = len(re.findall(pattern, text))
        if count > 0:
            file_count += count
            text = new_text

    if text != original:
        write_file(filepath, text)

    return file_count


def main():
    print("=" * 70)
    print("Warlords II Global Variable Rename Script")
    print("=" * 70)
    print()

    # Step 1: Add #define aliases to wl2_globals.h
    print("[Step 1] Adding #define aliases to wl2_globals.h...")
    n_defines = add_defines_to_header(GLOBALS_H, RENAMES)
    print()

    # Step 2: Replace old names in .c files
    print("[Step 2] Replacing old names in .c files...")
    c_files = collect_c_files(SRC_DIR)
    total_replacements = 0
    files_changed = 0

    for filepath in c_files:
        norm_path = os.path.normpath(filepath)
        if norm_path in SKIP_FILES:
            print(f"  SKIP (definition file): {os.path.relpath(filepath, SRC_DIR)}")
            continue

        count = replace_in_file(filepath, RENAMES)
        if count > 0:
            rel = os.path.relpath(filepath, SRC_DIR)
            print(f"  {rel}: {count} replacements")
            total_replacements += count
            files_changed += 1

    print()
    print("=" * 70)
    print(f"SUMMARY")
    print(f"  #define aliases added to wl2_globals.h: {n_defines}")
    print(f"  .c files modified: {files_changed}")
    print(f"  Total text replacements: {total_replacements}")
    print(f"  Renames defined: {len(RENAMES)}")
    print("=" * 70)


if __name__ == "__main__":
    main()
