import struct,sys
def resources(path):
    d=open(path+'/..namedfork/rsrc','rb').read()
    doff,moff,dlen,mlen=struct.unpack('>IIII',d[:16])
    m=d[moff:moff+mlen]
    tl_off,nl_off=struct.unpack('>HH',m[24:28])
    tl=m[tl_off:]; n=struct.unpack('>H',tl[:2])[0]+1
    out={}
    for i in range(n):
        t,cnt,ref=struct.unpack('>4sHH',tl[2+i*8:10+i*8])
        for j in range(cnt+1):
            rid,nameoff,attr_off=struct.unpack('>hHI',tl[ref+j*12:ref+j*12+8])
            off=attr_off&0xFFFFFF
            ln=struct.unpack('>I',d[doff+off:doff+off+4])[0]
            out[(t.decode('mac_roman'),rid)]=d[doff+off+4:doff+off+4+ln]
    return out
