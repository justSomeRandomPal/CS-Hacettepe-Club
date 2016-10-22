#include <stdio.h>
#include <stdlib.h>

int main() {
    int passes= 0;
    int failures= 0;
    int student= 1;
    int result;

    while (student <=10) {
        printf("Enter Result (1=pass, 2=fail)");
        scanf ("%d", &result);

        if (result == 1 ){
            passes++;
        }
        else if (result == 2){
            failures++;
        }
        else {
            printf("Yanlis girdin gardas bi daha dene");
            scanf("%d", &result);
            continue;

        }
        student++;

    }
    printf("Passed %d\n", passes);
    printf("Failures %d\n", failures);
}

