#!/bin/bash
set -e
STAGE="$1"; SIZE="${2:-64m}"; OUT="${3:-/tmp/warlords.hda}"
hdiutil detach "/Volumes/Warlords II" 2>/dev/null || true
rm -f /tmp/_wl.dmg "$OUT" /tmp/_wl.cdr
hdiutil create -size "$SIZE" -fs HFS+ -volname "Warlords II" -layout SPUD -type UDIF /tmp/_wl.dmg >/dev/null
hdiutil attach /tmp/_wl.dmg -nobrowse >/dev/null
ditto "$STAGE" "/Volumes/Warlords II"
# strip cruft that macOS injects
rm -f "/Volumes/Warlords II/.DS_Store"
hdiutil detach "/Volumes/Warlords II" >/dev/null
hdiutil convert /tmp/_wl.dmg -format UDTO -o /tmp/_wl >/dev/null
mv /tmp/_wl.cdr "$OUT"
echo "built $OUT ($(stat -f '%z' "$OUT") bytes)"
