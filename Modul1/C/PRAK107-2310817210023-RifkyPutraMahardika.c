#include<stdio.h>
int main(){
    int a = 4, b = 5, c = 7;
    int Harga_Tanah = 85000;
    int Keliling = a+b+c;
    //Note : Rumus keliling segitiga yaitu Keliling = A + B + C
    int Total_Harga = Keliling*Harga_Tanah;

    printf("Diketahui :\nPanjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",a,b,c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n",Keliling);
    printf("Harga tanah Per Meter adalah %d\n",Harga_Tanah);
    printf("Jawaban :\nBiaya yang diperlukan Pak Dengklek adalah : Rp %d",Total_Harga);
return 0;
}