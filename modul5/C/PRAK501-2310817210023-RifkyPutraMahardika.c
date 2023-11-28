#include <stdio.h>
int MaxBilangan(int a, int b, int c, int d) {
    int nilaimax1 = (a>b)? a:b; 
    int nilaimax2 = (c>d)? c:d;
    return (nilaimax1>nilaimax2)?nilaimax1:nilaimax2;
    }
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    return 0;
}