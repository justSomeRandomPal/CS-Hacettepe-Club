#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 2;
    int result = 0;
    int n = 30;
    for ( i = 2 ; i <= n ; i = i + 1 )
        result = result + i;
    printf("%d", result);
    return 0;
}
