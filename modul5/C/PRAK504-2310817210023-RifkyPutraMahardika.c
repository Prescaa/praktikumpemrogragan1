#include <stdio.h>
int reverse(int angka) {
    int Reverseangka = 0;
    while (angka != 0) {
        int digit = angka % 10;
        Reverseangka = Reverseangka * 10 + digit;
        angka /= 10;
    }
    return Reverseangka;
}
int main() {
 int A, B;
 scanf("%d %d",&A,&B);
 A=reverse(A);
 B=reverse(B);
 int C = A+B;
 printf("%d",reverse(C));
}