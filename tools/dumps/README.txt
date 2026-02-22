QEMU RAM Dumps - Warlords II (Mac OS 9, PPC)
==============================================

Captured 2026-02-19 from QEMU running Mac OS 9.2 with the original
Warlords II binary. These are full 512MB guest RAM snapshots.

Files (gitignored, stored locally only):

  ram.bin          512MB  14:58  RAM dump before entering gameplay
  ram_ingame.bin   512MB  15:19  RAM dump during active gameplay

The PPC code section was extracted from these dumps into:
  ../ppc_verification/wl2_code.bin  (1.1MB)

Base address mapping:
  Ghidra address 0x10000000 = file offset 0x00000000 in wl2_code.bin
  file_offset = ghidra_address - 0x10000000

To regenerate wl2_code.bin from a RAM dump, locate the PPC code
fragment in the dump (search for the PEF header or known instruction
sequences) and extract the code section.
