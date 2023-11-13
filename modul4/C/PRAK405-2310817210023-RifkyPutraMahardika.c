#include <stdio.h>
int main() {
    int angka1, angka2;
    int Hasilperkalian = 0;
    printf("Input : ");
    scanf("%d %d", &angka1, &angka2);

    printf("Output :\n");
    for (int i = 1; i <= angka1; i++) {
        int hasil = 0;
        for (int j = i; j >= 1; j--) {
            hasil = hasil + (j * angka2);
            if (j > 1) {
                printf("(%d * %d) + ", j, angka2);
            } else {
                printf("(%d * %d) = %d\n", j, angka2, hasil);
            }
        }
        Hasilperkalian = Hasilperkalian + hasil;
    }
    printf("%d", Hasilperkalian);
    return 0;
}