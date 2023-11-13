#include <stdio.h>
int main(){
    int angka;
    char simbol;
    printf("Input :\n");
    scanf("%d %c", &angka, &simbol);

    int i;
    printf("Output :\n");
    for (i=1; i<=50; i++) {
        if (i % angka == 0) {
            printf("%c ", simbol);
        } else{
            printf("%d ", i);
        }
    }

    return 0;
}