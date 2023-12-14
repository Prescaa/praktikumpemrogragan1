#include <stdio.h>

int main() {
    int i, j, n1, n2;
    int hasil[50];

    printf("Input batas angka tiap baris:\n");
    scanf("%d %d", &n1, &n2);
    int angka[n1][n2];

    if (n1 == n2) {
        printf("Masukkan angka :\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < n2; j++) {
                scanf("%d", &angka[i][j]);
                hasil[j] = angka[0][j]*angka[1][j];
            }
        }

        printf("Output :\n");
        for (j = 0; j < n2; j++) {
            printf("%d ", hasil[j]);
        }
    } else {
        printf("Output :\nJumlah tidak sama\n");
    }

return 0;
}