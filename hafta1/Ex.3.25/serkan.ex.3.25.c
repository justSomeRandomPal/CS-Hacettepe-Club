#include <stdio.h>

/*

 Tabular Output) Write a program that uses looping to print the following table of values.
Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.
N   10*N    100*N
1   10  ....
2   20
3   30
4   40
5   50
6   60
7   70
8   80
9   90
10 100

 */

int main()
{
    int dull=1;

    printf("N\t10*N\t100*N\t1000*N\n");

    for(dull=1; dull <11; dull++)
    {
        printf("%d \t %d \t %d \t% d\n",dull, dull*10, dull*100, dull*1000);

    }


    return 0;
}
