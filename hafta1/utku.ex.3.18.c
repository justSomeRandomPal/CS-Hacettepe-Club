#include <stdio.h>
    int main (void)
    {
        int account_no=0;
        float begin_balance, total_credit, total_charges, credit_limit, balance;

        while(account_no!=-1)
        {
            printf("Enter account number(-1to end):");
            scanf("%d", &account_no);
            if(account_no!=-1)
            {
                printf("Enter beginning balance:");
                scanf("%f", &begin_balance);

                printf("Enter total charges:");
                scanf("%f", &total_charges);

                printf("Enter total credits:");
                scanf("%f", &total_credit);

                printf("Enter credþt limit:");
                scanf("%f", &credit_limit);

                balance= begin_balance+total_credit;
                printf("Account     :%d\n", account_no);
                printf("Credit limit:%.2f\n", credit_limit);
                printf("Balance     :%.2f\n", balance);
                if (balance>credit_limit)
                    printf("Credit Limit Exceeded\n");
                printf("\n");
            }
            else
                break;
        }

        return 0;
    }

