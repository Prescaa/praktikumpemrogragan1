baris, kolom = map(int, input("Jumlah baris dan kolom :\n").split())
print("Input matriks :")
matriks = list(map(int, input().split()))

print("Output matriks :")
for i in range(baris):
    for j in range(kolom):
        print(matriks[i * kolom + j], end=" ")
    print()