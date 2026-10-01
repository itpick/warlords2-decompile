#!/bin/bash
# CLI for the dev-loop bridge (bridge.mjs must be running).
#   wl.sh status | shot [name] | click X Y | dbl X Y | drag X1 Y1 X2 Y2 | key K | type TEXT
#        push PATH | pulled | reload [DISK] | quit
B="http://127.0.0.1:${WL_PORT:-3200}"
enc() { python3 -c 'import sys,urllib.parse;print(urllib.parse.quote(sys.argv[1]))' "$1"; }
cmd="$1"; shift
case "$cmd" in
  status|pulled|quit|front) curl -s "$B/$cmd" ;;
  shot)   curl -s "$B/shot?name=$(enc "${1:-shot_$(date +%H%M%S)}")" ;;
  click)  curl -s "$B/click?x=$1&y=$2" ;;
  dbl)    curl -s "$B/click?x=$1&y=$2&dbl=1" ;;
  move)   curl -s "$B/move?x=$1&y=$2" ;;
  drag)   curl -s "$B/drag?x1=$1&y1=$2&x2=$3&y2=$4" ;;
  key)    curl -s "$B/key?k=$(enc "$1")" ;;
  type)   curl -s "$B/type?t=$(enc "$1")" ;;
  push)   curl -s "$B/push?path=$(enc "$(cd "$(dirname "$1")" && pwd)/$(basename "$1")")" ;;
  reload) curl -s "$B/reload${1:+?disk=$(enc "$1")}" ;;
  *) sed -n 2,4p "$0"; exit 1 ;;
esac
