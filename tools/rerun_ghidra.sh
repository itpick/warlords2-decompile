#!/usr/bin/env bash
#
# rerun_ghidra.sh - Re-decompile Warlords II with annotations via Ghidra headless
#
# Creates a temp Ghidra project, imports the Warlords II PEF binary,
# runs ApplyAnnotations.java to rename functions/globals and decompile,
# then cleans up the temp project.
#
# Output: warlords2_decompiled_v2.c in the repo root
#
# Usage:
#   ./tools/rerun_ghidra.sh
#   ./tools/rerun_ghidra.sh /path/to/custom/output.c
#

set -euo pipefail

# -------------------------------------------------------------------
# Configuration
# -------------------------------------------------------------------
GHIDRA_HOME="/opt/homebrew/Cellar/ghidra/12.0.3/libexec"
ANALYZE_HEADLESS="${GHIDRA_HOME}/support/analyzeHeadless"
SCRIPT_DIR="${HOME}/ghidra_scripts"

REPO_ROOT="$(cd "$(dirname "$0")/.." && pwd)"
BINARY="${REPO_ROOT}/Warlords II/Warlords II.app"
OUTPUT="${1:-${REPO_ROOT}/warlords2_decompiled_v2.c}"

TEMP_PROJECT_DIR=$(mktemp -d "${TMPDIR:-/tmp}/ghidra_warlords2_XXXXXX")
PROJECT_NAME="Warlords2_Annotated"

# -------------------------------------------------------------------
# Validation
# -------------------------------------------------------------------
if [ ! -x "${ANALYZE_HEADLESS}" ]; then
    echo "ERROR: analyzeHeadless not found at ${ANALYZE_HEADLESS}"
    echo "       Check GHIDRA_HOME setting in this script."
    exit 1
fi

if [ ! -f "${BINARY}" ]; then
    echo "ERROR: Binary not found at: ${BINARY}"
    exit 1
fi

if [ ! -f "${SCRIPT_DIR}/ApplyAnnotations.java" ]; then
    echo "ERROR: ApplyAnnotations.java not found in ${SCRIPT_DIR}"
    exit 1
fi

# -------------------------------------------------------------------
# Cleanup handler
# -------------------------------------------------------------------
cleanup() {
    echo ""
    echo "Cleaning up temp project at ${TEMP_PROJECT_DIR} ..."
    rm -rf "${TEMP_PROJECT_DIR}"
    echo "Cleanup complete."
}
trap cleanup EXIT

# -------------------------------------------------------------------
# Run Ghidra headless analysis
# -------------------------------------------------------------------
echo "============================================================"
echo "  Warlords II - Ghidra Headless Re-Decompilation"
echo "============================================================"
echo ""
echo "Binary:     ${BINARY}"
echo "Output:     ${OUTPUT}"
echo "Temp dir:   ${TEMP_PROJECT_DIR}"
echo "Scripts:    ${SCRIPT_DIR}"
echo ""
echo "Step 1: Import binary and run auto-analysis ..."
echo "Step 2: Apply function/global annotations ..."
echo "Step 3: Decompile all functions to output file ..."
echo ""

# Ensure the output directory exists
mkdir -p "$(dirname "${OUTPUT}")"

# Run analyzeHeadless:
#   - Create project in temp dir
#   - Import the binary
#   - Run auto-analysis (Ghidra default analyzers)
#   - Run ApplyAnnotations.java as a postScript
#   - Pass output path via -scriptProperty
#
# The -processor and -loader flags help Ghidra correctly identify the PEF/PPC format.
# If Ghidra auto-detects the format, these may not be needed, but we include them
# as hints for reliability.
"${ANALYZE_HEADLESS}" \
    "${TEMP_PROJECT_DIR}" \
    "${PROJECT_NAME}" \
    -import "${BINARY}" \
    -scriptPath "${SCRIPT_DIR}" \
    -postScript ApplyAnnotations.java \
    -scriptProperty decompile.output "${OUTPUT}" \
    -scriptlog "${TEMP_PROJECT_DIR}/script.log" \
    -log "${TEMP_PROJECT_DIR}/ghidra.log" \
    -max-cpu 4 \
    -overwrite

EXIT_CODE=$?

echo ""
echo "============================================================"

if [ ${EXIT_CODE} -eq 0 ] && [ -f "${OUTPUT}" ]; then
    FILE_SIZE=$(wc -c < "${OUTPUT}" | tr -d ' ')
    FUNC_COUNT=$(grep -c "^// Function:" "${OUTPUT}" 2>/dev/null || echo "unknown")
    FAIL_COUNT=$(grep -c "^// FAILED" "${OUTPUT}" 2>/dev/null || echo "0")

    echo "  SUCCESS"
    echo ""
    echo "  Output:     ${OUTPUT}"
    echo "  File size:  ${FILE_SIZE} bytes"
    echo "  Functions:  ${FUNC_COUNT}"
    echo "  Failed:     ${FAIL_COUNT}"
else
    echo "  FAILED (exit code: ${EXIT_CODE})"
    echo ""
    echo "  Check logs at:"
    echo "    ${TEMP_PROJECT_DIR}/ghidra.log"
    echo "    ${TEMP_PROJECT_DIR}/script.log"
    echo ""
    echo "  Note: Temp directory will NOT be cleaned up on failure."
    trap - EXIT  # Cancel cleanup so user can inspect logs
    exit 1
fi

echo ""
echo "============================================================"
