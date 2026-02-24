#!/bin/sh
# Warlords II Decompile - Tool Environment Setup
#
# Source this file to add all required tools to PATH:
#   source tools/setup_env.sh
#
# Tools:
#   Retro68 PPC compiler: powerpc-apple-macos-gcc  (for building)
#   m68k ELF compiler:    m68k-elf-gcc              (for 68k byte matching)
#   Ghidra headless:      analyzeHeadless            (for PPC decompilation)

RETRO68_BIN="/Users/lucaspick/workspace/itpick/Retro68/build/toolchain/bin"
M68K_BIN="/opt/homebrew/bin"
GHIDRA_BIN="/opt/homebrew/Cellar/ghidra/12.0.3/libexec/support"
JAVA_HOME_21="/opt/homebrew/Cellar/openjdk@21/21.0.10/libexec/openjdk.jdk/Contents/Home"

export PATH="$RETRO68_BIN:$M68K_BIN:$GHIDRA_BIN:$PATH"
export JAVA_HOME="$JAVA_HOME_21"

echo "Environment set:"
echo "  Retro68 PPC: $(which powerpc-apple-macos-gcc 2>/dev/null || echo 'NOT FOUND')"
echo "  m68k ELF:    $(which m68k-elf-gcc 2>/dev/null || echo 'NOT FOUND')"
echo "  Ghidra:      $(which analyzeHeadless 2>/dev/null || echo 'NOT FOUND')"
