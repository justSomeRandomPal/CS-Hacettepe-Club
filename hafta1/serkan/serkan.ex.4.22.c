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
    { /* determine which grade was input */
        switch (grade) { /* switch nested in while */

            case 'A':
            case 'a':
            aCount++;
            break;
            case 'B':
            case 'b':
            bCount++;
            break;
            case 'C':
            case 'c':
            cCount++;
            break;
            case 'D':
            case 'd':
            dCount++;
            break;
            case 'F':
            case 'f':
            fCount++;
            break;
            case '\n':
            case '\t':
            case '1':
                break;


            default: /* catch all other characters */
                printf("Incorrect letter grade entered.");
                printf(" Enter a new grade.\n");
                break; /* optional; will exit switch anyway */
        } /* end switch */
    } /* end while */
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
