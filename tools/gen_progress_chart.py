#!/usr/bin/env python3
"""
gen_progress_chart.py — Generate docs/progress_chart.png
Shows estimated % of Warlords II PPC source reconstructed,
broken down by subsystem and status.

Run from repo root:
    python3 tools/gen_progress_chart.py
"""

import re
import glob
import os
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import matplotlib.patches as mpatches
import numpy as np

REPO_ROOT      = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FUNCTION_MAP   = os.path.join(REPO_ROOT, "src", "FUNCTION_MAP.txt")
PPC_DECOMPILED = os.path.join(REPO_ROOT, "tools", "ppc_decompiled")
OUTPUT         = os.path.join(REPO_ROOT, "docs", "progress_chart.png")
# Optional override file: one number on the first line = byte-verified count
VERIFIED_FILE  = os.path.join(REPO_ROOT, "tools", "byte_verified_count.txt")

# ── colours (GitHub dark/light friendly) ────────────────────────────────────
C_VERIFIED = "#56d364"   # bright green  (byte-verified identical)
C_DONE     = "#2ea043"   # green         (reconstructed, not yet byte-verified)
C_AGENT    = "#1f6feb"   # blue          (in-progress / agent)
C_STUB     = "#e3b341"   # amber         (stub)
C_TODO     = "#cf222e"   # red           (TODO)
C_UNMAPPED = "#30363d"   # dark grey

# ── 1. Count total PPC functions from Ghidra output ─────────────────────────
total_ppc = sum(
    open(f).read().count("// Function:")
    for f in glob.glob(os.path.join(PPC_DECOMPILED, "*.c"))
)

# Byte-verified count (updated manually as functions are confirmed identical)
byte_verified = 0
if os.path.exists(VERIFIED_FILE):
    try:
        byte_verified = int(open(VERIFIED_FILE).read().strip().splitlines()[0])
    except (ValueError, IndexError):
        pass

# ── 2. Parse FUNCTION_MAP per subsystem ─────────────────────────────────────
SUBSYSTEM_LABELS = {
    "AI System":                    "AI",
    "Framework / MacApp":           "Framework",
    "Economy comment-referenced":   "Economy",
    "Combat System":                "Combat",
    "Core Utilities":               "Core Utils",
    "Cross-module Utility":         "Utilities",
    "Rendering TVect Stubs":        "Rendering",
    "Sound TVect/MacApp Stubs":     "Sound",
    "TVect Trampolines":            "TVect",
    "TVect Memory Management":      "Memory",
    "Movement & Pathfinding":       "Movement",
    "Economy/Production/Heroes":    "Economy/Heroes",
    "Map Generator":                "Map Gen",
    "Serialization":                "Serialization",
}

sections = {}
current = None

with open(FUNCTION_MAP) as f:
    for line in f:
        m = re.match(r'^# ===== (.+?) \(', line)
        if m:
            name = m.group(1)
            label = next((v for k, v in SUBSYSTEM_LABELS.items() if k in name), name[:12])
            current = label
            sections.setdefault(current, {"DONE": 0, "AGENT": 0, "STUB": 0, "TODO": 0})
            continue
        if re.match(r'^#|^$', line):
            continue
        if current is None:
            continue
        parts = [p.strip() for p in line.split("|")]
        status = parts[4] if len(parts) > 4 else ""
        if "DONE" in status:
            sections[current]["DONE"] += 1
        elif "agent:" in status:
            sections[current]["AGENT"] += 1
        elif "STUB" in status:
            sections[current]["STUB"] += 1
        else:
            sections[current]["TODO"] += 1

# Merge tiny sections
merged = {}
for label, counts in sections.items():
    total = sum(counts.values())
    if total == 0:
        continue
    merged[label] = counts

totals = {k: sum(s[k] for s in merged.values()) for k in ("DONE", "AGENT", "STUB", "TODO")}
total_mapped     = sum(totals.values())
total_unmapped   = max(0, total_ppc - total_mapped)
# Byte-verified comes out of the DONE pool for display purposes
done_unverified  = max(0, totals["DONE"] - byte_verified)

pct_verified  = byte_verified   / total_ppc * 100
pct_done      = done_unverified / total_ppc * 100
pct_agent     = totals["AGENT"] / total_ppc * 100
pct_stub      = totals["STUB"]  / total_ppc * 100
pct_todo      = totals["TODO"]  / total_ppc * 100
pct_unmapped  = total_unmapped  / total_ppc * 100
pct_reconstructed = (totals["DONE"] + totals["AGENT"]) / total_ppc * 100

# ── 3. Plot ──────────────────────────────────────────────────────────────────
fig = plt.figure(figsize=(14, 8), facecolor="#0d1117")
fig.suptitle("Warlords II — Byte-for-Byte Replica Progress",
             color="white", fontsize=16, fontweight="bold", y=0.97)

gs = fig.add_gridspec(2, 2, hspace=0.45, wspace=0.35,
                      left=0.07, right=0.95, top=0.89, bottom=0.08)

ax_bar   = fig.add_subplot(gs[0, :])   # top: full-width stacked bar
ax_donut = fig.add_subplot(gs[1, 0])   # bottom-left: donut
ax_subs  = fig.add_subplot(gs[1, 1])   # bottom-right: subsystem bars

for ax in [ax_bar, ax_donut, ax_subs]:
    ax.set_facecolor("#161b22")
    for spine in ax.spines.values():
        spine.set_edgecolor("#30363d")

