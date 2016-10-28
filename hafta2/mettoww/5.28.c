// Reversing Digits

#include <stdio.h>

void reverse( int num );


int main()
{
	int num;


	printf("Please enter a number:\n");
	scanf("%d", &num);

	
	reverse(num);

	printf("\n");

	return 0;
}


void reverse ( int num )
{
	

	while ( num != 0 )
	{
		printf("%d", num % 10);

		num = (num - (num % 10)) / 10;
	}
	
	
}

