#include <stdio.h>
#include <math.h>

 /* function main begins program execution */
 int main( void )
{
int amount; /* amount on deposit */
int principal = 1000; /* starting principal */
double rate = .05; /* annual interest rate */
int year; /* year counter */
   /* output table column head */
printf( "%4s%21s\n", "Year", "Amount on deposit" );
/* calculate amount on deposit for each of ten years */
int pennys;
for(year=1;year<=10;year++){
/* calculate new amount for specified year */
amount =  ( principal * pow( 1.0 + rate, year ));
/*Pennys */
pennys =  (int)((100) *principal * pow( 1.0 + rate, year ))%100 ;
      /* output one table row */
printf( "%4d%21d.%d\n", year, amount,pennys ); }/*endfor*/
return 0; /* indicate program ended successfully */ } /* end function main */
