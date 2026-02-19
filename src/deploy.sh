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
        -Iinclude -DTARGET_OS_MAC=1 -DTARGET_CPU_PPC=1 \
        -o warlords2_ppc main.c -lInterfaceLib
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

echo "=== Deploying to SheepShaver ==="
ditto "Warlords II" "$DEST"

DATA=$(stat -f '%z' "$DEST")
RSRC=$(stat -f '%z' "$DEST/..namedfork/rsrc")
echo "Done: data=$DATA bytes, rsrc=$RSRC bytes"
