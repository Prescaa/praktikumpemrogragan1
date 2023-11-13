angka, simbol = input("Input :\n").split()
angka = int(angka)
print("Output :")
for i in range(1, 51):
    if i % angka == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")
