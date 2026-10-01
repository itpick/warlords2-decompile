#!/bin/bash
# Oracle compare: run one input script against the ORIGINAL and the REMAKE disks,
# then diff the captured frames. Both disks must be registered on the dev server (3127).
# Usage: tools/infinitemac/oracle/compare.sh [script.json]
set -e
cd "$(cd "$(dirname "$0")/../../.." && pwd)"   # repo root
SCRIPT="${1:-tools/infinitemac/oracle/scripts/boot.json}"
NAME="$(basename "$SCRIPT" .json)"
OUT="tools/infinitemac/oracle/out/$NAME"
rm -rf "$OUT"; mkdir -p "$OUT"

# Run both disks in PARALLEL (separate browser instances) so the comparison takes
# ~one boot instead of two.
echo "=== running ORIGINAL + REMAKE in parallel ==="
node tools/infinitemac/oracle/runner.mjs "Warlords II" "$OUT/original" "$SCRIPT" &
P1=$!
node tools/infinitemac/oracle/runner.mjs "Warlords II Remake" "$OUT/remake" "$SCRIPT" &
P2=$!
wait $P1 $P2
echo "=== DIFF ==="
uv run --with pillow python tools/infinitemac/oracle/diff.py "$OUT/original" "$OUT/remake" "$OUT/diff"
echo ""
echo "frames: $OUT/{original,remake}/  | heatmaps: $OUT/diff/"
