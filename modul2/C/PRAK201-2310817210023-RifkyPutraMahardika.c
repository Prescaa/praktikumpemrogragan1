#include<stdio.h>
int main(){
char Nama[100], NIM[100], KelasParalel[100], Tempat_Tanggal_Lahir[100];
char Alamat[100], Hobi[100], No_HP[100];
printf("Nama                 : ");
gets(Nama);
printf("NIM                  : ");
gets(NIM);
printf("Kelas Paralel        : ");
gets(KelasParalel);
printf("Tempat/tanggal lahir : ");
gets(Tempat_Tanggal_Lahir);
printf("Alamat               : ");
gets(Alamat);
printf("Hobby                : ");
gets(Hobi);
printf("No. HP               : ");
gets(No_HP);

printf("\n"); //Untuk memberi jarak antara input dan output
printf("Nama                 : %s\n", Nama);
printf("NIM                  : %s\n", NIM);
printf("Kelas Paralel        : %s\n", KelasParalel);
printf("Tempat/tanggal lahir : %s \n", Tempat_Tanggal_Lahir);
printf("Alamat               : %s\n", Alamat);
printf("Hobby                : %s\n", Hobi);
printf("No. HP               : %s\n", No_HP);

return 0;
}