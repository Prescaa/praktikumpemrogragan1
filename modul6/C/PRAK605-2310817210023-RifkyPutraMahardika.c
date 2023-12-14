#include<stdio.h>

int main(){
    int i, j, k, ordo;
    int hasil[50][50];
    printf("Ordo matriks nxn\n");
    scanf("%d", &ordo);
    int matriksA[ordo][ordo],matriksB[ordo][ordo];

    printf("Matriks A\n");
    for(i=0;i<ordo;i++){
        for(j=0;j<ordo;j++){
            scanf("%d", &matriksA[i][j]);
        }
    }

    printf("Matriks B\n");
    for(i=0;i<ordo;i++){
        for(j=0;j<ordo;j++){
            scanf("%d", &matriksB[i][j]);
        }
    }

    for(i=0; i<ordo;i++){
        for(j=0; j<ordo; j++) {
            hasil[i][j] = 0;
            for(k=0; k<ordo; k++){
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    printf("Matriks AXB\n");
    for(i=0; i<ordo;i++){
        for(j=0; j<ordo; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
return 0;
}