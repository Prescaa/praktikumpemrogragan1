#include<stdio.h>
int main(){
float JariJari, Tinggi;
float PI = 22.0/7.0;
scanf("%f %f", &JariJari, &Tinggi);

float Volume = (PI*(JariJari*JariJari)*Tinggi);
float Luas = (2*PI*JariJari*JariJari)+(2*PI*JariJari*Tinggi);
float Keliling = 2*PI*JariJari;
printf("Volume = %.2f\n", Volume);
printf("Luas = %.2f\n", Luas);
printf("Keliling = %.2f\n", Keliling);

return 0;
}