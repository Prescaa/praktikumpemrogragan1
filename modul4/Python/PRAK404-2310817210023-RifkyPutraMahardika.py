while True:
    print("Pilih Program :")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    
    angka = int(input("Masukkan Pilihan : "))

    if angka == 1:
        jumlah1 = float(input("Masukkan nilai pertama : "))
        jumlah2 = float(input("Masukkan nilai kedua : "))
        hasil = jumlah1 + jumlah2
        print(f"Hasil penjumlahan antara {jumlah1:.2f} dengan {jumlah2:.2f} adalah {hasil:.2f}\n")
    elif angka == 2:
        kurang1 = float(input("Masukkan nilai pertama : "))
        kurang2 = float(input("Masukkan nilai kedua : "))
        hasil = kurang1 - kurang2
        print(f"Hasil pengurangan antara {kurang1:.2f} dengan {kurang2:.2f} adalah {hasil:.2f}\n")
    elif angka == 3:
        kali1 = float(input("Masukkan nilai pertama : "))
        kali2 = float(input("Masukkan nilai kedua : "))
        hasil = kali1 * kali2
        print(f"Hasil perkalian antara {kali1:.2f} dengan {kali2:.2f} adalah {hasil:.2f}\n")
    elif angka == 4:
        bagi1 = float(input("Masukkan nilai pertama : "))
        bagi2 = float(input("Masukkan nilai kedua : "))
        hasil = bagi1 / bagi2
        print(f"Hasil pembagian antara {bagi1:.2f} dengan {bagi2:.2f} adalah {hasil:.2f}\n")
    elif angka == 5:
        print("Terima kasih telah menggunakan kalkulator Rifky Putra Mahardika\n")
        break
    else:
        print("Input anda salah, silahkan coba lagi\n")
