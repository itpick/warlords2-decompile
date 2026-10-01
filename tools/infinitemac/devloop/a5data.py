import struct
BELOW=0x29ac8
def unpack(data):
    mem=bytearray(BELOW+0x20000); A5=BELOW    # index A5 == BELOW
    s=4
    for blk in range(3):
        off=struct.unpack('>i',data[s:s+4])[0]; s+=4; p=A5+off
        while True:
            c=data[s]; s+=1
            if c&0x80:
                n=(c&0x7f)+1; mem[p:p+n]=data[s:s+n]; s+=n; p+=n
            elif c&0x40: p+=(c&0x3f)+1
            elif c&0x20:
                n=(c&0x1f)+2; v=data[s]; s+=1; mem[p:p+n]=bytes([v])*n; p+=n
            elif c&0x10:
                n=(c&0xf)+1; mem[p:p+n]=b'\xff'*n; p+=n
            elif c==0: break
            elif c==1: p+=4; mem[p:p+2]=b'\xff\xff'; p+=2; mem[p:p+2]=data[s:s+2]; s+=2; p+=2
            elif c==2: p+=4; mem[p]=0xff; p+=1; mem[p:p+3]=data[s:s+3]; s+=3; p+=3
            elif c==3: mem[p:p+2]=b'\xa9\xf0'; p+=2; p+=2; mem[p:p+2]=data[s:s+2]; s+=2; p+=2; p+=1; mem[p]=data[s]; s+=1; p+=1
            elif c==4: mem[p:p+2]=b'\xa9\xf0'; p+=2; p+=1; mem[p:p+3]=data[s:s+3]; s+=3; p+=3; p+=1; mem[p]=data[s]; s+=1; p+=1
            else: raise ValueError(hex(c))
    return bytes(mem),A5
