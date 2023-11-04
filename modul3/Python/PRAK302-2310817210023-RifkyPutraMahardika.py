nilai = int(input("Nilai : "))
if nilai >= 80:
    print("Huruf : A")
elif nilai > 69 and nilai < 80:
    print("Huruf : B")
elif nilai > 59 and nilai < 70:
    print("Huruf : C")
elif nilai > 49 and nilai < 60:
    print("Huruf : D")
elif nilai < 50:
    print("Huruf : E")