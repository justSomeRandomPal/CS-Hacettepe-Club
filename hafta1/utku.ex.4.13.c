#include <stdio.h>
int main (void)
{
    int i, upper_bound, lower_bound, product=1 ;
    printf("Enter upper bound");
    scanf("%d",&upper_bound);
    printf("Enter lower bound");
    scanf("%d",&lower_bound);

    for(i=lower_bound;i<=upper_bound;i++)
    {
        if(i%2==1)
            product*=i;
        else
            continue;
    }
    printf("Product of odd integers is:%d.", product);

    return 0;
}
