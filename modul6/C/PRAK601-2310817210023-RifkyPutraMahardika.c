#include<stdio.h>

int main(){
    int i, j, baris, kolom;
    printf("Jumlah baris dan kolom :\n");
    scanf("%d %d", &baris, &kolom);
    int limitmatriks[baris][kolom];
    printf("Input matriks :\n");
    for(i = 0; i < baris; i++){
        for(j = 0; j < kolom; j++){
            scanf("%d", &limitmatriks[i][j]);
        }
    }
    printf("Output matriks :\n");
    for(i = 0; i < baris; i++){
        for(j = 0; j < kolom; j++){
            printf("%d ", limitmatriks[i][j]);
        }
        printf("\n");
    }
return 0;
}
