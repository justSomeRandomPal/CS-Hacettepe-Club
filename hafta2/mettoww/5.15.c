//Hypotenuse Calculations

#include <stdio.h>
#include <math.h>

double hypotenuse (double , double);

int main()
{
	double a, b;
	
	 
	
	printf("Please enter the sides of right triangle:\n");
	scanf("%lf%lf", &a, &b);



	printf("Hypotenuse is %lf\n", hypotenuse(a,b));
	
	return 0;
}

double hypotenuse (double a, double b)
{
	return sqrt( a * a + b * b );
}

