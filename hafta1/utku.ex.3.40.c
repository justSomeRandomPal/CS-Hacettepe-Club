#include <stdio.h>
int main (void)
{
    int i, j;
    for(i=0;i<=8;i++)
        {
            printf("\n");
            for(j=0;j<=8;j++)
            {
                if (i%2==0)
                {
                    printf("*");
                    printf(" ");
                }
                else
                {
                    printf(" ");
                    printf("*");

                }

            }
        }
        return 0;

}
