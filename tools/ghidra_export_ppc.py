#!/usr/bin/env python3
"""
Ghidra Headless Export - PPC PEF Decompilation
Runs Ghidra's analyzeHeadless on warlords2_ppc.pef and exports
decompiled C for every function into tools/ppc_decompiled/

Usage:
    python3 tools/ghidra_export_ppc.py

Requirements:
    source tools/setup_env.sh  (for analyzeHeadless in PATH)
"""

import os
import subprocess
import sys
import shutil

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_ROOT  = os.path.dirname(SCRIPT_DIR)

PEF_PATH        = os.path.join(SCRIPT_DIR, "ppc_verification", "warlords2_ppc.pef")
OUTPUT_DIR      = os.path.join(SCRIPT_DIR, "ppc_decompiled")
GHIDRA_SCRIPT   = os.path.join(SCRIPT_DIR, "ghidra_scripts", "ExportDecompiledC.py")
GHIDRA_PROJ_DIR = os.path.join(SCRIPT_DIR, "ghidra_projects")
GHIDRA_PROJ     = "warlords2_ppc"
ANALYZE_HEADLESS = shutil.which("analyzeHeadless") or \
    "/opt/homebrew/Cellar/ghidra/12.0.3/libexec/support/analyzeHeadless"

def main():
    if not os.path.exists(PEF_PATH):
        print(f"ERROR: PEF not found at {PEF_PATH}")
        sys.exit(1)

    if not os.path.exists(ANALYZE_HEADLESS):
        print(f"ERROR: analyzeHeadless not found. Run: source tools/setup_env.sh")
        sys.exit(1)

    os.makedirs(OUTPUT_DIR, exist_ok=True)
    os.makedirs(GHIDRA_PROJ_DIR, exist_ok=True)
    os.makedirs(os.path.dirname(GHIDRA_SCRIPT), exist_ok=True)

    # Write the Ghidra Jython export script if not present
    if not os.path.exists(GHIDRA_SCRIPT):
        _write_ghidra_script(GHIDRA_SCRIPT)

    print(f"Running Ghidra headless analysis on {os.path.basename(PEF_PATH)}...")
    print(f"Output -> {OUTPUT_DIR}/")
    print("This will take several minutes on first run (analysis).")
    print()

    env = os.environ.copy()
    env["WL2_OUTPUT_DIR"] = OUTPUT_DIR

    cmd = [
        ANALYZE_HEADLESS,
        GHIDRA_PROJ_DIR, GHIDRA_PROJ,
        "-import", PEF_PATH,
        "-overwrite",
        "-processor", "PowerPC:BE:32:default",
        "-loader", "PefLoader",
        "-postScript", GHIDRA_SCRIPT,
        "-scriptPath", os.path.dirname(GHIDRA_SCRIPT),
        "-log", os.path.join(SCRIPT_DIR, "ghidra_ppc.log"),
    ]

    result = subprocess.run(cmd, env=env)
    if result.returncode != 0:
        print(f"\nGhidra exited with code {result.returncode}. Check tools/ghidra_ppc.log")
        sys.exit(result.returncode)

    # Count output
    files = [f for f in os.listdir(OUTPUT_DIR) if f.endswith(".c")]
    print(f"\nDone. Exported {len(files)} decompiled C files to {OUTPUT_DIR}/")


def _write_ghidra_script(path):
    """Write the Ghidra Jython script that exports decompiled C per function."""
    os.makedirs(os.path.dirname(path), exist_ok=True)
    script = '''\
# ExportDecompiledC.py - Ghidra headless script
# Exports decompiled C for every function in the program.
# One file per ~1000 functions to keep file sizes manageable.
# Output directory set via WL2_OUTPUT_DIR environment variable.
#
# @category Warlords2

import os
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor

output_dir = os.environ.get("WL2_OUTPUT_DIR", "/tmp/wl2_ppc_decompiled")
if not os.path.exists(output_dir):
    os.makedirs(output_dir)

decomp = DecompInterface()
opts = DecompileOptions()
decomp.setOptions(opts)
decomp.openProgram(currentProgram)

monitor = ConsoleTaskMonitor()
functions = list(currentProgram.getFunctionManager().getFunctions(True))

CHUNK = 500
chunk_idx = 0
outfile = None
count = 0
errors = 0

for i, func in enumerate(functions):
    if i % CHUNK == 0:
        if outfile:
            outfile.close()
        chunk_idx = i // CHUNK
        fname = os.path.join(output_dir, "PPC_%04d.c" % chunk_idx)
        outfile = open(fname, "w")
        outfile.write("// Warlords II - Decompiled PPC Code\\n")
        outfile.write("// Chunk %d (functions %d-%d)\\n" % (chunk_idx, i, min(i+CHUNK-1, len(functions)-1)))
        outfile.write("// Decompiled by Ghidra %s\\n\\n" % getGhidraVersion())

    result = decomp.decompileFunction(func, 60, monitor)
    if result and result.decompiledFunction:
        src = result.decompiledFunction.getC()
        addr = func.getEntryPoint()
        outfile.write("// Function: %s at %s\\n" % (func.getName(), addr))
        outfile.write("// Size: %d bytes\\n" % func.getBody().getNumAddresses())
        outfile.write(src)
        outfile.write("\\n\\n")
        count += 1
    else:
        outfile.write("// Function: %s at %s -- decompile failed\\n\\n" % (func.getName(), func.getEntryPoint()))
        errors += 1

if outfile:
    outfile.close()

decomp.dispose()
print("Exported %d functions (%d errors) to %s" % (count, errors, output_dir))
'''
    with open(path, "w") as f:
        f.write(script)
    print(f"Wrote Ghidra script: {path}")


if __name__ == "__main__":
    main()
