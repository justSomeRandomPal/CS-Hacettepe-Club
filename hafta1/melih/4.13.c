#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 1;
    int n = 15;
    int result = 0;
    for ( i = 1 ; i <= n ; i = i + 2)
            result = result + i;
    printf("%d", result);
}
