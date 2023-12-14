#include<stdio.h>

int main(){
    int limit[50];
    int i, j, jumlah_ruangan;
    printf("Input :\n");
    printf("Masukkan jumlah ruangan :\n");
    scanf("%d", &jumlah_ruangan);
    printf("Banyaknya zetsu putih yang dimasukkan setiap ruangan :\n");
    for(i=0; i<jumlah_ruangan; i++){
        scanf("%d", &limit[i]);
    }
    printf("\nOutput :\n");
    printf("Zetsu putih setelah membelah diri :\n");
    for(i=1; i<=jumlah_ruangan; i++){
        int hasil = 0;
        for(j=0; j<i; j++){
            hasil = i * limit[j];
        }
        printf("%d ", hasil);
    }
return 0;
}