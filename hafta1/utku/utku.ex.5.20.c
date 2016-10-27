#include <stdio.h>
char pprinter(char);
int main (void)
{
    char c;
    printf("Enter a type..");
    c= getchar();


    pprinter(c);

    return 0;
}

char  pprinter( char x )
{
    int i,j;
    int size;

    printf("Enter a size..");
    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        printf("\n");
        for(j=0; j<size; j++)
            putchar(x);
    }
}
