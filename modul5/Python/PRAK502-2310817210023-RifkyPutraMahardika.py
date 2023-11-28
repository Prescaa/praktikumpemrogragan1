def mutlak(angka):
    return abs(angka)
def hitung(nilai1, nilai2):
    return mutlak(nilai1 - nilai2)

a, c, b, d = map(int, input().split())
hasil = hitung(a, b) + hitung(c, d)
print(mutlak(hasil))