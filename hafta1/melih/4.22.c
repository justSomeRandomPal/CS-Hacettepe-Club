#include <stdio.h>
#include <stdlib.h>

int main(){
    int grade;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    int totalCount = 0;

    printf( "Enter the letter grader.\n" );
    printf( "Enter the  'Z' character to end input.\n" );

    while ( ( grade = getchar()) != 'Z'){
        switch ( grade ){
            case 'A' :
            case 'a' :
                ++aCount;
                ++totalCount;
                break;

            case 'B' :
            case 'b' :
                ++bCount;
                ++totalCount;
                break;

            case 'C' :
            case 'c' :
                ++cCount;
                ++totalCount;
                break;

            case 'D' :
            case 'd' :
                ++dCount;
                ++totalCount;
                break;

            case 'F' :
            case 'f' :
                ++fCount;
                ++totalCount;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                printf( "Incorrect letter grade entered." );
                printf( "Enter a new grade.\n" );
                break;
        }
    }
    int aNote = aCount * 90;
    int bNote = bCount * 80;
    int cNote = cCount * 70;
    int dNote = dCount * 60;
    int fNote = fCount * 50;

    float totalNote = (aNote + bNote + cNote + dNote + fNote);
    float average = totalNote / totalCount;
    printf( "\n The average grade for the class :\n");
    printf("%f", average);
    return 0;
}

