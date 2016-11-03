/*

 5.20 (Displaying a Square of Any Character) Modify the function created in Exercise 5.19 to form the
 square out of whatever character is contained in
 character parameter fillCharacter. Thus if side is 5 and fillCharacter is “#” then this function should print:

#####
#####
#####
#####
#####

*/
void fillCharacter(char c , int side);

#include <stdio.h>

int main(int argc, char const *argv[]) {

  fillCharacter('-',6);



  return 0;
}

void fillCharacter(char c , int side)
{int i,j;
  for(i =0 ; i<side ; i++)
  {
    for ( j = 0; j < side; j++)
     {
       printf("%c",c);
     }
     printf("\n" );
  }
}
