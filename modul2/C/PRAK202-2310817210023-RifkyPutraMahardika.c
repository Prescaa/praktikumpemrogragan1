#include<stdio.h>
int main (){
float nilai1, nilai2;

printf("Masukkan Nilai Pertama : ");
scanf("%f", &nilai1);
printf("Masukkan Nilai kedua  : ");
scanf("%f", &nilai2);
float Hasil=nilai1+nilai2;
printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\" ", nilai1, nilai2, Hasil);

return 0;
}