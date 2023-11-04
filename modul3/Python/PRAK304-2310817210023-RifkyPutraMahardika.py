nilai = int(input("Input : "))
if nilai == 0:
    print("Output : Nol")
elif nilai > 0 and nilai < 10:
    print("Output : Satuan")
elif nilai > 9 and nilai < 20:
    print("Output : Belasan")
elif nilai > 19 and nilai < 100:
    print("Output : Puluhan")
else:
    print("Output : Anda Menginput Melebihi Limit Bilangan")