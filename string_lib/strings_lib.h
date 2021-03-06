/*
 Created by Serkan Korkut on 29/11/16.
*/
enum bool
{
    true, false
};





#include <stdlib.h>

#ifndef STRINGS_LIB_H
#define STRINGS_LIB_H

/* Returns length of a string. Does not count null terminator */
int getLength(char *expression)
{
    int length = 0;

    while (expression[length] != '\0')
    {
        length++;
    }


    return length;


}

/* Returns true if aChar is one of the delimeters  */
enum bool isContains(char aChar, char *delims)
{
    enum bool ret = false;

    int i;

    for (i = 0; delims[i] != '\0'; i++)
    {
        if (aChar == delims[i])
        {
            ret = true;

            return ret;
        }
    }

    return ret;


}

/* Copies n chars from source string to dest string, dest string MUST HAVE ALLOCATED DYNAMICALLY, enough to store the n + 1 chars */
void copyNString(char *dest, char *source, int n)
{
    int i = 0;

    while (i < n)
    {
        *dest++ = *source++;
        i++;
    }
}

/* Copies source string to dest string, dest string MUST HAVE ALLOCATED DYNAMICALLY, enough to store the source */
void copyString(char *dest, char *source)
{

    while (*source != '\0')
    {
        *dest++ = *source++;

    }
}

char **parseString(char *expression, char *delimeters)
{
    int i;
    int discreteDelimCount = 0;

    /* Count the delims */
    for (i = 0; i < getLength(expression); i++)
    {
        if ((isContains(expression[i], delimeters) == true && isContains(expression[i + 1], delimeters) == false))
        {


            discreteDelimCount++;


        }
    }

    /* To store different lengths of each sub expression and starting points of them */
    int *subExpLengths = (int *) calloc(discreteDelimCount, sizeof(int));
    int *subExpStartingPoints = (int *) calloc(discreteDelimCount, sizeof(int));


    /*Count expression has how many delimeters and how long each sub expression is */
    int backSum = 0;

    /* We should again set 0 to discreteDelimCount, to control the discreteDelimCount as an accessing index for sub expression lengths and starting points  */
    discreteDelimCount = 0;

    for (i = 0; i < getLength(expression); i++)
    {
        /* To check it's a delimeter while the next element is not a delimeter,
         * if we don't check it, it will count adjacent delimeters more than 1   */
        if ((isContains(expression[i], delimeters) == true && isContains(expression[i + 1], delimeters) == false))
        {

            if (discreteDelimCount == 0)
            {
                /*Set the first sub expression length to i, first sub expression's starting point is 0 and second one is i + 1
                 * since we have checked expression[i+1] is not a delimeter at the parent if */
                subExpLengths[discreteDelimCount] = i;
                subExpStartingPoints[discreteDelimCount] = 0;
                subExpStartingPoints[discreteDelimCount + 1] = i + 1;
            }
            else
            {
                /* To subtract previous delimeter's point from current point for sub expressions' lentgths  */
                /* Ignore subtracting the actual delimeters because it will lead overcomplexity because we don't know the count of each one  */

                backSum = backSum + subExpLengths[discreteDelimCount - 1];

                subExpLengths[discreteDelimCount] = i - backSum;


                /* The next char is the starting point of next sub expression
                 * since we have checked expression[i+1] is not a delimeter at the parent if  */
                subExpStartingPoints[discreteDelimCount + 1] = i + 1;



            }
            discreteDelimCount++;


        }
    }



    /* If you split a thing with n line, you got n + 1 pieces. That's why we add 1 to discreteDelimCount */

   int howManyPieces = discreteDelimCount + 1;

    char **retString = (char **) calloc((howManyPieces  ), sizeof(char *));


    for (i = 0; i < howManyPieces; i++)
    {
        /* Add 1 to subExpLengths[i] just to make sure there enough is enough place for \0  */
        retString[i] = (char *) calloc(subExpLengths[i] + 1, sizeof(char));
    }


    /* */
    for (i = 0; i < howManyPieces; i++)
    {
        int accessIndex = 0;

        while (isContains(expression[subExpStartingPoints[i] + accessIndex], delimeters) == false)
        {
            retString[i][accessIndex] = expression[accessIndex+ subExpStartingPoints[i]];
            accessIndex++;
        }

    }




    free(subExpLengths);

    free(subExpStartingPoints);



    return retString;

}

#endif
