def MaxBilangan(a,b,c,d):
    nilaimax1 = max(a,b)
    nilaimax2 = max(c,d)
    return max(nilaimax1,nilaimax2)

a,b,c,d = map(int, input().split())
hasil = MaxBilangan(a,b,c,d)
print(hasil)