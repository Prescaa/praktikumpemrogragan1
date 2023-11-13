#include <stdio.h>
int main() {
    int angka;
    do {
        printf("Pilih Program :\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &angka);

        if (angka == 1) {
            float jumlah1, jumlah2;
            printf("Masukkan nilai pertama : ");
            scanf("%f", &jumlah1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &jumlah2);
            float hasil = jumlah1 + jumlah2;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", jumlah1, jumlah2, hasil);}
            
            else if (angka == 2) {
            float kurang1, kurang2;
            printf("Masukkan nilai pertama : ");
            scanf("%f", &kurang1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &kurang2);
            float hasil = kurang1 - kurang2;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", kurang1, kurang2, hasil);}

            else if (angka == 3) {
            float kali1, kali2;
            printf("Masukkan nilai pertama : ");
            scanf("%f", &kali1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &kali2);
            float hasil = kali1 * kali2;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", kali1, kali2, hasil);}
            
            else if (angka == 4) {
            float bagi1, bagi2;
            printf("Masukkan nilai pertama : ");
            scanf("%f", &bagi1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &bagi2);
            float hasil = bagi1 / bagi2;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", bagi1, bagi2, hasil);
            }
            else if (angka == 5) {
            printf("Terima kasih telah menggunakan kalkulator Rifky Putra Mahardika\n\n");}
            else {
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
    } while (angka != 5);

    return 0;
}