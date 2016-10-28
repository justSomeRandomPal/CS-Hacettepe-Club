//Displaying a square of any character

#include <stdio.h>

void fillCharacter(char shape, int side);

int main()
{
	int side;
	char shape;

	printf("Please enter character of square then length of side\n");
	scanf("%c%d", &shape, &side);
	
	fillCharacter(shape, side);

	return 0;
}


void fillCharacter(char shape, int side)
{
	int i, j;

	for(i = 1; i <= side; i++)
	{
		printf("\n");
	
		for(j = 1; j <= side; j++)
			printf("%c", shape);
	}
}


