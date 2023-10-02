#include<stdio.h>
#include<math.h>
int main(){
    int Alas = 5, Tinggi = 12;
    float Miring = sqrt(pow(Alas, 2) + pow(Tinggi, 2));
    float Keliling = Tinggi+Alas+Miring;
    float Luas = (Alas*Tinggi)/2;

    printf("Diketahui : \n");
    printf("Alas = %d cm\n", Alas);
    printf("Tinggi = %d cm\n", Tinggi);
    printf("Jawab : \n");
    printf("Sisi A = %d cm\n", Tinggi);
    printf("Sisi B = %.f cm\n", Miring);
    printf("Sisi C = %d cm\n", Alas);
    printf("Keliling = %.f cm\n", Keliling);
    printf("Luas = %.f cm\n", Luas);

return 0;
}