/* Dynamic memory allocation illustration */
#include <stdio.h>
#include <stdlib.h>

void dull(void);


int main()
{
    /* Malloc stands for memory allocation. It allocates a certain size of memory block and leave it uninitialized */
    int *a = (int *) malloc(10 * sizeof(int));

    int i;


    for (i = 0; i < 10; i++)
    {
        a[i] = i;
    }

/* Pros: Faster than calloc since it doesn't initialize anything */
    /* Cons: Memory block stays uninitialized */

    /* Calloc stands for contigous allocation. It allocates a certain size of memory bit by bit and initialize all bits as 0 */
    int *b = (int *) calloc(10, sizeof(int));

    for (i = 0; i < 10; i++)
    {
        b[i] = i;
    }

    /* Pros: It allocates and you know memory byte cannot have 0x34A5F5F3, instead it's filled with 0 bits */
    /* Cons: It's a bit slower than malloc */

    /* Realloc is reallocates a new or existing memory. If pointer is null that have called realloc, it gives proper memory to pointer */
    /* If already allocated it just extends the valid memory and DOESN'T corrupt any existing data */


    int *c = NULL;

    c = (int *) realloc(c, 10 * sizeof(int));

    for (i = 0; i < 10; i++)
    {
        c[i] = i;
    }


    c = (int *) realloc(c, 20 * sizeof(int));

    for (i = 10; i < 20; i++)
    {
        c[i] = i;
    }


    /* Free frees the memory that already allocated, the dynamically allocated memories are stored in heap not in stack */
    /*Even if we call calloc or malloc or realloc in a function the allocated memory doesn't terminate after function returns */

    dull();

    /* So if you do dynamic allocation inside a function you should either
     *
     * 1) Return the allocated memory to some variable in main, than free it in main after you done the job
     *
     * 2) Free the memory in the function after you did the job
     *
     *
     * So this dull function is a bad practice since it doesn't free allocated z.
     * */


    return 0;
}

void dull(void)
{
    int *z = (int *) calloc(10, sizeof(int));

}
