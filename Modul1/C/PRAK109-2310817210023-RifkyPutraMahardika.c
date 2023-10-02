#include<stdio.h>
int main(){
int Pasukan_YuZhong = 958730;
int Jumlah_Pahlawan = 5;
int Jumlah_Dikalahkan = Pasukan_YuZhong/Jumlah_Pahlawan;

printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n",Pasukan_YuZhong);
printf("Jumlah pahlawan = %d\n",Jumlah_Pahlawan);
printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n",Jumlah_Dikalahkan);
return 0;
}