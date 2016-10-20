#include <stdio.h>

int main(int argc, char const *argv[])
{

  int sizeMinusOne;

  scanf("%d\n", &sizeMinusOne );
int i;

  int arr[sizeMinusOne + 1];

arr[0]=sizeMinusOne;

  for(i=1 ; i< sizeMinusOne +1  ; i++)
  {
    scanf("%d",&arr[i] );

  }


  int small;

  small = arr[0];

  for (i = 1; i < sizeMinusOne + 1 ; i++) {

    if(arr[i] < small )
    {
      small = arr[i];
    }

  }


  printf("Smallest is %d\n", small );

  return 0;
}
