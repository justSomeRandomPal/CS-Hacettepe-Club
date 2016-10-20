#include <stdio.h>
int main (void)
{
   int N;
   printf("N\t10*N\t100*N\t1000*N\n\n");
   for(N=1;N<=10;N++)
   {
       printf("%d\t%d\t%d\t%d\n", N , 10*N , 100*N , 1000*N);
    }
    return 0;
}
