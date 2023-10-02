#include<stdio.h>
int main(){
int A = 400000, B = 350000;
float Hasil_A = A-(0.13*A), Hasil_B = B-(0.21*B);

printf("Harga sepatu A adalah %d\n", A);
printf("Harga sepatu B adalah %d\n", B);
printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.f\n", Hasil_A);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.f\n", Hasil_B);
return 0;
}    