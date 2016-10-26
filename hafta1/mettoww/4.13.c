/* Calculating the Product of Odd Integers */

#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 1;

	for(i = 1; i <= 15; i += 2)
	{
		sum *= i;
	}

	printf("%d\n", sum);
	
	return 0;
}
