#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int j;
    for (i=0 ; i < 8 ; i++){
        if (i % 2 != 0){
            printf(" ");
        }
        for (j=0 ; j < 8 ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
