angka1, angka2 = map(int, input("Input : ").split())
Hasilperkalian = 0
print("Output : ")
for i in range(1, angka1+1):
    hasil = 0
    for j in range(i, 0, -1):
        hasil = hasil + (j * angka2)
        if j > 1:
            print(f"({j} * {angka2}) + ", end="")
        else:
            print(f"({j} * {angka2}) = {hasil}")
    Hasilperkalian = Hasilperkalian + hasil

print(Hasilperkalian)

