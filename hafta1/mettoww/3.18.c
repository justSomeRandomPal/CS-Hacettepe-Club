/* Credit Limit Calculator */

#include <stdio.h>

int main()
{
	int accountNumber = 0;
	float beginningBalance = 0;
	float totalCharge = 0;
	float totalCredit = 0;
	float creditLimit = 0;
	float newBalance = 0;

	while(accountNumber != -1)
	{
		printf("Enter account number (-1 to end): ");
		scanf("%d", &accountNumber);

		if(accountNumber == -1)
			break;

		printf("Enter beginning balance: ");
		scanf("%f", &beginningBalance);

		printf("Enter total charges: ");
		scanf("%f", &totalCharge);

		printf("Enter total credits: ");
		scanf("%f", &totalCredit);

		printf("Enter credit limit: ");
		scanf("%f", &creditLimit);	

		newBalance = beginningBalance + totalCharge - totalCredit;

		if(newBalance > creditLimit)
		{
			printf("Account: \t%d\n", accountNumber);
			printf("Credit limit: \t%.2f\n", creditLimit);
			printf("Balance: \t%.2f\n", newBalance);
			printf("Credit Limit Exceeded.\n\n");
		}
	}

	return	0;
}
