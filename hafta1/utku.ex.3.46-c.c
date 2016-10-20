#include<stdio.h>
int main (void)

{
    int value=0;
    float factorial=1 ;
    int i , x, multi_x;
    float sum=1 ;

    printf("Please Enter a Value:") ;
    scanf("%d" , &value ) ;

    printf("Please Enter a  'X'  Value:") ;
    scanf("%d" , &x ) ;
    multi_x=x;

    if(value!=0)
    {
        for (i=1; i<=value ;i++ )
        {
            factorial*= i;
            sum+= multi_x/factorial;
            multi_x*=x;

        }

        printf("e^x is %f\n" ,  sum) ;

    }

    else
    {
        factorial=1;
        sum+= 1/factorial;
         printf(" e is %f\n" ,  sum) ;
    }


            return 0 ;
}
