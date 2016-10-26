/* Calculating the Compound Interest with Integers */

/* Fig. 4.6: fig04_06.c
Calculating compound interest */
#include <stdio.h>
#include <math.h>
/* function main begins program execution */
int main()
{
	int amount; /* amount on deposit */
	int penny;
	double principal = 1000.0; /* starting principal */
	double rate = .05; /* annual interest rate */
	int year; /* year counter */

	/* output table column head */
	printf( "%4s%21s\n", "Year", "Amount on deposit" );

	/* calculate amount on deposit for each of ten years */
	for ( year = 1; year <= 10; year++ )
	{
		/* calculate new amount for specified year */
		amount = 100 * (principal * pow( 1.0 + rate, year ));

		/* output one table row */
		penny = amount % 100;
		amount = (amount - penny) / 100;
		printf( "%4d%21d$ %d penny\n", year, amount, penny );
	} /* end for */

	return 0; /* indicate program  ended successfully */
} /* end function main */
