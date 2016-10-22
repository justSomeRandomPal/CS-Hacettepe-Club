#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int x = n / 10000;
    int a = n % 10000;
    int y = a / 1000;
    int b = a % 1000;
    int z = b / 100;
    int c = b % 100;
    int i = c / 10;
    int j = c % 10;
    if ( (x == j) & (y == i)  ){
        printf("Helal gardasima buldu palindromu!");
    }


}
