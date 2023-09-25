#include <stdio.h>
int main(){
    char Baris1 [] = "Selamat Pagi,";
    char Baris2 [] = "Teknologi Informasi FTULM Selalu dihati";
    int i;

    for(i = 1; i < 3;i++){
        if(i == 1){
            printf("%s", Baris1);
        }
        else{
            printf("%s", Baris2);
        }
    printf("\n");
    }
return 0;
}