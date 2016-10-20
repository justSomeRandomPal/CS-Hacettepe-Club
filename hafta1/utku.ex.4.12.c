#include <stdio.h>
int main (void)
{
    int i, upper_bound, lower_bound, sum=0 ;
    printf("Enter upper bound");
    scanf("%d",&upper_bound);
    printf("Enter lower bound");
    scanf("%d",&lower_bound);

    for(i=lower_bound;i<=upper_bound;i++)
    {
        if(i%2==0)
            sum+=i;
        else
            continue;
    }
    printf("Sum of even integers is:%d.", sum);

    return 0;
}
