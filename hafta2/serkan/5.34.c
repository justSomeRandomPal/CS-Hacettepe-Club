/*
(Recursive Exponentiation) Write a recursive function power( base, exponent ) that when invoked returns
baseexponent
For example, power( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than or equal to 1.
Hint: The recursion step would use the relationship
baseexponent = base * baseexponent–1
and the terminating condition occurs when exponent is equal to 1 because base1 = base
*/

int recursiveExponent(int base, int exponent);

#include <stdio.h>

int main(int argc, char const *argv[]) {


  int a;

  a=recursiveExponent(3,4);

  printf("%d\n",a );

  return 0;
}

int recursiveExponent(int base, int exponent)
{
  if(exponent==1)
  {
    return base;
  }
  else
  {
    return base * recursiveExponent(base,exponent-1) ;
  }



}
