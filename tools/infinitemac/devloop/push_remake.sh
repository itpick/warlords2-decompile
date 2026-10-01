#!/bin/bash
# Rebuild the remake (optional), stage it next to the original game data, and push the
# folder into the RUNNING emulator (bridge.mjs) — no disk rebuild, no reboot.
#   push_remake.sh            # stage + push the current src/warlords2.pef build
#   push_remake.sh --build    # compile first (same steps as oracle/rebuild_remake.sh)
# In the Mac: The Outside World > Downloads > "WL2 Remake HHMMSS" > Warlords II.app
set -e
HERE="$(cd "$(dirname "$0")" && pwd)"
REPO="$(cd "$HERE/../../.." && pwd)"
TC=~/workspace/itpick/Retro68/build/toolchain
export PATH="$TC/bin:$PATH"
ORIG="$REPO/Warlords II"
APP="$REPO/src/Warlords II Remake"

if [ "$1" = "--build" ]; then
  cd "$REPO/src"
  make PLATFORM=powerpc >"$REPO/.devloop/build.log" 2>&1 || { grep -i "error:" "$REPO/.devloop/build.log" | head; exit 1; }
  MakePEF warlords2_ppc -o warlords2.pef >/dev/null
  # Fresh app file: PEF data fork + the ORIGINAL app's resources + our Rez overrides.
  rm -f "$APP"; cp warlords2.pef "$APP"
  cat "$ORIG/Warlords II.app/..namedfork/rsrc" > "$APP/..namedfork/rsrc"
  Rez -I "$TC/multiversal/RIncludes" warlords2.r -a -o "$APP" -t APPL -c War2
  echo "built $(date +%T)"
fi

# Unique name per push: extfs uploads don't overwrite, and a stale same-named item wins.
STAGE="$REPO/.devloop/stage/WL2 Remake $(date +%H%M%S)"
mkdir -p "$STAGE"
for i in Terrain Armies Cities Shields "Dragon Realms" "Erythea Campaign" \
         "Hadesha Campaign" "Isladia Campaign" "Isles of Sorcery" Tutoria; do
  ditto "$ORIG/$i" "$STAGE/$i"
done
ditto "$APP" "$STAGE/Warlords II.app"
"$HERE/wl.sh" push "$STAGE"
