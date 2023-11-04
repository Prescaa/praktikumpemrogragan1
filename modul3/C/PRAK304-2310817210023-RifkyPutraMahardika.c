#include<stdio.h>
int main(){
    int nilai;
    printf("Input : ");
    scanf("%d", &nilai);

    if(nilai == 0){
        printf("Output : Nol");}
    else if(nilai > 0 && nilai < 10){
        printf("Output : Satuan");}
    else if(nilai > 9 && nilai < 20){
        printf("Output : Belasan");}
    else if(nilai > 19 && nilai < 100){
        printf("Output : Puluhan");}
    else{
        printf("Output : Anda Menginput Melebihi Limit Bilangan");}
return 0;
}