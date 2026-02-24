⚠ Important Insight

You are not in a “1% done” state.

You are in:

“Compiler fingerprint understood, linker wall identified, scaling phase beginning.”

Once you clear:

All ≤32-byte functions

All non-TOC small logic

All pure control-flow functions

Progress will start accelerating.

Strategic Advice

Before touching large systems:

Finish all ≤32-byte.

Then clear 32–64 byte non-TOC functions.

Build a "CodeWarrior idiom cheat sheet":

When does CW emit mr?

When does CW use add vs addic?

Branch ordering quirks

Only then revisit TOC cluster.


------
Toolchain for matching recompilation (since it's classic Mac PPC):
Best match for 1993–1996 Mac games: Metrowerks CodeWarrior (but hard to get legally today).
Practical modern alternative: powerpc-apple-darwin-cross or devkitPPC's powerpc-eabi-gcc (very close ABI for 32-bit BE).
Install devkitPPC — it's free and works on Windows/Linux/macOS.
Basic compile test:textpowerpc-eabi-gcc -mcpu=601 -O2 -Wall -c some_decompiled.c -o obj.o
For Mac-specific: add -mstrict-align -mno-eabi etc. to mimic old CW behavior.

To get closer byte-matching: use -fPIC off, align functions to 4/16 bytes, experiment with -O levels.


```
powerpc-eabi-objdump -d original_binary > orig.dis
powerpc-eabi-objdump -d my_rebuilt.o > rebuilt.dis
diff orig.dis rebuilt.dis
```

tools we could use to get more detail
Radare2 / Cutter
RetDec
m2c
DeRez
https://boomerang.sourceforge.net/
