#include <stdio.h>
int main (void)
{
    static int i;
    i=10;
    printf("%d", i);
    i--;
    main();
}
