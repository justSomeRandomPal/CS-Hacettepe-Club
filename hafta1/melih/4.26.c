#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float a = 4;
    int n;
    float result;
    float amount = 0;
    float amount1 = 0;
    scanf("%d", &n);
    for ( i = 3 ; i < n ; i = i + 2){
        float s = a / i;
        amount = amount + s;

        float d = a / (i +2);
        amount1 = amount1 + d;
    }
    result = a - amount + amount1;
    printf( "%f" , result);
    return 0;
}
