/* Calculating e */

#include <stdio.h>

int main()
{
	double x = 1;
	int i = 1;
	double f = 1;
	double e = 0;

	
	
	while(i <= 100)
	{
		f *= i;
		e += (1 / f);
		i++;
	}
	
	e += 1;
	
	printf("%lf\n", e);

	return 0;
}

