#include <stdio.h>


int main(int argc, char const *argv[]) {


  int range;

  scanf("%d", &range );

  int i;
  double pseudoPi=0;

  for(i=0; i<range; i++)
  {

    if(i%2==0)
    pseudoPi = pseudoPi + 4.0/((2*i) +1);
    else
    pseudoPi = pseudoPi - 4.0/((2*i) +1);

  }

  printf("%f\n", pseudoPi );




  return 0;
}
