// Recursive main

#include <stdio.h>

int main()
{
	static int count = 0;

	count++;

	printf("Call of main----> %d\n", count);

	return main();
}
