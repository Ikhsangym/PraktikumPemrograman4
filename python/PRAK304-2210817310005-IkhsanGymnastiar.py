bil = int(input("Masukan bilangan :"))
if bil == 0:
    print("Nol")
elif bil >= 1 and bil <= 9:
    print("Satuan")
elif bil >= 10 and bil <= 19:
    print("Belasan")
elif bil >= 20 and bil <= 99:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")