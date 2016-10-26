/* Square of Asteriks */

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int side = 0;

	printf("Enter a side of square: ");
	scanf("%d", &side);

	while(i < side)
	{
		while(j < side)
		{
			printf("*");
			j++;
		}

		j = 0;

		printf("\n");

		i++;
	}
	
	return 0;
}
