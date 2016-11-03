#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
/* C has pointer types which is point various types of data. If you type

int * i ;

you are actually telling that i is a pointer for integers.

The confusing part is * is have two operations in C.

1) If you use * when declaring a variable it defines that will be a pointer or more generally an address

So after you declare

int * ptr

and access to ptrToptr, you will be access ptr's value.


2) If you use * or & operators to an existing value it will behave different. * will
dereference the address and give the value of the actual variable which pointer is pointing.

& operator does the reverse thing what * does an EXISTING variable. It will return the address of an EXISTING varible.

So if we type

int * ptr;

int a = 5 ;


ptr = &a ; //we typed pointer, not *ptr .

Now if we type *ptr it returns the value of a or more explicitly it will be equal to *&a which are reverse operators
and we'll stay alone with a itself.


Even a simple swap function may be confusing because of these 2 different * behaviour, but if we think as :

void swap(int *num1 , int *num2)
{
  int temp;


  temp = *num1;
//Possible Q&A

//Q:Why we haven't write just num1. We JUST WANT num1.?

//A:Because int *num1 is an EXISTING variable in this scope, so * will dereference us to num1.

//Q:But wait, how can it possible since * and & operators were reverse. We just did *(*a) and got a ?

//A:You're actually passing address of num1 when you're calling the swap function in main, so it will actually a *&num1 = num1 .
//The only reason * operator is in first parameter for function(except calling by reference) is telling the compiler or C language itself,
//we'll put there an address which will pointing an integer. So that int * means same thing when we declaring int * something. We should think that
//parameters of a function is declared there.

//So let's continue the swap function

*num1 = *num2;

*num2 = temp;


}


*/




/*

To sum up, we can say it's different when you're declaring a variable and use
'*' operator or you're using '*' operator to a variable when accessing it


*/
int a = 5;


/* ptr takes the address of a  */

int * ptr = &a;


/*Another pointer takes adress of a's pointer's pointer.  */
int **ptrtoptr = &ptr;

printf("Ptr is an existing value so i can easily dereference it by * and get the value of a : %d  \n",*ptr );


printf("If we type just ptr, we get the pointer's actual value or adress of a : %p \n",ptr );


printf("Same thing here, we dereference double pointer and got the value of ptr by typing *ptrtoptr :  %p \n",*ptrtoptr );


printf("Adress of ptr or value of ptrtoptr is %p \n",ptrtoptr );


/*When we came to the unified data structures such as arrays, we wil encounter
a different type of indirection.

So we know 1 dimensional arrays are made of a pointer for suitable data type, which know how far it should gone(Also memory has prepared for
that specified area i.e int a[10]; ).

So if we have a static array int a[4],  and it's elements are {1,2,3,4}

So if we access *a , what we got?

First element of the array right.

OK that was easy but how about 2 dimensional arrays or 2 dimensional pointer arrays.

In a 2d arrays memory is something like(for an array):

int a[2][3]int = {{1,2,3},{4,5,6}}

// Memory secene right now


        |-> --- ----------------------------------------------------------|
---     |   |.|                                                           |
|88|----    ---                                                           |
---         |.| ----------------------------|                             |
a           ---                             |                             |
                                            |                             |
                                            ---100                        |
                                            |4|                           |
                                            ---                           |
                                            ---104                        |
                                            |5|                           |
                                            ---                           |
                                            ---108                        |
                                            |6|                           |
                                            ---                           | 88
                                                                          ---
                                                                          |1|
                                                                          ---
                                                                          ---92
                                                                          |2|
                                                                          ---
                                                                          ---96
                                                                          |3|
                                                                          ---

So, a points 1d 2 integer pointers array and they both are pointing a 1d array of 3
integers

a[0][0]'s value is 1 and address is 88. Every int is 4 byte so second element's address

is 92 3rd is 96 and so on.

What we expect when we type *a now. I expect the address of first cell with a '.' in it.

BUT THAT DOESN'T WORK.

IN THESE KINDS OF DEFINITIONS (ARRAYS ) C, DOES NOT CARE inter pointers

like these 2 cells with '.' on them. So a's pointer directly goes until it reach some 'real'
value , not a pointer.

So if we type *a , we will get the first element's address so it will be 88.

If we type **a , we will get the first element's value.

As we remember from 3rd week, we can access array elements a[i][j] or *((*a + j ) +i ).

Because pointer arithmetic does this, if an int pointer incremented by 1, it will increase 4,

because an integer is 4 byte(can depend with system).

BUT HERE IS A TRICKY THING, what we got if we increment a in the above display, by 1.

The address of first element which is 88 or the address of first layered pointer(which we mentioned above it'll bypass the inter pointer
and goes directly to address 100)


 a++ gives us the address of first element of second row. That's why we should
 know that memory scene. If we do a representive display of memory as this

Adresses:                    88  92  96  100 104 108
                              -------------------
                              |1 |2 |3 |4 |5 |6 |
                            > -------------------
                            |
 ---------------------------|
 |
---
|88|
---

We may confuse that a++ can be 92. a++ will be 100.

The same rule also apply to multi dimensional arrays and pointer arrays more than 2.

We can see a few printf for proofs of that.

*/


int b[2][3] = {{1,2,3},{4,5,6}};


int c[2][2][2] = {1};

printf("Adress of first element in b array %p \n", &b[0][0] );

printf("Value of raw b  %p \n",b );

printf("Value of first dereference of b %p\n",*b );



printf("Adress of first element in c array %p \n", &c[0][0][0] );

printf("Value of raw c  %p \n",c );

printf("Value of first dereference of b %p\n",*c);

printf("Value of second dereference of b %p\n",**c);


/*

For 2d int pointers, the things are a bit different than, arrays.

For 2d int pointers int twoD** and suitable dynmaic memory allocations

// Memory secene right now

            192
        |-> --- ----------------------------------------------------------|
---     |   |.|                                                           |
|192|---    ---                                                           |
---         |.| ----------------------------|                             |
twoD        ---                             |                             |
            196                             |                             |
                                            ---200                        |
                                            |4|                           |
                                            ---                           |
                                            ---204                        |
                                            |5|                           |
                                            ---                           |
                                            ---208                        |
                                            |6|                           |
                                            ---                           | 188
                                                                          ---
                                                                          |1|
                                                                          ---
                                                                          ---192
                                                                          |2|
                                                                          ---
                                                                          ---196
                                                                          |3|
                                                                          ---


As you can see, the inter pointers' addresses are valid values for twoD. So if we go and

dereference twoD one as : *twoD we will get 192, NOT 188 for 2d pointer arrays.

*/

int **twoD;

twoD = (int**)calloc(3,sizeof(int*));
int i;
for(i =0; i<3 ; i++)
{
  twoD[i] = (int *)calloc(3,sizeof(int));
}

/* As we can see here arrays are not only differ pointer arrays by their dynamically, but also their inner structure. */
printf("Address of 2D int pointer arrays first element %p\n", &twoD[0][0] );

printf("Value of raw twoD %p\n",twoD );

printf("Value of one dereference of twoD %p\n",*twoD );

printf("Value of c++ of b %p\n",twoD -1 );

printf("%lu\n",sizeof(int) );







/*printf("Dereference attempt on an integer . I suspect it will go somewhere which adrress is 5 %p \n",*a );


*/


  return 0;
}
