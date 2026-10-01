import struct,sys
def names(path, rtype):
    d=open(path+'/..namedfork/rsrc','rb').read()
    doff,moff,dlen,mlen=struct.unpack('>IIII',d[:16]); m=d[moff:moff+mlen]
    tl_off,nl_off=struct.unpack('>HH',m[24:28]); tl=m[tl_off:]; n=struct.unpack('>H',tl[:2])[0]+1
    out=[]
    for i in range(n):
        t,cnt,ref=struct.unpack('>4sHH',tl[2+i*8:10+i*8])
        if t!=rtype: continue
        for j in range(cnt+1):
            rid,no,ao=struct.unpack('>hHI',tl[ref+j*12:ref+j*12+8])
            nm=b'' if no==0xffff else m[nl_off+no+1:nl_off+no+1+m[nl_off+no]]
            out.append((rid,nm))
    return out
