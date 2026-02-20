#!/bin/bash
# deploy.sh - Build, assemble, and deploy Warlords II to SheepShaver
# Usage: ./deploy.sh [solo]
#   solo = build only main.c (no game code), for quick testing

set -e

export PATH="/Users/lucaspick/workspace/itpick/Retro68/build/toolchain/bin:$PATH"
RINCLUDES="/Users/lucaspick/workspace/itpick/Retro68/build/toolchain/multiversal/RIncludes"
DEST="/Applications/MacOS9.sheepvm/unix/Warlords II/Warlords II"
ORIG_RSRC="../Warlords II/Warlords II.app/..namedfork/rsrc"

cd "$(dirname "$0")"

if [ "$1" = "solo" ]; then
    echo "=== Building solo (main.c only) ==="
    powerpc-apple-macos-gcc -O2 -Wall \
        -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast \
        -Wno-incompatible-pointer-types -Wno-int-conversion \
        -Wno-implicit-function-declaration \
        -Iinclude -DTARGET_OS_MAC=1 -DTARGET_CPU_PPC=1 -DSOLO_BUILD \
        -o warlords2_ppc main.c -lInterfaceLib -lQuickTimeLib
else
    echo "=== Building full ==="
    make clean >/dev/null 2>&1
    make PLATFORM=powerpc 2>&1 | tail -3
fi

echo "=== Converting to PEF ==="
MakePEF warlords2_ppc -o warlords2.pef
ls -la warlords2.pef

echo "=== Assembling app ==="
rm -f "Warlords II"
cp warlords2.pef "Warlords II"
dd if="$ORIG_RSRC" of="Warlords II/..namedfork/rsrc" bs=65536 2>/dev/null
Rez -I "$RINCLUDES" warlords2.r -a -o "Warlords II" -t APPL -c War2

echo "=== Shield resources ==="
echo "  Using built-in cicn 3020-3027 from original resource fork (skipping merge)"
# merge_shields.py rebuilds the entire resource fork which can corrupt cicn data.
# The built-in cicn 3020-3027 are already in the original fork (copied by dd).
# SHIELDS_RSRC="../Warlords II/Shields/Elemental Shields/..namedfork/rsrc"
# python3 merge_shields.py "$SHIELDS_RSRC" "Warlords II/..namedfork/rsrc"

echo "=== Deploying to SheepShaver ==="
ditto "Warlords II" "$DEST"

echo "=== Deploying asset folders (with resource forks) ==="
DEST_DIR="$(dirname "$DEST")"
ASSETS_SRC="../Warlords II"
for folder in Terrain Armies Cities Shields; do
    if [ -d "$ASSETS_SRC/$folder" ]; then
        ditto "$ASSETS_SRC/$folder" "$DEST_DIR/$folder"
        echo "  Deployed $folder/"
    fi
done

DATA=$(stat -f '%z' "$DEST")
RSRC=$(stat -f '%z' "$DEST/..namedfork/rsrc")
TERRAIN_RSRC=$(stat -f '%z' "$DEST_DIR/Terrain/Grasslands/..namedfork/rsrc" 2>/dev/null || echo "0")
echo "Done: data=$DATA bytes, rsrc=$RSRC bytes, terrain_rsrc=$TERRAIN_RSRC bytes"
