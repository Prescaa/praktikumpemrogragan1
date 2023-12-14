n1, n2 = map(int, input("Input batas angka tiap baris:\n").split())

if n1 == n2:
    print("Masukkan angka :")
    angka = [list(map(int, input().split())) for i in range(2)]
    hasil = [angka[0][j] * angka[1][j] for j in range(n2)]

    print("Output:")
    print(*hasil)

elif n1 != n2:
    print("Output:")
    print("Jumlah tidak sama")