# ── 3a. Top: overall stacked bar ─────────────────────────────────────────────
bar_data = [
    (pct_verified, C_VERIFIED, f"Byte-Verified {byte_verified}"),
    (pct_done,     C_DONE,    f"Reconstructed {done_unverified}"),
    (pct_agent,    C_AGENT,   f"In Progress {totals['AGENT']}"),
    (pct_stub,     C_STUB,    f"Stub {totals['STUB']}"),
    (pct_todo,     C_TODO,    f"TODO {totals['TODO']}"),
    (pct_unmapped, C_UNMAPPED, f"Unmapped {total_unmapped}"),
]

left = 0
for pct, color, label in bar_data:
    if pct > 0:
        ax_bar.barh(0, pct, left=left, color=color, height=0.5)
        if pct > 3:
            ax_bar.text(left + pct / 2, 0, f"{pct:.1f}%",
                        ha="center", va="center", color="white",
                        fontsize=9, fontweight="bold")
        left += pct

ax_bar.set_xlim(0, 100)
ax_bar.set_ylim(-0.6, 0.6)
ax_bar.set_xlabel("% of total PPC functions", color="#8b949e", fontsize=9)
ax_bar.set_title(
    f"Byte-verified: {pct_verified:.1f}%  |  "
    f"Reconstructed: {pct_reconstructed:.1f}%  |  "
    f"{total_mapped}/{total_ppc} functions mapped",
    color="#c9d1d9", fontsize=11, pad=8)
ax_bar.set_yticks([])
ax_bar.tick_params(axis="x", colors="#8b949e")
ax_bar.xaxis.label.set_color("#8b949e")

legend_patches = [mpatches.Patch(color=c, label=l) for _, c, l in bar_data if _ > 0]
ax_bar.legend(handles=legend_patches, loc="lower right",
              facecolor="#161b22", edgecolor="#30363d",
              labelcolor="white", fontsize=8, ncol=2)

# ── 3b. Bottom-left: donut ────────────────────────────────────────────────────
donut_vals   = [byte_verified, done_unverified, totals["AGENT"], totals["STUB"], totals["TODO"], total_unmapped]
donut_colors = [C_VERIFIED, C_DONE, C_AGENT, C_STUB, C_TODO, C_UNMAPPED]
donut_labels = ["Byte-Verified", "Reconstructed", "Agent", "Stub", "TODO", "Unmapped"]
non_zero = [(v, c, l) for v, c, l in zip(donut_vals, donut_colors, donut_labels) if v > 0]
vals, cols, labs = zip(*non_zero)

wedges, _ = ax_donut.pie(
    vals, colors=cols, startangle=90,
    wedgeprops=dict(width=0.55, edgecolor="#0d1117", linewidth=1.5))

ax_donut.text(0, 0,
              f"{pct_verified:.1f}%\nverified",
              ha="center", va="center", color=C_VERIFIED,
              fontsize=13, fontweight="bold")
ax_donut.set_title("By count", color="#c9d1d9", fontsize=10, pad=6)
ax_donut.legend(wedges, labs, loc="lower center",
                facecolor="#161b22", edgecolor="#30363d",
                labelcolor="white", fontsize=8, ncol=3,
                bbox_to_anchor=(0.5, -0.12))

# ── 3c. Bottom-right: per-subsystem horizontal bars ──────────────────────────
sub_items = sorted(merged.items(), key=lambda x: -(x[1]["DONE"] + x[1]["AGENT"]))[:12]
sub_labels = [s for s, _ in sub_items]
sub_done   = [d["DONE"]  for _, d in sub_items]
sub_agent  = [d["AGENT"] for _, d in sub_items]
sub_stub   = [d["STUB"]  for _, d in sub_items]
sub_todo   = [d["TODO"]  for _, d in sub_items]

y = np.arange(len(sub_labels))
h = 0.55
ax_subs.barh(y, sub_done,  color=C_DONE,    height=h, label="Done")
ax_subs.barh(y, sub_agent, left=sub_done,   color=C_AGENT, height=h, label="Agent")
left_stub = [a + b for a, b in zip(sub_done, sub_agent)]
ax_subs.barh(y, sub_stub, left=left_stub,   color=C_STUB,  height=h)
left_todo = [a + b for a, b in zip(left_stub, sub_stub)]
ax_subs.barh(y, sub_todo, left=left_todo,   color=C_TODO,  height=h)

ax_subs.set_yticks(y)
ax_subs.set_yticklabels(sub_labels, color="#c9d1d9", fontsize=8)
ax_subs.set_xlabel("Function count", color="#8b949e", fontsize=9)
ax_subs.set_title("By subsystem (top 12)", color="#c9d1d9", fontsize=10, pad=6)
ax_subs.tick_params(axis="x", colors="#8b949e")
ax_subs.legend(facecolor="#161b22", edgecolor="#30363d",
               labelcolor="white", fontsize=8, loc="lower right")

os.makedirs(os.path.dirname(OUTPUT), exist_ok=True)
plt.savefig(OUTPUT, dpi=150, bbox_inches="tight", facecolor="#0d1117")
print(f"Saved: {OUTPUT}")
print(f"\nStats:")
print(f"  Total PPC functions  : {total_ppc}")
print(f"  Mapped (FUNCTION_MAP): {total_mapped}")
print(f"  Byte-Verified        : {byte_verified} ({pct_verified:.1f}%)")
print(f"  Reconstructed (DONE) : {totals['DONE']} ({(totals['DONE']/total_ppc*100):.1f}%)")
print(f"  In Progress (Agent)  : {totals['AGENT']} ({pct_agent:.1f}%)")
print(f"  Stub                 : {totals['STUB']} ({pct_stub:.1f}%)")
print(f"  TODO                 : {totals['TODO']} ({pct_todo:.1f}%)")
print(f"  Unmapped             : {total_unmapped} ({pct_unmapped:.1f}%)")
print(f"  Reconstructed total  : {pct_reconstructed:.1f}%")
print(f"\nTo increment byte-verified count, update tools/byte_verified_count.txt")
