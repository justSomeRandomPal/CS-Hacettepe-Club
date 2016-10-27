#include <stdio.h>
#include <math.h>
float get_hypo();
int main (void)
{
    int i=0;

    while(i!=-1)
    {
        double side_1 ,  side_2;
        printf("Enter side one:");
        scanf("%lf", &side_1);
        printf("Enter side two:");
        scanf("%lf", &side_2);
        get_hypo(side_1, side_2);
        printf("Enter a value to continue or enter'-1' to exit.\n");
        scanf("%d",&i);
    }




    return 0;
}

float get_hypo(double x, double y)

{
    double  hypo;

    hypo=x*x +y*y;

    printf("Hypotenuse is %lf.\n", sqrt(hypo));


}


