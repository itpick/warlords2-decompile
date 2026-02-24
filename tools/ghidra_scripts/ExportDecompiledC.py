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
        outfile.write("// Warlords II - Decompiled PPC Code\n")
        outfile.write("// Chunk %d (functions %d-%d)\n" % (chunk_idx, i, min(i+CHUNK-1, len(functions)-1)))
        outfile.write("// Decompiled by Ghidra %s\n\n" % getGhidraVersion())

    result = decomp.decompileFunction(func, 60, monitor)
    if result and result.decompiledFunction:
        src = result.decompiledFunction.getC()
        addr = func.getEntryPoint()
        outfile.write("// Function: %s at %s\n" % (func.getName(), addr))
        outfile.write("// Size: %d bytes\n" % func.getBody().getNumAddresses())
        outfile.write(src)
        outfile.write("\n\n")
        count += 1
    else:
        outfile.write("// Function: %s at %s -- decompile failed\n\n" % (func.getName(), func.getEntryPoint()))
        errors += 1

if outfile:
    outfile.close()

decomp.dispose()
print("Exported %d functions (%d errors) to %s" % (count, errors, output_dir))
