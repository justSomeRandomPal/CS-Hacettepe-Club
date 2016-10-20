#include<stdio.h>
int main (void)

{
    int value=0 factorial=1 ;
    int i , e ,sum;

    printf("Please Enter a Value:") ;
    scanf("%d" , &value ) ;

    if(value!=0)
    {
        for (i=1; i<=value ;i++ )
        {
            factorial*= i;
            sum+= 1/factorial;

        }

        printf(" e is %d\n" ,  sum) ;

    }

    else
    {
        factorial=1;
        sum+= 1/factorial;
         printf("  Fe is %d\n" ,  sum) ;
    }


            return 0 ;
}
