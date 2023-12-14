#include<stdio.h>
#include<string.h>

int main(){
    char baris1[50];
    char baris2[50];
    printf("Input pesan :\n");
    scanf("%[^\n]\n", baris1);
    scanf("%[^\n]", baris2);

    int panjang1 = strlen(baris1);
    int panjang2 = strlen(baris2);

    printf("Output :\n");
    if (panjang1 != panjang2) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    
    } else if(panjang1 == panjang2){
        int i,j;
        int bintang=0;
        int pagar=0;
        for (i=0, j=0; i<panjang1 && j<panjang2; i++, j++) {
            if (baris1[i]==' ' && baris2[j]==' '){
                printf(" ");
            }
            else if (baris1[i]==baris2[j]){
                printf("*");
                bintang++;
            } else{
                printf("#");
                pagar++;
            }
        }
        
        printf("\n* = %d\n",bintang);
        printf("# = %d\n",pagar);
        if(bintang > pagar){
            printf("Pesan Asli\n");
            }
        else if(bintang < pagar){
            printf("Pesan Palsu\n");
            }
    }
return 0;
}