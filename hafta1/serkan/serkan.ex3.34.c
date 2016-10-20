#include <stdio.h>

int main()
{


int size;

printf("Please enter the size of square values are [1,20]\n" );

do {
  scanf("%d",&size );
} while(size < 1 || size >20);

int i,j;

for(i=0 ; i < size ; i++ )
{
  for (j = 0 ; j < size ; j++)
  {
    if(i==0 || i == size -1)
    {
    printf("*");
    }
    else
    {
      if(j==0 || j == size -1)
      {
      printf("*");
      }
      else
      {
        printf(" ");
      }

    }

    }

    printf("\n" );


  }

return 0;


}
