#include <stdio.h>
int main (void)
{
    int i , n, j, k, m, t, r, l, z;
    printf("Enter a bound:");
    scanf("%d", &n);
    m=n/2;

    for (i=1;i<=m+1;i++)
        {
                for (j=i-1;j<m;j++)
                    printf(" ");

                for(k=1;k<i*2;k++)
                    printf("*");
                    printf("\n");
        }

    for (t=0;t<m;t++)
        {
            for(l=0;l<=t;l++)
                printf(" ");

            for(r=1;r<=2*(m-t)-1;r++)
                printf("*");

                printf("\n");
        }
    return 0;
}
