/*
5.28 (Reversing Digits) Write a function that takes an integer value and returns the number with
its digits reversed. For example, given the number 7631, the function should return 1367.

*/

void reverseDigits(int number);

#include <stdio.h>

int main(int argc, char const *argv[]) {


  reverseDigits(564);

  return 0;
}

void reverseDigits(int number)
{

int i;
int counter=0;
int dummy;
for(i=1; i<number ; i=i*10)
{
  
}
int divider=10;

  while(i>1 )
  {
    dummy = number%(divider);

    dummy=dummy/(divider/10);

    printf("%d ",dummy );

    divider=divider*10;

    i= i/10;
  }



}
