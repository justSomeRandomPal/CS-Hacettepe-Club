/*
Factorial
*/

#include <stdio.h>

int main()
{
	int i;
	int num = 1;

	printf("Please enter a positive integer:\n");
	scanf("%d", &i);
	
	if (i == 0)
	printf("Factorial of number: 1\n");
	
	else
	{
		while(i != 0)
		{
			num *= i;
			--i;
		}

	
		printf("Factorial of number: %d\n", num);
	}
	return 0;
}
