#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    for (i=0; i<11; i++){
        if(i == 0){
            printf("N\t10*N\t100*N\t1000*N\n");
            continue;
        }
        printf("%d\t %d\t %d\t %d\n", i, 10*i, 100*i, 1000*i);
    }

}
