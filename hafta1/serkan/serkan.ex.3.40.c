#include <stdio.h>

int main(int argc, char const *argv[])
{

int size;
scanf("%d", &size );
int i,j;
for (i = 0; i < size; i++)
{
    for (j=0 ;  j < size ; j++)
    {
        if(i%2==0)
        {
          if(j%2==0)
          {
            printf("*");
          }
          else
          {
            printf(" " );
          }
        }
        else
        {
          if(j%2==0)
          {
            printf(" ");
          }
          else
          {
            printf("*" );
          }

        }
    }

    printf("\n" );
}


  return 0;
}
