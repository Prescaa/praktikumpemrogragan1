#include<stdio.h>
#include<math.h>
int main(){
float A, B;
scanf("%f %f", &A, &B);

float C = sqrt(pow(B, 2) - pow(A, 2));
float Keliling = A+B+C;
float Luas = (C*A)/2;
printf("Alas = %.f cm\n", C);
printf("Tinggi = %.f cm\n", A);
printf("Keliling = %.f cm\n", Keliling);
printf("Luas = %.f cm^2\n", Luas);
}