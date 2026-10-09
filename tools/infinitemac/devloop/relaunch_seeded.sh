#!/bin/bash
# Same-seed pair for D15/D16: the ORIGINAL (bridge :3200) and the REMAKE (:3201)
# both launched with QuickDraw randSeed = SEED, at the scenario picker.
#   relaunch_seeded.sh SEED            (decimal or 0x...)
# Original: tools/patch_orig_seed.py pins FUN_1005f32c's GetDateTime seed in a
# copy of the app, staged with the game data and pushed like a remake build.
# Remake: make PLATFORM=powerpc FIXED_SEED=SEED (main.c's WL2_FIXED_SEED).
# Then drive both with compare.mjs scripts and diff screenshots per round.
set -e
SEED="${1:?usage: relaunch_seeded.sh SEED}"
HERE="$(cd "$(dirname "$0")" && pwd)"
REPO="$(cd "$HERE/../../.." && pwd)"
ORIG="$REPO/Warlords II"

launch() {   # port folder
  local W="$HERE/wl.sh"
  WL_PORT=$1 "$HERE/quit_game.sh" || { echo "port $1: could not quit; WL_PORT=$1 $W reload"; return 1; }
  WL_PORT=$1 $W key Alt+Meta+w >/dev/null; sleep 1.2
  WL_PORT=$1 $W click 600 680 >/dev/null; sleep 0.6
  for name in "The Outside World" "Downloads" "$2" "Warlords II.app"; do
    WL_PORT=$1 $W type "$name" >/dev/null; sleep 0.7
    WL_PORT=$1 $W key Meta+o >/dev/null; sleep 2.5
  done
}

# remake: force a rebuild of main.o with the seed
touch "$REPO/src/main.c"
OUT=$(FIXED_SEED="$SEED" WL_PORT=3201 "$HERE/push_remake.sh" --build)
RFOLDER=$(echo "$OUT" | tail -1)
touch "$REPO/src/main.c"          # the next normal build drops the seed again

# original: patched copy, staged like push_remake.sh does
STAGE="$REPO/.devloop/stage/WL2 Orig seed $(date +%H%M%S)"
mkdir -p "$STAGE"
for i in Terrain Armies Cities Shields "Dragon Realms" "Erythea Campaign" \
         "Hadesha Campaign" "Isladia Campaign" "Isles of Sorcery" Tutoria; do
  ditto "$ORIG/$i" "$STAGE/$i"
done
python3 "$REPO/tools/patch_orig_seed.py" "$SEED" "$ORIG/Warlords II.app" "$STAGE/Warlords II.app"
WL_PORT=3200 "$HERE/wl.sh" push "$STAGE"
OFOLDER="$(basename "$STAGE")"

launch 3201 "$RFOLDER" &
launch 3200 "$OFOLDER" &
wait
sleep 14
WL_PORT=3200 "$HERE/wl.sh" shot "seeded_orig_$SEED"
WL_PORT=3201 "$HERE/wl.sh" shot "seeded_remake_$SEED"
