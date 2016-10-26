/* Checkerboard Pattern of Asterisks */

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;

	while(i < 8)
	{
		if(i % 2 == 0)
		{
			while(j < 8)
			{
				printf("*");
				printf(" ");
				j++;
			}

			j = 0;
		}
		else
		{
			while(j < 8)
			{
				printf(" ");
				printf("*");
				j++;
			}

			j = 0;
		}

		printf("\n");

		i++;
	}

	return 0;
}
