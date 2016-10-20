#include <stdio.h>

int main(int argc, char const *argv[])
{

 int sum=0;

int counter=15;
 while(counter>=1)
 {
   if(counter % 2 != 0)
   {
     sum = sum + counter;
   }

   counter--;

 }

printf("%d\n",sum );

  return 0;
}
