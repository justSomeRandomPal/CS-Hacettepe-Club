#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int i;
    int j;
    printf("Sayý gir gardas:");
    scanf("%d", &n);
    for (i=1 ; i <= n; i++){
        for (j=1 ; j <= n ; j++){
            printf("*");
        }
        printf("\n");
    }
}

