#include <stdio.h>
int main(){
    int i;
    int x;
    for(i=1; i <=7; i++){
        if(i == 1 || i <= 7){
            for(x = 1; x <= 6;x++){
                printf("#\n");}
        }
        else if((x - 1) == i){
            printf("#");
        }
        else{
            printf("#    #");
        }
    }
printf("\n");
return 0;
}