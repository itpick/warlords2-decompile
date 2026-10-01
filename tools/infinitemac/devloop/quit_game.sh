#!/bin/bash
# Quit whatever game is frontmost on bridge $WL_PORT.
#   - Remake builds quit on Cmd-Option-Q from anywhere, even inside modal dialogs
#     (DevWaitNextEvent in src/main.c).
#   - Otherwise Cmd-Q (the original, or the remake at the map).
# Force Quit is deliberately not used: it crashed SheepShaver-wasm. If the game is
# still frontmost, say so and leave it to `wl.sh reload` (clean reboot).
HERE="$(cd "$(dirname "$0")" && pwd)"
W="$HERE/wl.sh"
[ "$($W front)" = "game" ] || exit 0
$W key Alt+Meta+q >/dev/null; sleep 4
[ "$($W front)" = "game" ] || exit 0
$W key Meta+q >/dev/null; sleep 5
[ "$($W front)" = "game" ] || exit 0
echo "could not quit the game (modal dialog?); use: WL_PORT=$WL_PORT $W reload"
exit 1
