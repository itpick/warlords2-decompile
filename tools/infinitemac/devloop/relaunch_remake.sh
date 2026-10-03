#!/bin/bash
# One-shot iteration on the REMAKE emulator (bridge on :3201 by default):
#   build -> push -> quit whatever app is frontmost -> open the new build from
#   The Outside World:Downloads via Finder type-select (no clicks, no reboot).
#   relaunch_remake.sh [--no-build]
set -e
HERE="$(cd "$(dirname "$0")" && pwd)"
export WL_PORT="${WL_PORT:-3201}"
W="$HERE/wl.sh"

if [ "$1" = "--no-build" ]; then OUT=$("$HERE/push_remake.sh"); else OUT=$("$HERE/push_remake.sh" --build); fi
echo "$OUT"
FOLDER=$(echo "$OUT" | tail -1)          # "WL2 Remake HHMMSS"
case "$FOLDER" in "WL2 Remake "*) ;; *) echo "push failed"; exit 1;; esac

# Quit the running game (original or a previous remake); Finder ignores Cmd-Q.
"$HERE/quit_game.sh" || exit 1
# Close every Finder window so type-select acts on desktop icons.
$W key Alt+Meta+w >/dev/null; sleep 1.2
$W click 600 680 >/dev/null; sleep 0.6        # focus the desktop (empty spot) for type-select
for name in "The Outside World" "Downloads" "$FOLDER" "Warlords II.app"; do
  $W type "$name" >/dev/null; sleep 0.7
  $W key Meta+o >/dev/null; sleep 2.5
done
sleep 14
$W shot "launched_$(date +%H%M%S)"
