#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int main()  {
    int n;
    float f;
    int i;
    float result = 1;

    printf("Sayi gir gardas: ");
    scanf("%d", &n);

    for (i=1 ; i <= n ; i++){
        f = float(1/(fact(i)));
        result = result + f;
    }
    printf("%f", result);
    return 0;
}
int fact(int n){
    int i;
    int result = 1;

    for (i=1 ; i <= n ; i++){
        result = result*i;
    }
    return result;
}
