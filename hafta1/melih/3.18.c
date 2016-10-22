#include <stdio.h>
#include <stdlib.h>

int main()  {
        int accountNumber;
        float beginningBalance;
        float totalCharges;
        float totalCredits;
        float creditLimit;

        while (0==0) {

        printf("Enter account number:");
        scanf("%d", &accountNumber);
        if (accountNumber == -1){
            return 0;
        }

        printf("Enter beginning balance:");
        scanf("%f", &beginningBalance);

        printf("Enter total charges:");
        scanf("%f", &totalCharges);

        printf("Enter total credits:");
        scanf("%f", &totalCredits);

        printf("Enter credit limit:");
        scanf("%f", &creditLimit);

        float x = beginningBalance + totalCharges - totalCredits;
        printf ("%f", x);
        if (x > creditLimit) {
        }
        }
        return 0;
}


