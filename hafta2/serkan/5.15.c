/*
5.15 (Hypotenuse Calculations) Define a function called hypotenuse that calculates the length of the hypotenuse of a
right triangle when the other two sides are given. Use this function in a pro- gram to determine the length of the hypotenuse for
 each of the following triangles. The function should take two arguments
of type double and return the hypotenuse as a double. Test your pro- gram with the side values specified in Fig. 5.18.
*/
#include <math.h>
#include <stdio.h>

double hypotenuse(double a, double b);

int main(int argc, char const *argv[]) {


double a;

a = hypotenuse(3.0,4.0);

  printf("%.2f\n",a );
  return 0;
}

double hypotenuse(double a, double b)
{
  double hypo= a*a + b*b;

  hypo = sqrt(hypo);

  return hypo;
}
