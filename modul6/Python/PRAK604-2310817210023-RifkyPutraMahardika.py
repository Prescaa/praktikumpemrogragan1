baris1 = input("Input pesan:\n")
baris2 = input()

panjang1 = len(baris1)
panjang2 = len(baris2)

print("Output:")

if panjang1 != panjang2:
    print("Panjang kalimat berbeda, pesan palsu")

elif panjang1 == panjang2:
    bintang = 0
    pagar = 0
    for i in range(panjang1):
        if baris1[i] == ' ' and baris2[i] == ' ':
            print(" ", end="")
        elif baris1[i] == baris2[i]:
            print("*", end="")
            bintang += 1
        else:
            print("#", end="")
            pagar += 1

    print("\n* =", bintang)
    print("# =", pagar)

    if bintang > pagar:
        print("Pesan Asli")
    elif bintang < pagar:
        print("Pesan Palsu")
