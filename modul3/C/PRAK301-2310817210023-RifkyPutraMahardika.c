#include <stdio.h>
int main() {
    int angka1, angka2;
    printf("Input : ");
    scanf("%d %d", &angka1, &angka2);

    if(angka1 > angka2){
    printf("Output : %d %d", angka2, angka1);
    }
    else if(angka1 < angka2){
    printf("Output : %d %d", angka1, angka2);
    }
return 0;
}
