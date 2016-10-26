/*
Computing value of e^x
*/

#include <stdio.h>

int main()
{
	double x = 1;
	int a;
	int i = 1;
	double f = 1;
	double e = 0;

	printf("Please enter exponent of function e^x:\n");
	scanf("%d", &a);

	
	
	while(i <= 100)
	{
		f *= i;
		x = x * a;
		e += (x / f);
		i++;
	}
	
	e += 1;
	
	printf("e^%d = %lf\n", a, e);

	return 0;
}

