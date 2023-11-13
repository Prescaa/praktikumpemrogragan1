#include <stdio.h>
int main(){
    int angka1, angka2;
    printf("Input: ");
    scanf("%d %d", &angka1, &angka2);

    printf("Output: ");
    if(angka1<angka2){
        for(int i=angka1; i<=angka2; i++) {
            printf("%d %d", i, angka1+angka2-i);
            if (i<angka2) {
                printf(" - ");
            }
        }
    }else if(angka2<angka1){
        for(int i=angka1; i>=angka2; i--){
            printf("%d %d", i, angka1+angka2-i);
           if (i>angka2) {
                printf(" - ");
            }
        }
    }

    return 0;
}
