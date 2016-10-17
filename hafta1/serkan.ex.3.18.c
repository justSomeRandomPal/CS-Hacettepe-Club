#include <stdio.h>

int main()
{

  /*

3.18 (Credit Limit Calculator) Develop a C program that will determine if a department store customer has exceeded the credit limit on a charge account. For each customer, the following facts are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should input each of these facts, calculate the new balance (= beginning balance + charges – credits), and determine if the new balance exceeds the customer's credit limit. For those customers whose credit limit is exceeded, the program should display the customer's account num- ber, credit limit, new balance and the message “Credit limit exceeded.” Here is a sample input/out- put dialog:
Enter account number3.18 (Credit Limit Calculator) Develop a C program that will determine if a department store customer has exceeded the credit limit on a charge account. For each customer, the following facts are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should input each of these facts, calculate the new balance (= beginning balance + charges – credits), and determine if the new balance exceeds the customer's credit limit. For those customers whose credit limit is exceeded, the program should display the customer's account num- ber, credit limit, new balance and the message “Credit limit exceeded.” Here is a sample input/out- put dialog:
Enter account number (-1 to end): 100 Enter beginning balance: 5394.78 Enter total charges: 1000.00
Enter total credits: 500.00
Enter credit limit: 5500.00 Account: 100
Credit limit: 5500.00 Balance: 5894.78 Credit Limit Exceeded.
Enter account number (-1 to end): 200 Enter beginning balance: 1000.00 Enter total charges: 123.45
Enter total credits: 321.00
Enter credit limit: 1500.00
Enter account number (-1 to end): 300 Enter beginning balance: 500.00
Enter total charges: 274.73
Enter total credits: 100.00
Enter credit limit: 800.00
Enter account number (-1 to end): -1 (-1 to end): 100 Enter beginning balance: 5394.78 Enter total charges: 1000.00
Enter total credits: 500.00
Enter credit limit: 5500.00 Account: 100
Credit limit: 5500.00 Balance: 5894.78 Credit Limit Exceeded.
Enter account number (-1 to end): 200 Enter beginning balance: 1000.00 Enter total charges: 123.45
Enter total credits: 321.00
Enter credit limit: 1500.00
Enter account number (-1 to end): 300 Enter beginning balance: 500.00
Enter total charges: 274.73
Enter total credits: 100.00
Enter credit limit: 800.00
Enter account number (-1 to end): -1

  */

  int accountNumber, balance, postBalance, charges, credit, creditLimit;





  do
    {
      printf("Enter account number \n" );

      scanf("%d", &accountNumber );

      printf("Enter beggining balance\n");

      scanf("%d",&balance);

      printf("Enter total charges\n");

      scanf("%d",&charges);

      printf("Enter total credits\n");

      scanf("%d",&credit);

      printf("Enter card limit\n");

      scanf("%d",&creditLimit);

      postBalance= balance - charges + credit;

      printf("Account: %d\n", accountNumber );
      printf("Credit limit: %d\n", creditLimit );
      printf("Balance: %d\n",postBalance );

      if(postBalance>creditLimit)
      {
        printf("Credit limit exceeded\n");
      }




    }
   while(accountNumber != -1);




  return 0;
}
