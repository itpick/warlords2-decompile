#!/bin/bash
# Put the ORIGINAL emulator (bridge :3200) back at the scenario picker:
# quit the running game, then open Warlords II.app from the disk's game folder.
HERE="$(cd "$(dirname "$0")" && pwd)"
export WL_PORT="${WL_PORT:-3200}"
W="$HERE/wl.sh"
"$HERE/quit_game.sh" || exit 1
$W key Alt+Meta+w >/dev/null; sleep 1.2
$W click 600 680 >/dev/null; sleep 0.6        # focus the desktop (empty spot) for type-select
for name in "Warlords II" "Warlords II.app"; do
  $W type "$name" >/dev/null; sleep 0.7
  $W key Meta+o >/dev/null; sleep 2.5
done
sleep 14
$W shot "orig_launched_$(date +%H%M%S)"
