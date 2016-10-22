#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int n = 10;
    int j;
    int k;
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for ( i = 0 ; i < n ; i++){
        for ( j = 10 ; j > i ; j--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for ( i = 0 ; i < n ; i++){
        for(k = 0 ; k <= i ; k++){
            if (k == 0){
                continue;
            }
            printf(" ");
        }
            for ( j = 10 ; j > i ; j--){
                printf("*");
        }
        printf("\n");
    }

    for ( i = 0 ; i < n ; i++){
        for ( k = 0 ; k < (n - i) ; k++){
            if ( k == 0 ){
                continue;
            }
            printf(" ");
        }
            for ( j = 0 ; j <= i ; j++){
                printf("*");
            }
            printf("\n");
    }
}
