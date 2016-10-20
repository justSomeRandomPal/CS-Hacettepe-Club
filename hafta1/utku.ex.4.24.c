#include <stdio.h>
int main (void)
{
    int i=1, j=2, k=3, m=2;

    printf("%d", i==1);
    printf("%d", j==3);
    printf("%d", i>=1 && j<4);
    printf("%d", m<=99 && k<m );
    printf("%d", j>=i || k==m);
    printf("%d", k+m<j || 3-j>=k);
    printf("%d", !m);
    printf("%d", !(j-m));
    printf("%d", !(k>m));
    printf("%d", !(j>m));

    return 0;


}
