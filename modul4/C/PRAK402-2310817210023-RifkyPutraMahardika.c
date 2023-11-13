#include <stdio.h>
int main() {
    int angka;
    printf("Input : ");
    scanf("%d", &angka);

    //Untuk angka ganjil
    printf("Output : \n"); 
    for(int i=1; i<=angka; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }

    //Untuk angka genap
    printf("\n");
    for(int i=angka; i>=2; i--){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
}