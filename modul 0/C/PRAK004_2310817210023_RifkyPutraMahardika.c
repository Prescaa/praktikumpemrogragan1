#include <stdio.h>
int main(){
    int i;
    int x;
    char namalengkap[] = "RIFKY PUTRA MAHARDIKA";
    long long int NIM = 2310817210023;

    for(i = 1; i <= 6; i++){
        if(i == 1 || i == 6){
            for(x = 1; x <= 30;x++){
            printf("#");}
        }
        else if (i == 3){
            printf("#   %s    #", namalengkap);
        }
        else if (i == 4){
            printf("#       %lld        #", NIM);
        }
        else{
            printf("#                            #");
        }
    printf("\n");
    }

return 0;
}