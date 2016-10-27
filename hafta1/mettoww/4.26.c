/*
Calculating the value of pi
*/

#include <stdio.h>

int main()
{
	int i;
	double pi = 0;
	float a = 1;
	float b = 3;
	

	for (i = 1; i <= 1000; i++)
	{
		pi += (1 / a);
		pi -= (1 / b);
		
		a += 4;
		b += 4;
	}
	
	pi *= 4;
	
		
	printf("pi ~ %lf\n", pi);

	return 0;
}

		

