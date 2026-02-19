#
# Makefile - Warlords II Reconstructed Source
#
# Target: Classic Mac OS / PowerPC (Metrowerks CodeWarrior or Retro68)
#
# For cross-compilation on modern systems, use:
#   - Retro68 (https://github.com/autc04/Retro68) for 68k/PPC Mac OS targets
#   - Or build natively on a PowerPC Mac with CodeWarrior
#
# For development/testing on modern systems:
#   make PLATFORM=modern
#

PLATFORM ?= powerpc

# Source files organized by subsystem
CORE_SRCS    = core/globals.c core/utils.c
COMBAT_SRCS  = combat/combat.c
AI_SRCS      = ai/ai.c
MOVE_SRCS    = movement/movement.c
ECON_SRCS    = economy/economy.c
RENDER_SRCS  = rendering/rendering.c
SOUND_SRCS   = sound/sound.c
SERIAL_SRCS  = serialization/serialization.c
MAPGEN_SRCS  = mapgen/mapgen.c
FRAME_SRCS   = framework/framework.c
STUB_SRCS    = stubs/stubs.c stubs/globals_extra.c \
               stubs/reconstructed_1.c stubs/reconstructed_2.c \
               stubs/reconstructed_4.c stubs/reconstructed_5.c \
               stubs/reconstructed_named.c stubs/reconstructed_batch_a.c \
               stubs/reconstructed_batch_b.c stubs/reconstructed_batch_c.c \
               stubs/recovered_stubs.c \
               stubs/wave2_tvect.c stubs/wave2_game1.c \
               stubs/wave2_game2.c stubs/wave2_macapp1.c \
               stubs/wave2_macapp2.c stubs/wave2_macapp3.c \
               stubs/wave2_macapp4.c main.c

ALL_SRCS = $(CORE_SRCS) $(COMBAT_SRCS) $(AI_SRCS) $(MOVE_SRCS) \
           $(ECON_SRCS) $(RENDER_SRCS) $(SOUND_SRCS) $(SERIAL_SRCS) \
           $(MAPGEN_SRCS) $(FRAME_SRCS) $(STUB_SRCS)

INCLUDES = -Iinclude

# Suppress warnings that are correct on PPC32 but noisy on modern 64-bit.
# On PPC32: int = long = pointer = 4 bytes, so int-to-pointer casts are valid.
WARN_SUPPRESS_COMMON = -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast \
                       -Wno-incompatible-pointer-types -Wno-int-conversion \
                       -Wno-implicit-function-declaration

# Clang-only flags (not supported by GCC 12)
WARN_SUPPRESS_CLANG = -Wno-deprecated-non-prototype

ifeq ($(PLATFORM),powerpc)
    # PowerPC Mac OS target (Retro68 GCC 12.2.0)
    CC = powerpc-apple-macos-gcc
    CFLAGS = -O2 -Wall $(WARN_SUPPRESS_COMMON) $(INCLUDES) -DTARGET_OS_MAC=1 -DTARGET_CPU_PPC=1
    # Link against Mac OS shared libraries (InterfaceLib = Toolbox, MathLib = FPU)
    # Note: --whole-archive was removed because it drags in all of newlib/libgcc,
    # creating PEF imports (arc4random, getentropy, regcomp, etc.) that don't
    # exist in Mac OS 9, causing the PEF loader to fail at launch.
    LDFLAGS = -lInterfaceLib -lMathLib
    TARGET = warlords2_ppc
    MAKEPEF = MakePEF
else
    # Modern development/testing target (structural verification only)
    CC = cc
    CFLAGS = -O2 -Wall $(WARN_SUPPRESS_COMMON) $(WARN_SUPPRESS_CLANG) $(INCLUDES) -DMODERN_BUILD=1
    LDFLAGS = -lm
    TARGET = warlords2
endif

OBJS = $(ALL_SRCS:.c=.o)

all: $(TARGET)

# PEF conversion and app assembly (PPC only)
ifeq ($(PLATFORM),powerpc)
ORIGINAL_APP = ../Warlords\ II/Warlords\ II.app
PEF_TARGET = warlords2.pef
APP_TARGET = Warlords\ II

pef: $(TARGET)
	$(MAKEPEF) $(TARGET) -o $(PEF_TARGET)
	@echo "PEF binary created: $(PEF_TARGET)"
	@ls -la $(PEF_TARGET)

app: pef
	@echo "=== Assembling Mac OS application ==="
	cp $(PEF_TARGET) $(APP_TARGET)
	dd if=$(ORIGINAL_APP)/..namedfork/rsrc of=$(APP_TARGET)/..namedfork/rsrc bs=65536 2>/dev/null
	/usr/bin/xattr -wx com.apple.FinderInfo \
		"41 50 50 4C 57 61 72 32 21 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 00 00 00 00 00 00 00" \
		$(APP_TARGET) 2>/dev/null || true
	@echo "App assembled: $(APP_TARGET)"
	@echo "  Data fork (PEF): $$(stat -f%z $(APP_TARGET)) bytes"
	@echo "  Resource fork:   $$(stat -f%z $(APP_TARGET)/..namedfork/rsrc) bytes"
endif

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o "$@" $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) "$(TARGET)" warlords2.pef

# Count lines of reconstructed code
stats:
	@echo "=== Reconstructed Source Statistics ==="
	@wc -l $(ALL_SRCS) | tail -1
	@echo ""
	@echo "By subsystem:"
	@for f in $(ALL_SRCS); do \
		printf "  %-40s " $$f; \
		wc -l < $$f; \
	done

# List all TODO items (functions needing reconstruction)
todos:
	@grep -rn "TODO" $(ALL_SRCS) include/ || echo "No TODOs found"

.PHONY: all clean stats todos pef app
