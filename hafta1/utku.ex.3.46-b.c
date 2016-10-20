#include<stdio.h>
int main (void)

{
    int value=0;
    float factorial=1 ;
    int i ;
    float sum=1 ;

    printf("Please Enter a Value:") ;
    scanf("%d" , &value ) ;

    if(value!=0)
    {
        for (i=1; i<=value ;i++ )
        {
            factorial*= i;
            sum+= 1/factorial;

        }

        printf(" e is %f\n" ,  sum) ;

    }

    else
    {
        factorial=1;
        sum+= 1/factorial;
         printf(" e is %f\n" ,  sum) ;
    }


            return 0 ;
}
