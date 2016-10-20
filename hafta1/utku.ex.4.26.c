#include <stdio.h>
int main (void)
{
    float sum=4;
    int i, n;
    printf("Enter upper bound");
    scanf("%d", &n);
    printf("\n");
    for(i=2;i<=n;i++)
    {
        if(i%4==3)
        {
            sum-=(float)4/i;
        }
        else if(i%4==1)
        {
            sum+=(float)4/i;
        }
    }
        printf("the value of 'pi' is:%f", sum);
    return 0;

}
