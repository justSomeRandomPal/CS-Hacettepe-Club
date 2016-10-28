//Separating Digits

#include <stdio.h>

void separate(unsigned int num);

int main()
{
	unsigned int num;
	

	printf("Please enter a number between 1-32767:\n");
	scanf("%u", &num);

	
	separate(num);


	return 0;

}

void separate(unsigned int num)
{
	int a, b, c, d, e;
	

	e = num % 10;
	num = (num - e) / 10;
	
	if (num == 0)
		d = -1;
	else 
		d = num % 10;
	num = (num - d) / 10;

	if(num == 0)
		c = -1;
	else
		c = num % 10;
	num = (num - c) / 10;

	if(num == 0)
		b = -1;
	else
		b = num % 10;
	num = (num - b) / 10;

	if (num == 0)
		a = -1;
	else 
		a = num;
	
	
	
	if (a != -1)
		printf("%d  ", a);

	if (b != -1)
		printf("%d  ", b);
	if (c != -1)
		printf("%d  ", c);
	if (d != -1)
		printf("%d  ", d);
	if (e != -1)
		printf("%d  ", e);

	printf("\n");

}

