#!/usr/bin/env python3
"""Package the original 'Warlords II' folder into a mountable Mac OS 9 HFS disk
image for InfiniteMac. Reads macOS resource forks (..namedfork/rsrc) and Finder
type/creator (com.apple.FinderInfo xattr), modeled on infinite-mac library.py."""
import os, sys, struct
import machfs
import xattr

SRC = sys.argv[1]               # path to 'Warlords II' folder
BARE = sys.argv[2]              # output bare HFS image
VOLNAME = "Warlords II"

def finder_info(path):
    try:
        fi = xattr.getxattr(path, "com.apple.FinderInfo")
        return fi[0:4], fi[4:8]   # type, creator
    except Exception:
        return None, None

def add_dir(container, dir_path):
    for name in sorted(os.listdir(dir_path)):
        if name.startswith("."):    # skip .DS_Store, ._*, .namedfork handled below
            continue
        if name in ("Icon\r", "Icon\x0d", "Icon"):  # classic custom-folder-icon file (crashes emu HFS driver)
            continue
        p = os.path.join(dir_path, name)
        if os.path.isdir(p):
            folder = machfs.Folder()
            container[name] = folder
            add_dir(folder, p)
        else:
            f = machfs.File()
            with open(p, "rb") as fh:
                f.data = fh.read()
            rk = os.path.join(p, "..namedfork", "rsrc")
            try:
                with open(rk, "rb") as fh:
                    f.rsrc = fh.read()
            except (FileNotFoundError, OSError):
                pass
            t, c = finder_info(p)
            if t and t != b"\x00\x00\x00\x00":
                f.type = t
            if c and c != b"\x00\x00\x00\x00":
                f.creator = c
            container[name] = f

vol = machfs.Volume()
vol.name = VOLNAME
top = machfs.Folder()
vol[VOLNAME] = top
add_dir(top, SRC)

# size: content + generous slack, rounded to 512
total = 0
for _p, f in vol.iter_paths():
    if isinstance(f, machfs.File):
        total += len(f.data) + len(f.rsrc)
size = max(64*1024*1024, ((total * 2) // (512*1024) + 8) * 512 * 1024)
print(f"content={total} bytes, volume size={size} bytes")
img = vol.write(size, align=512, desktopdb=True, bootable=False)
with open(BARE, "wb") as f:
    f.write(img)
print(f"wrote bare HFS image: {BARE} ({len(img)} bytes)")
