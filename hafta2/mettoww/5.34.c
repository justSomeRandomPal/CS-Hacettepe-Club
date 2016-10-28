//Recursive Exponentation

#include <stdio.h>


int power(int base, int exponent);


int main()
{
	int base;
	int exponent;


	printf("Please enter a number then its exponent\n");
	scanf("%d%d", &base, &exponent);


	printf("Result: %d\n", power(base, exponent));

	return 0;
}



int power (int base, int exponent)
{
	if ( exponent == 1 )
		return base;
	if ( exponent == 0 )
		return 1;
	
	return base * power(base, exponent - 1);
}

