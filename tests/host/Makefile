# Host unit tests for the game rules in src/main.c.
#
#   make -C tests/host          build and run
#   make -C tests/host run T=dice   only tests whose name contains "dice"
#   make -C tests/host SAN=1    with AddressSanitizer + UBSan
#
# The whole of src/main.c is compiled with the host compiler against
# Retro68's multiversal Mac headers (declarations only), so a test can call
# the remake's own static functions.  toolbox_shim.c implements the Toolbox
# calls the rules need (Random, the Memory Manager); every other import gets
# a generated no-op stub.  Compile flags mirror the PPC target where it
# matters: char is unsigned (PPC GCC), signed overflow wraps.

ROOT       := $(abspath ../..)
RETRO68    ?= $(abspath $(ROOT)/../Retro68)
MULTIVERSAL ?= $(RETRO68)/build/toolchain/multiversal/CIncludes
OUT        := $(ROOT)/tests/host/build

CC      ?= cc
CFLAGS  := -std=gnu99 -O0 -g -funsigned-char -fwrapv -fno-strict-aliasing \
           -w -Wno-error=implicit-function-declaration -Wno-error=int-conversion \
           -Wno-error=incompatible-pointer-types \
           -I$(ROOT)/src/include -I$(MULTIVERSAL) \
           -DTARGET_OS_MAC=1 -DTARGET_CPU_PPC=1 -DSOLO_BUILD -DWL2_HOST_TEST
ifeq ($(SAN),1)
CFLAGS  += -fsanitize=address,undefined -fno-omit-frame-pointer
LDFLAGS += -fsanitize=address,undefined
endif

TEST_SRCS := $(wildcard $(ROOT)/tests/host/t_*.c)
BIN       := $(OUT)/wl2_host_tests

all: run

check-headers:
	@test -f $(MULTIVERSAL)/Multiverse.h || { \
	  echo "SKIP: Retro68 multiversal headers not found at $(MULTIVERSAL)"; \
	  echo "      (set RETRO68=/path/to/Retro68 or MULTIVERSAL=.../CIncludes)"; exit 77; }

$(OUT):
	mkdir -p $(OUT)

$(OUT)/test_main.o: test_main.c wl2test.h $(TEST_SRCS) $(ROOT)/src/main.c | $(OUT) check-headers
	$(CC) $(CFLAGS) -c test_main.c -o $@

$(OUT)/toolbox_shim.o: toolbox_shim.c | $(OUT) check-headers
	$(CC) $(CFLAGS) -c toolbox_shim.c -o $@

# Link once without stubs to learn what is unresolved, generate the stubs,
# then link for real.
$(OUT)/stubs_auto.c: $(OUT)/test_main.o $(OUT)/toolbox_shim.o gen_stubs.py
	-@$(CC) $(LDFLAGS) $(OUT)/test_main.o $(OUT)/toolbox_shim.o -o $(OUT)/probe > $(OUT)/link_errors.txt 2>&1
	python3 gen_stubs.py $(OUT)/link_errors.txt > $@

$(OUT)/stubs_auto.o: $(OUT)/stubs_auto.c
	$(CC) -w -c $< -o $@

$(BIN): $(OUT)/test_main.o $(OUT)/toolbox_shim.o $(OUT)/stubs_auto.o
	$(CC) $(LDFLAGS) $^ -o $@

build: $(BIN)

run: $(BIN)
	$(BIN) $(T)

clean:
	rm -rf $(OUT)

.PHONY: all build run clean check-headers
