/* Calculating the Sum of Even Integers */
#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;

	for(i = 0; i <= 30; i += 2)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return	0;
}
