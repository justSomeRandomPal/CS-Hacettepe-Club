// Towers of Hanoi (recursion)

#include <stdio.h>

void hanoi(int n, int source, int dest, int spare);

int main()
{
	int n = 0;

	printf("Please enter number of disks: ");
	scanf("%d", &n);

	hanoi(n, 1, 3, 2);

	return 0;
}

void hanoi(int n, int source, int dest, int spare)
{
	if(n == 1)
		printf("%d -> %d\n", source, dest);
	else
	{
		hanoi(n - 1, source, spare, dest);
		printf("%d -> %d\n", source, dest);
		hanoi(n - 1, spare, dest, source);
	}
}

