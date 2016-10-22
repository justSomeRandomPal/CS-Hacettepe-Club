#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int j;
    int n;

    printf("Sayi gir baskan:");
    scanf("%d", &n);
    for (i=0; i<n; i++){
        if ((i == 0) | (i == n-1)){
            for (j=0; j<n ; j++){
                printf("*");
            }
        }
        else {
            printf("*");
            int x;
            for(x=0;x<n-2;x++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 1;
}
