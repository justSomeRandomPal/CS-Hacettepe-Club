#include <stdio.h>

int getPower(int a,int b);
int main(){
    int base, exponent,  result = 1;
    printf("Enter base:");
    scanf("%d", &base);
    printf("Enter exponent:");
    scanf("%d", &exponent);

    result = getPower(base, exponent);

    printf("%d^%d = %d", base, exponent, result);

    return 0;
}

int getPower(int base, int exponent){

    if(exponent == 0){
        return 1;
    }
    return base * getPower(base, exponent - 1);
}
