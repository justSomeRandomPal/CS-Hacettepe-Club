#include <stdio.h>

int main(int argc, char const *argv[]) {





int facSize;

scanf("%d",&facSize );




  int i=0;
  int result =1;
  for(i=1; i <= facSize ; i++  )
  {
    result = i * result;
  }

  printf("%d\n", result );












  return 0;
}
