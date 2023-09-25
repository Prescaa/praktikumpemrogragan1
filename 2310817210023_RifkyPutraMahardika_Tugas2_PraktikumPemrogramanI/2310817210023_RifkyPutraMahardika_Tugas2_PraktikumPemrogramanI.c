#include <stdio.h>
int main(){
    char Baris1 [] = "Selamat Pagi,";
    char Baris2 [] = "Teknologi Informasi FTULM Selalu dihati";
    int baris;

    for(baris = 1; baris < 3;baris++){
        if(baris == 1){
            printf("%s", Baris1);
        }
        else{
            printf("%s", Baris2);
        }
    printf("\n");
    }
return 0;
}