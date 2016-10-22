#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int amount;
    int principal = 100000;
    int rate = 5;
    int year;

    printf("%4s%21s\n", "Year", "Amount on  deposit");

    for ( year = 1; year <= 10; year++){
        amount = principal * pow ( 100 + rate, year);
        int dolar = amount / 10000;
        int penny = amount % 10000;

        printf("%d          %d       %d\n", year, dolar, penny);
    }
    return 0;
}
