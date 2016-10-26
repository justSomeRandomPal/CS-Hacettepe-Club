/*
Triangle printing program
*/

#include <stdio.h>

int main()
{
	int i;
	int j;
	int k;
	int m = 0;
	
	
	for (i = 1; i <= 10; i++)
	{
		printf("\n");
		
		for (j = 1; j <= i; j++)
			printf("*");
	}
	
	printf("\n");	

	for (i = 10; i >= 1; i--)
	{
		printf("\n");
		
		for (j = 1; j <= i; j++)
			printf("*");
	}
	
	printf("\n\n");	
	
	for (i = 10; i >= 1; i--)
	{
		

		for (j = 1; j <= i; j++)
			printf("*");

		printf("\n");	
		
		m++;

		for (k = 1; k <= m; k++)
			printf(" ");
		
	}

	m = 9;
	printf("\n");	

	for (i = 1; i <= 10; i++)
	{
		for (k = 1; k <= m; k++)
			printf(" ");
		
		m--;
	
		for (j = 1; j <= i; j++)
			printf("*");

		printf("\n");
	}


	return 0;
}

		
		

		
