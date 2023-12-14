jumlah_ruangan = int(input("Input :\nMasukkan jumlah ruangan :\n"))
limit = list(map(int, input("Banyaknya zetsu putih yang dimasukkan setiap ruangan :\n").split()))

print("\nOutput :\nZetsu putih setelah membelah diri :")
hasil = 0
for i in range(jumlah_ruangan):
    hasil = (i + 1) * limit[i]
    print(hasil, end=" ")