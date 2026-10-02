import struct,sys
from PIL import Image
def unpack(b,i,n):
    out=bytearray()
    while len(out)<n:
        c=b[i]; i+=1
        if c<128: out+=b[i:i+c+1]; i+=c+1
        elif c>128: out+=bytes([b[i]])*(257-c); i+=1
    return bytes(out[:n]),i
def decode(p):
    ft,fl,fb,fr=struct.unpack('>4h',p[2:10])
    img=Image.new('RGB',(fr-fl,fb-ft),(255,0,255))
    i=10
    while True:
        i98=p.find(b'\x00\x98',i); i99=p.find(b'\x00\x99',i)
        cands=[x for x in (i98,i99) if x>=0]
        if not cands: break
        i=min(cands); op99=(i==i99)
        k=i+2; rbf=struct.unpack('>H',p[k:k+2])[0]
        if not rbf&0x8000: i+=2; continue
        rb=rbf&0x3fff; t,l,b_,r=struct.unpack('>4h',p[k+2:k+10])
        psize=struct.unpack('>H',p[k+2+8+18:k+2+8+20])[0]
        ct=k+2+8+36; seed,flags,size=struct.unpack('>IHH',p[ct:ct+8])
        if size>255: i+=2; continue
        pal=[(255,0,255)]*256
        for e in range(size+1):
            v,R,G,B=struct.unpack('>4H',p[ct+8+e*8:ct+16+e*8]); pal[(e if flags&0x8000 else v)&255]=(R>>8,G>>8,B>>8)
        j=ct+8+(size+1)*8
        st,sl,sb,sr=struct.unpack('>4h',p[j:j+8]); dt,dl,db,dr=struct.unpack('>4h',p[j+8:j+16]); j+=18
        if op99: j+=struct.unpack('>H',p[j:j+2])[0]   # PackBitsRgn: skip the mask region
        w,h=r-l,b_-t
        for y in range(h):
            if rb>250: n=struct.unpack('>H',p[j:j+2])[0]; j+=2
            else: n=p[j]; j+=1
            row,_=unpack(p,j,rb); j+=n
            for x in range(w):
                if psize==8: idx=row[x]
                elif psize==4: idx=(row[x>>1]>>(4 if x%2==0 else 0))&15
                else: idx=(row[x>>3]>>(7-x%8))&1
                X,Y=dl+x-fl,dt+y-ft
                if 0<=X<img.width and 0<=Y<img.height: img.putpixel((X,Y),pal[idx])
        i=j
    return img
if __name__=='__main__':
    sys.path.insert(0,'.devloop'); from rsrc import resources
    a=resources(sys.argv[1]); im=decode(a[('PICT',int(sys.argv[2]))]); im.save(sys.argv[3]); print(im.size)
