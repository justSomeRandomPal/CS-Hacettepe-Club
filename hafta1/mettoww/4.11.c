/* Find the Smallest */

#include <stdio.h>

int main()
{
	int number = 0;
	int smallest = 0;
	int flag = 0;
	int i = 0;

	printf("Enter a number: ");
	scanf("%d", &flag);
	smallest = flag;

	for(i = 0; i < flag; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &number);

		if(number < smallest)
			smallest = number;
	}

	printf("Smallest number is %d\n", smallest);

	return 0;
}
