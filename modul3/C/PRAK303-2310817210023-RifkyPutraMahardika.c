#include<stdio.h>
int main(){
    int nilai;
    printf("Input : ");
    scanf("%d", &nilai);

    if(nilai > 0){
        printf("Output : positif");}
    else if(nilai < 0){
        printf("Output : negatif");}
    else if(nilai == 0){
        printf("Output : nol");}

return 0;    
}