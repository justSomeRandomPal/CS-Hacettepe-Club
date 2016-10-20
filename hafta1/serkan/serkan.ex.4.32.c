/*The program writes a diamond shape for odd size */
#include <stdio.h>

int main(int argc, char *argv[])
{
  int size;

  puts("Enter the size of diamond ");

  scanf("%d", &size);

  int pivot = size/2;

  int i,j,k;

  int n=0;
  for(i =0 ; i<=size/2 ; i++)
  {
      for(j=0 ; j<pivot ; j++)
	     {
	  printf(" ");
	     }

      for(k=0 ; k < 2*n +1 ; k++ )
	    {

	  printf("*");

	     }

      n++;


      pivot--;

      puts("");



    }

  n=1;
  int l = (size-3)/2;
  for (i = 0 ; i < size/2; i++)
  {
    for (j = 0; j < n; j++)
    {

      printf(" ");



    }

    for(k=0 ; k<(2*l+1) ; k++)
      {

	printf("*");


      }


	  puts("");
	l--;
	n++;

  }




  return 0;
}
