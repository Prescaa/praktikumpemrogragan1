#include<stdio.h>
int main(){
    int nilai;
    printf("Input : ");
    scanf("%d", &nilai);

    int detik, menit, jam, hari;
    hari = nilai/86400;
    detik = nilai %= 86400;
    jam = nilai/3600;
    detik = nilai %= 3600;
    menit = nilai/60;
    detik = nilai % 60;

    if (hari > 0){
        printf("Output : %d hari %.2d:%.2d:%.2d\n", hari, jam, menit, detik);}
    else{
        printf("Output : %.2d:%.2d:%.2d\n", jam, menit, detik);}

return 0;
}