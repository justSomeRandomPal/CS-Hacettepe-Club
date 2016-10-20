#include <stdio.h>

int main(int argc, char const *argv[]) {

  int size=10;
  int i,j;

  for(i=0 ; i<size ; i++ )
  {
    for (j = 0; j < i+ 1; j++)
    {
      printf("*" );
    }

    printf("\n" );
  }




  return 0;
}
