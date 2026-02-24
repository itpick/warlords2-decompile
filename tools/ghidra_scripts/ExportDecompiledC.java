// ExportDecompiledC.java - Ghidra headless script
// Exports decompiled C for every function in the program.
// One file per 500 functions. Output dir via WL2_OUTPUT_DIR env var.
//
// @category Warlords2

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.*;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.*;
import java.util.*;

public class ExportDecompiledC extends GhidraScript {

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("WL2_OUTPUT_DIR");
        if (outputDir == null) outputDir = "/tmp/wl2_ppc_decompiled";

        new File(outputDir).mkdirs();

        DecompInterface decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        FunctionIterator funcs = currentProgram.getFunctionManager().getFunctions(true);
        List<Function> funcList = new ArrayList<>();
        while (funcs.hasNext()) funcList.add(funcs.next());

        println("Exporting " + funcList.size() + " functions to " + outputDir);

        final int CHUNK = 500;
        PrintWriter out = null;
        int count = 0, errors = 0;

        for (int i = 0; i < funcList.size(); i++) {
            if (i % CHUNK == 0) {
                if (out != null) out.close();
                int chunk = i / CHUNK;
                String fname = outputDir + "/PPC_" + String.format("%04d", chunk) + ".c";
                out = new PrintWriter(new FileWriter(fname));
                out.println("// Warlords II - Decompiled PPC Code");
                out.println("// Chunk " + chunk + " (functions " + i + "-" + Math.min(i+CHUNK-1, funcList.size()-1) + ")");
                out.println("// Decompiled by Ghidra " + currentProgram.getMetadata().get("Created With Ghidra Version"));
                out.println();
            }

            Function func = funcList.get(i);
            DecompileResults result = decomp.decompileFunction(func, 60, new ConsoleTaskMonitor());
            out.println("// Function: " + func.getName() + " at " + func.getEntryPoint());
            out.println("// Size: " + func.getBody().getNumAddresses() + " bytes");
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                out.println(result.getDecompiledFunction().getC());
                count++;
            } else {
                out.println("// -- decompile failed --");
                errors++;
            }
            out.println();
        }

        if (out != null) out.close();
        decomp.dispose();
        println("Done: " + count + " ok, " + errors + " errors -> " + outputDir);
    }
}
