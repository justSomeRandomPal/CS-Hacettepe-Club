#include <stdio.h>

int main(void) {
    int grade; /* one grade */
    int aCount = 0; /* number of As */ int bCount = 0;
    /* number of Bs */
    int cCount = 0; /* number of Cs */
    int dCount = 0; /* number of Ds */
    int fCount = 0; /* number of Fs */
    printf("Enter the letter grades.\n");
    printf("Enter the 1 to end  loop until user types end-of-file key input.\n");
    while ((grade = getchar()) != '1')
    {

if (grade=='a' || grade == 'A')
{
  aCount++;
}
else if (grade=='b' || grade == 'B') {
  bCount++;
}
else if (grade=='c' || grade == 'C') {
  cCount++;
}
else if (grade=='d' || grade == 'D') {
  dCount++;
}
else if (grade=='f' || grade == 'F') {
  fCount++;
}

    }





     /* end while */
    /* output summary of results */
            printf("\nTotals for each letter grade are:\n");
            printf("A: %d\n",aCount); /* display number of A*/
            printf( "B: %d\n", bCount );
            printf( "C: %d\n", cCount );
            printf( "D: %d\n", dCount );
            printf( "F: %d\n", fCount );

            float gradeMean =( 4*(float)aCount + 3*(float)bCount + 2*(float)cCount + 1*(float)dCount )/ (aCount + bCount + cCount + dCount + fCount);

            printf("The GPA mean in the class is %.2f\n", gradeMean );


           return 0 ;
}
