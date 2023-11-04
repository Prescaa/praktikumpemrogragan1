#include <stdio.h>
int main() {
    int nilai;
    printf("Nilai : ");
    scanf("%d", &nilai);

    if (nilai >= 80){
        printf("Huruf : A");}
    else if (nilai < 80, nilai > 69 ){
        printf("Huruf : B");}
    else if (nilai < 70, nilai > 59){
        printf("Huruf : C");}
    else if (nilai < 60, nilai > 49){
        printf("Huruf : D");}
    else if (nilai < 50){
        printf("Huruf : E");}

return 0;
}