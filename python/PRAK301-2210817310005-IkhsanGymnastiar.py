aa = int(input("Masukkan nilai pertama : "))
bb = int(input("Masukkan nilai kedua : "))
cc = int(input("Masukkan nilai ketiga : "))
if aa>bb and aa>cc:
        if bb>cc:
            print(cc, bb, aa)
        else:
            print(bb, cc, aa)
elif bb>aa and bb>cc:
        if aa>cc:
            print(cc, aa, bb)
        else:
            print(aa, cc, bb)
else:
        if aa>bb:
            print(bb, aa, cc)
        else:
            print(aa, bb, cc)