#!/usr/bin/env python3
"""Re-chunk /tmp/warlords_boot.hda into InfiniteMac's format, update the manifest,
and refresh prefetchChunks (all non-zero chunks) in disks.ts. Run after rebuilding the disk."""
import hashlib, os, json, re, sys
IM = "/Users/lucaspick/workspace/infinite-mac"
SRC = sys.argv[1] if len(sys.argv) > 1 else "/tmp/warlords_boot.hda"
DISK = sys.argv[2] if len(sys.argv) > 2 else "Warlords II"   # display name / dsk.json basename
CHUNK=256*1024; SALT=b"raw"; ZERO=b"\0"*CHUNK
data=open(SRC,"rb").read()
chunks=[]; uniq=0
for i in range(0,len(data),CHUNK):
    c=data[i:i+CHUNK]
    if len(c)<CHUNK: c=c+b"\0"*(CHUNK-len(c))
    if c==ZERO: chunks.append(""); continue
    sig=hashlib.blake2b(c,digest_size=16,salt=SALT).hexdigest()
    chunks.append(sig)
    p=os.path.join(IM,"Images/build",sig+".chunk")
    if not os.path.exists(p): open(p,"wb").write(c); uniq+=1
manifest={"name":DISK,"totalSize":len(data),"chunks":chunks,"chunkSize":CHUNK}
open(os.path.join(IM,"src/Data/%s.dsk.json"%DISK),"w").write(json.dumps(manifest))
nz=[i for i,c in enumerate(chunks) if c]
arr="["+", ".join(map(str,nz))+"]"
dp=os.path.join(IM,"src/defs/disks.ts"); s=open(dp).read()
s=re.sub(r"(displayName: \""+re.escape(DISK)+r"\",.*?prefetchChunks: )\[[^\]]*\]", r"\1"+arr, s, count=1, flags=re.S)
open(dp,"w").write(s)
print(f"repackaged '{DISK}': {len(chunks)} chunks, {len([c for c in chunks if c])} non-zero ({uniq} new), prefetch={len(nz)}")
