#include <stdio.h>




int main()
{
/* Actually not a good code since I haven't done any dynamic allocation but totally works */
char * palindrome;

scanf("%s",palindrome);

int k=0;
int size=0;
while (palindrome[k]!='\0')
{
size++;
k++;
}

printf("Size is %d\n", size );


if(size % 2 == 0)
{
  printf("An even string cannot be a palindrome. Size is %d\n", size );
return 0;

}
int i;


/* No need to check after the half of the string */
for(i=0 ; i < size/2 ; i++  )
{

 if(palindrome[i] == palindrome[size - i - 1] )
 {
 }
 else
 {

   printf("Not a palindrome\n" );

   return 0;
 }



}

printf("A palindrome\n");

  return 0;

}
