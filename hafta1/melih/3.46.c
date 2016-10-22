#include <stdio.h>
#include <stdlib.h>
int main()  {
        int i;
        int n;
        int result = 1;
        printf("Sayi giriniz: ");
        scanf("%d", &n);

        for (i=1 ; i <= n ; i++){
            result = result*i;
        }
        printf("%d", result);
        return 0;
}
