def Biodata(tahun, Nama, Asal):
    tahun_sekarang = 2023
    print("Perkenalkan Nama Saya : ", Nama)
    umur = tahun_sekarang-tahun
    print("Umur saya : ", umur)
    print("Saya Adalah Angkatan : ", tahun_sekarang)
    print("Asal Saya dari : ", Asal)

tahunLahir = int(input())
Namaku = input()
Asal = input()

Biodata(tahunLahir, Namaku, Asal)