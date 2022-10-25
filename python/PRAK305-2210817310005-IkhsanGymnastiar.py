import math
bil = float(input("Masukan detik :"))
hari = bil / 86400
hasilsisa1  = bil % 86400
jam =  hasilsisa1 / 3600
hasilsisa2  = bil % 3600
menit =  hasilsisa2 / 60
detik = bil % 60
if bil >=0 and bil <= 59:
    print("00:00:", math.floor(bil))
elif bil >= 60 and bil <= 3599:
    print("00:{:.0f}:{:.0f}".format(math.floor(menit), math.floor(detik)))
elif bil >= 3600 and bil <= 86399:
    print("{:.0f}:{:.0f}:{:.0f}".format(math.floor(jam), math.floor(menit), math.floor(detik)))
else:
    print("{:.0f} hari {:.0f}:{:.0f}:{:.0f}".format(math.floor(hari), math.floor(jam), math.floor(menit), math.floor(detik)))