#!/bin/bash
# The remake's automated tests.
#   tools/run_tests.sh              host tests: C rules (tests/host) + Python tools (tests/python)
#   tools/run_tests.sh --emulator   also the emulator tests (tests/emulator; needs the
#                                   devloop bridge on :3201, see tools/infinitemac/devloop)
#   tools/run_tests.sh --emulator-only
# Exit status is non-zero if any suite failed. A suite whose prerequisites are
# missing (Retro68 headers, the bridge) is reported as SKIP, not as a failure.
set -u
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
HOST=1; EMU=0
for a in "$@"; do
  case "$a" in
    --emulator) EMU=1 ;;
    --emulator-only) EMU=1; HOST=0 ;;
    -h|--help) sed -n 2,8p "$0"; exit 0 ;;
  esac
done
declare -a RESULTS; FAILED=0
record() {   # name status
  case "$2" in 0) RESULTS+=("PASS  $1") ;; 77) RESULTS+=("SKIP  $1") ;; *) RESULTS+=("FAIL  $1"); FAILED=1 ;; esac
}
pytest_cmd() {
  if python3 -c 'import pytest' 2>/dev/null; then echo "python3 -m pytest"
  elif command -v uv >/dev/null; then echo "uv run --quiet --with pytest python -m pytest"
  else echo ""; fi
}

if [ $HOST = 1 ]; then
  echo "=== host: C game rules (tests/host) ==="
  if make -s -C "$ROOT/tests/host" check-headers; then
    make -s -C "$ROOT/tests/host" run; record "host C rules" $?
  else record "host C rules" 77; fi
  echo; echo "=== host: Python tools (tests/python) ==="
  PT=$(pytest_cmd)
  if [ -n "$PT" ]; then (cd "$ROOT" && $PT -q tests/python); record "python tools" $?
  else echo "SKIP: pytest not available (pip install pytest, or install uv)"; record "python tools" 77; fi
fi
if [ $EMU = 1 ]; then
  echo; echo "=== emulator: floats' zoom boxes (tests/emulator) ==="
  if python3 -c 'import PIL' 2>/dev/null; then python3 "$ROOT/tests/emulator/test_floats.py"
  else uv run --quiet --with pillow python "$ROOT/tests/emulator/test_floats.py"; fi
  record "emulator floats" $?
fi
echo; echo "=== summary ==="; printf '%s\n' "${RESULTS[@]}"
exit $FAILED
