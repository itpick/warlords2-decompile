#!/usr/bin/env python3
"""
map_easy_functions.py — Rank 68k AND PPC functions by ease of byte-verification.

Parses:
  tools/68k_binary/decompiled/CODE_*.c  (68k Ghidra output)
  tools/ppc_decompiled/PPC_*.c          (PPC Ghidra output)

Outputs:
  tools/easy_functions_68k.csv
  tools/easy_functions_ppc.csv

Run from repo root:
    python3 tools/map_easy_functions.py
"""

import re
import glob
import os
import csv

REPO_ROOT      = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DECOMPILED_68K = os.path.join(REPO_ROOT, "tools", "68k_binary", "decompiled")
DECOMPILED_PPC = os.path.join(REPO_ROOT, "tools", "ppc_decompiled")
OUT_68K        = os.path.join(REPO_ROOT, "tools", "easy_functions_68k.csv")
OUT_PPC        = os.path.join(REPO_ROOT, "tools", "easy_functions_ppc.csv")

func_re    = re.compile(r'^// Function: (\S+) at ([0-9a-f]+)')
size_re    = re.compile(r'^// Size: (\d+) bytes')
warning_re = re.compile(r'/\* WARNING')
call_re    = re.compile(r'\bfunc_0x[0-9a-fA-F]+\b|\bFUN_[0-9a-fA-F]+\b')
global_re  = re.compile(r'\b(DAT_|PTR_|g[A-Z])\w+')


def parse_decompiled_dir(glob_pattern, arch):
    functions = []
    for path in sorted(glob.glob(glob_pattern)):
        segment = os.path.basename(path).replace(".c", "")
        with open(path) as f:
            lines = f.readlines()

        i = 0
        while i < len(lines):
            m = func_re.match(lines[i])
            if not m:
                i += 1
                continue

            name   = m.group(1)
            offset = int(m.group(2), 16)
            i += 1

            size = None
            if i < len(lines):
                sm = size_re.match(lines[i])
                if sm:
                    size = int(sm.group(1))
                    i += 1

            if size is None or size < 2:
                continue

            body_lines = []
            while i < len(lines) and not func_re.match(lines[i]):
                body_lines.append(lines[i])
                i += 1

            body = "".join(body_lines)

            has_warnings = bool(warning_re.search(body))
            calls        = call_re.findall(body)
            has_globals  = bool(global_re.search(body))
            unique_calls = len(set(calls))
            score = (
                size
                + (100 if has_warnings else 0)
                + unique_calls * 5
                + (20 if has_globals else 0)
            )

            preview = ""
            for bl in body_lines:
                s = bl.strip()
                if s and not s.startswith("//") and not s.startswith("/*"):
                    preview = s[:80]
                    break

            functions.append({
                "arch":          arch,
                "segment":       segment,
                "name":          name,
                "offset_hex":    f"0x{offset:08x}",
                "size_bytes":    size,
                "has_warnings":  has_warnings,
                "unique_calls":  unique_calls,
                "has_globals":   has_globals,
                "score":         score,
                "preview":       preview,
            })

    functions.sort(key=lambda x: (x["score"], x["size_bytes"]))
    return functions


def print_stats(functions, arch, size_limit=50):
    clean = [f for f in functions if not f["has_warnings"]]
    print(f"\n{'='*60}")
    print(f"  {arch}  —  {len(functions)} functions total")
    print(f"{'='*60}")
    print(f"  Clean (no warnings): {len(clean)}")

    # Min instruction size differs: 68k=2 bytes, PPC=4 bytes
    min_sz = 4 if arch == "PPC" else 2
    print(f"\n  Size distribution (≤{size_limit} bytes, no warnings):")
    cum = 0
    for sz in sorted(set(f["size_bytes"] for f in clean if f["size_bytes"] <= size_limit)):
        cnt = sum(1 for f in clean if f["size_bytes"] == sz)
        cum += cnt
        print(f"    {sz:3d} bytes: {cnt:4d}  (cumulative: {cum})")

    thresholds = [20, 30, 50] if arch == "PPC" else [14, 20, 50]
    for t in thresholds:
        n = sum(1 for f in clean if f["size_bytes"] <= t)
        print(f"  Total ≤ {t:2d} bytes (clean): {n}")

    print(f"\n  Top 30 easiest ({arch}):")
    print(f"  {'#':>3}  {'Segment':<12} {'Name':<22} {'Sz':>4}  {'Calls':>5}  {'W':>1}  {'G':>1}  Score  Preview")
    print(f"  {'-'*105}")
    for idx, f in enumerate(functions[:30]):
        print(
            f"  {idx+1:>3}  {f['segment']:<12} {f['name']:<22} "
            f"{f['size_bytes']:>4}  {f['unique_calls']:>5}  "
            f"{'Y' if f['has_warnings'] else 'N'}  "
            f"{'Y' if f['has_globals'] else 'N'}  "
            f"{f['score']:>5}  {f['preview']}"
        )


def write_csv(functions, path):
    fields = ["arch","segment","name","offset_hex","size_bytes",
              "has_warnings","unique_calls","has_globals","score","preview"]
    with open(path, "w", newline="") as cf:
        w = csv.DictWriter(cf, fieldnames=fields)
        w.writeheader()
        w.writerows(functions)
    print(f"\n  CSV: {path}  ({len(functions)} rows)")


# ── Run ───────────────────────────────────────────────────────────────────────
funcs_68k = parse_decompiled_dir(
    os.path.join(DECOMPILED_68K, "CODE_*.c"), "68k")

funcs_ppc = parse_decompiled_dir(
    os.path.join(DECOMPILED_PPC, "PPC_*.c"), "PPC")

print_stats(funcs_68k, "68k", size_limit=50)
write_csv(funcs_68k, OUT_68K)

print_stats(funcs_ppc, "PPC", size_limit=60)
write_csv(funcs_ppc, OUT_PPC)

# Combined quick summary
total_easy_68k = sum(1 for f in funcs_68k if not f["has_warnings"] and f["size_bytes"] <= 20)
total_easy_ppc = sum(1 for f in funcs_ppc if not f["has_warnings"] and f["size_bytes"] <= 32)
print(f"\n{'='*60}")
print(f"  SUMMARY")
print(f"  68k: {total_easy_68k} functions ≤20 bytes, no warnings  → easiest targets")
print(f"  PPC: {total_easy_ppc} functions ≤32 bytes, no warnings  → easiest targets")
print(f"{'='*60}")
