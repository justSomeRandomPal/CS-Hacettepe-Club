/*
5.22 (Separating Digits) Write program segments that accomplish each of the following:
a) Calculate the integer part of the quotient when integer a is divided by integer b.
b) Calculate the integer remainder when integer a is divided by integer b.
c) Use the program pieces developed in a) and b) to write a function that inputs an integer
between 1 and 32767 and prints it as a series of digits,with two spaces between each digit. For example, the integer 4562 should be printed as:

4 5 6 2
*/

#include "stdio.h"
int calcQuotinent(int dividend,int divider);
int remain(int dividend, int divider);
void seperateDigits(int number);


int main(int argc, char const *argv[]) {


  seperateDigits(23758);

  return 0;
}

int calcQuotinent(int dividend,int divider)
{
  int quotinent = dividend/divider;

  return quotinent;
}

int remain(int dividend, int divider)
{
  int remained =dividend%divider;
  return remained;

}

void seperateDigits(int number)
{
  int howBig=1;
  int i;
  for(i=1 ; i<number; i=i*10)
  {

  }
  howBig=i;



  for(i=1; i < number ; i= i*10)
  printf("%d  ",remain(calcQuotinent(number,howBig/(i*10)),10) );
}
