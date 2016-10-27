#include <stdio.h>
float quotient();
int reminder();
int seperate();
int main (void)
{

    char c;


        printf("Please enter a function command..\n");
        c= getchar();
        if(c=='a')
            quotient();
        else if(c=='b')
            reminder();
        else if (c=='c')
            printf("SEPERATE");

        else
           {
                printf("No such as function...\n");
                printf("Enter the correct char..\n");
           }


    return 0;
}

float quotient()
{
    float x,y, quo;
    printf("Enter a dividend:");
    scanf("%f", &x);
    printf("Enter a divider:");
    scanf("%f" ,&y);

    quo=x/y;
    printf("Quotient is %f\n", quo);

}
int reminder()
{
    int x,y,rem;
    printf("Enter a dividend:");
    scanf("%d", &x);
    printf("Enter a divider:");
    scanf("%d" ,&y);
    rem= x%y;
    printf("Reminder is %d\n", rem);
}

int seperate()
{








}
