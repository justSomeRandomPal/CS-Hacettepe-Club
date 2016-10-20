#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i,sum=0;

  for(i=1; i<16 ; i++ )
  {
    sum= sum + (2*i);
  }

  printf("%d\n",sum );
  return 0;
}
