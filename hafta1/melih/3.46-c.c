#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int main()  {
    int n;
    int i;
    int x;
    int result = 1;

    printf("Bir n degeri girin: ");
    scanf("%d", &n);
    printf("Bir x degeri girin: ");
    scanf("%d", &x);

    for (i=1 ; i <= n ; i++){
        result = result + (x^i)/fact(i);
    }
    printf("%d", result);
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
