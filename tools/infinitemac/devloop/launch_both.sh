#!/bin/bash
# Launch the ORIGINAL (:3200) and the latest pushed REMAKE (:3201) from the Finder at
# the same moment and record both screens, to compare app start-up frame by frame.
#   launch_both.sh [seconds=30] [everyMs=400]
# Frames: .devloop/rec/launch_orig/ and .devloop/rec/launch_remake/
HERE="$(cd "$(dirname "$0")" && pwd)"
REPO="$(cd "$HERE/../../.." && pwd)"
SECS="${1:-30}"; EVERY="${2:-400}"
FOLDER=$(ls -t "$REPO/.devloop/stage" | head -1)       # newest pushed "WL2 Remake HHMMSS"

prep() {  # port, folder path to type-select, app name
  local port=$1; shift
  export WL_PORT=$port
  "$HERE/quit_game.sh" || exit 1
  "$HERE/wl.sh" key Alt+Meta+w >/dev/null; sleep 1.2
  "$HERE/wl.sh" click 600 680 >/dev/null; sleep 0.6
  local n=$#; local i=0
  for name in "$@"; do
    i=$((i+1))
    "$HERE/wl.sh" type "$name" >/dev/null; sleep 0.7
    [ $i -lt $n ] && { "$HERE/wl.sh" key Meta+o >/dev/null; sleep 2.5; }
  done
}
prep 3200 "Warlords II" "Warlords II.app" &
prep 3201 "The Outside World" "Downloads" "$FOLDER" "Warlords II.app" &
wait
# Go: open both apps at once and record.
curl -s "http://127.0.0.1:3200/key?k=Meta%2Bo" >/dev/null &
curl -s "http://127.0.0.1:3201/key?k=Meta%2Bo" >/dev/null &
wait
node "$HERE/record.mjs" 3200 launch_orig "$SECS" "$EVERY" &
node "$HERE/record.mjs" 3201 launch_remake "$SECS" "$EVERY" &
wait
