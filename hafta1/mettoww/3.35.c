/* 
Palindrome tester for five digits
*/

#include <stdio.h>

int main()
{
	int num;
	int first_part;
	int second_part;
	int temp;
	
	printf("Please enter a number with five digits>\n");
	scanf("%d", &num);


	second_part = (num % 10) * 10;
	second_part += ((num - (num % 10)) / 10) % 10;
	num -= num % 1000;
	first_part = num / 1000;
	
	
	printf("This number is "); first_part == second_part ? printf("palindrome\n") : printf("not palindrome\n");

	return 0;
}

