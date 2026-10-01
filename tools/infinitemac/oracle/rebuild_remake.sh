#!/bin/bash
# Rebuild the remake end-to-end after editing src/: compile -> PEF -> app (orig resources)
# -> restage -> disk -> repackage into the "Warlords II Remake" slot. Then re-run compare.sh.
set -e
REPO=~/workspace/itpick/warlords2-decompile
export PATH="/Users/lucaspick/workspace/itpick/Retro68/build/toolchain/bin:$PATH"
RINCLUDES="/Users/lucaspick/workspace/itpick/Retro68/build/toolchain/multiversal/RIncludes"
ORIG_RSRC="/tmp/wl_full_game/Warlords II.app/..namedfork/rsrc"

cd "$REPO/src"
echo "compile..."
make PLATFORM=powerpc >/tmp/rmk.log 2>&1 || { echo "MAKE FAIL:"; grep -i "error:" /tmp/rmk.log | head; exit 1; }
MakePEF warlords2_ppc -o warlords2.pef >/dev/null 2>&1
rm -f "Warlords II Remake"; cp warlords2.pef "Warlords II Remake"
dd if="$ORIG_RSRC" of="Warlords II Remake/..namedfork/rsrc" bs=65536 2>/dev/null
Rez -I "$RINCLUDES" warlords2.r -a -o "Warlords II Remake" -t APPL -c War2
rm -f "/tmp/wl_remake_game/Warlords II.app"
ditto "Warlords II Remake" "/tmp/wl_remake_game/Warlords II.app"

cd "$REPO"
LAUNCHER="$PWD/tools/infinitemac/launcher/Warlords Launcher"
echo "disk + repackage..."
STRIP86=1 LAUNCHER_APP="$LAUNCHER" uv run --with machfs --with xattr \
  python tools/infinitemac/build_bootable.py /tmp/macos86.img /tmp/wl_remake_game /tmp/warlords_remake.hda 419430400 >/dev/null 2>&1
uv run --with machfs --with xattr python tools/infinitemac/repackage.py /tmp/warlords_remake.hda "Warlords II Remake" | tail -1
echo "remake rebuilt ✓"
