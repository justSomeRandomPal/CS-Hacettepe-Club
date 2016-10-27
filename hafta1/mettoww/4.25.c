/* Table of Decimal, Binary, Octal and Hexadecimal Equivalents */
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int remainder = 0;
	int division = 0;
	int remainderCounter = 0;

	printf("Decimal\t\tBinary\t\tOctal\t\tHexadecimal\n\n");

	for(i = 1; i <= 255; i++)
	{
		printf("%d\t\t", i);

		remainderCounter = 0;

		for (j = 2; j <= 16; j *= 2)
		{
			if(j == 2 || j == 8 || j == 16)
			{
				if(i < j)
				{
					if(i > 9)
					{
						if(i == 10)
							printf("A");
						else if(i == 11)
							printf("B");
						else if(i == 12)
							printf("C");
						else if(i == 13)
							printf("D");
						else if(i == 14)
							printf("E");
						else if(i == 15)
							printf("F");
					}
					else
						printf("%d\t\t", i);
				}
				else
				{
					for(k = i; k >= j; k /= j)
					{
						remainderCounter++;
					}

					if (i < j * 2)
					{
						division = k;
						remainder = i % j;

						if(division == 10)
							printf("A");
						else if(division == 11)
							printf("B");
						else if(division == 12)
							printf("C");
						else if(division == 13)
							printf("D");
						else if(division == 14)
							printf("E");
						else if(division == 15)
							printf("F");
						else
							printf("%d",division);

						if(remainder == 10)
							printf("A");
						else if(remainder == 11)
							printf("B");
						else if(remainder == 12)
							printf("C");
						else if(remainder == 13)
							printf("D");
						else if(remainder == 14)
							printf("E");
						else if(remainder == 15)
							printf("F");
						else
							printf("%d\t\t",remainder);
					}
					else
					{
						division = k;

						if(division == 10)
							printf("A");
						else if(division == 11)
							printf("B");
						else if(division == 12)
							printf("C");
						else if(division == 13)
							printf("D");
						else if(division == 14)
							printf("E");
						else if(division == 15)
							printf("F");
						else
							printf("%d",division);

						for(; remainderCounter != 0; remainderCounter--)
						{
							division = i;

							for(k = remainderCounter -1; k != 0; k--)
							{
								division /= j;
							}

							remainder = division % j;

							if(remainder == 10)
							printf("A");
						else if(remainder == 11)
							printf("B");
						else if(remainder == 12)
							printf("C");
						else if(remainder == 13)
							printf("D");
						else if(remainder == 14)
							printf("E");
						else if(remainder == 15)
							printf("F");
						else
							printf("%d",remainder);
						}

						if(i < 128 && j == 2)
							printf("\t");

						if(i > 15 && j == 8)
							printf("\t");

						printf("\t");
					}
				}
			}
		}

		printf("\n");
	}	

	return 0;
}
