#include<stdio.h>
int main(){
int Banyak_Putaran = 5;
float Total_Lari = 14;
float PHI = 3.14;
float Keliling = Total_Lari/Banyak_Putaran;
float Jari_Jari = (Keliling)/(2*PHI);
//Rumus jari-jari = Keliling : (2 x Phi)

printf("Diketahui :\n");
printf("Pak Dengklek mengelilingi taman = %d Putaran\n", Banyak_Putaran);
printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n", Total_Lari);
printf("Jawaban :\n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", Jari_Jari);

return 0;
}