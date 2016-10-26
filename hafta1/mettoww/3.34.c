/* 
Hollow square of asteriks
*/

#include <stdio.h>

int main()
{
	int i = 1;
	int a;


	printf("Please enter side number of square between 1 - 20>");
	scanf("%d", &a);

	while ( i <= a)
	{
		printf("*");
		i++;
	}
	
	i = 1;
	
	while ( i <= (a - 2))
	{
		int b = 0;
		
		printf("\n*");
		
		while ( b < (a - 2))
		{
			printf(" ");
			b++;
		}
		
		printf("*");
		i++;
	}
	
	i = 1;
	
	printf("\n");

	while ( i <= a)
	{
		printf("*");
		i++;
	}
	
	printf("\n");
	
	return 0;
}

