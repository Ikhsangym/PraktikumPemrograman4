bil = int(input("Masukan nilai :"))
if bil >= 80:
    print("A")
if bil <= 79 and bil >= 70:
    print("B")
if bil <= 69 and bil >= 60:
    print("C")
if bil <= 59 and bil >= 50:
    print("D")
elif  bil < 50:
    print("E")