#include <stdio.h>

int main(int argc, char const *argv[])
{



/*Code from internet*/

  int num;
 		int total = 0;
 		printf("Please enter a decimal: ");
 		scanf("%d",&num );
     		while(num > 0)
 		{
 			total = num % 2;
 			num /= 2;
 			printf("%d ",total );
 		}
 			return 0;

  return 0;
}
