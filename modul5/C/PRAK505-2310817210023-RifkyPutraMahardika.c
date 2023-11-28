#include <stdio.h>
void Biodata(int tahun, char Nama[], char Asal[]){
int tahun_sekarang = 2023;
printf("Perkenalkan Nama Saya : %s\n", Nama);
int umur = tahun_sekarang-tahun;
printf("Umur saya : %d\n", umur);
printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
printf("Asal Saya dari : %s", Asal);
}
int main() {
int tahunLahir;
 char Namaku[20], Asal[15];
 scanf(" %d",&tahunLahir);
 scanf(" %[^\n]%*c",&Namaku);
 scanf(" %[^\n]%*c",&Asal);
Biodata(tahunLahir, Namaku, Asal);
return 0;
}