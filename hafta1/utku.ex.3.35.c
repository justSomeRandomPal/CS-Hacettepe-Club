#include <stdio.h>
int main (void)
{
    int n, holder, original ;
    int reversed =0;

    printf("Enter an integer for palindrome check.");
    scanf("%d", &n);
    original=n;
    while(n!=0)
    {
        holder =n%10;
        reversed= reversed*10 + holder;
        n/=10;

    }
    if(original==reversed)
        printf("%d is a palindrome.",original );
    else
        printf("%d is not  a palindrome.",original );

    return 0;
}
