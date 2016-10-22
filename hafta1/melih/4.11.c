#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int fonk();
 int x = 3;
int main()
{

    printf("%d\n",x);
    x = 2;
    printf("%d\n",x);
    fonk();
    return 0;
}

int fonk(){
    printf("%d\n",x);
    return 2;

}



