#include <stdio.h>
int main (void)
{
    int i, j ,n;
    printf("Please Enter a value between 1 and 20 ");
    scanf("%d" , &n);
    if (n>=1 && n<=20)
    {
        for(i=0;i<=n;i++)
            {
                printf("\n");
                for(j=0;j<=n;j++)
                    printf("*");
            }
    }
    else
        printf("You did something wrong.\nPlease Enter a value between 1 and 20\n ");

    return 0 ;
}
