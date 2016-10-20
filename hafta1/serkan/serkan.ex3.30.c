#include <stdio.h>

int main()
{
    
    
    int size;
    
    printf("Please enter the size of square values are [1,20]\n" );
    
    do {
        scanf("%d\n",&size );
        
    } while(size <1 || size >20  );
    
    int i;
    for(i=0 ; i < 5 ; i++ )
    {
        for (i = 0 ; i < 5 ; i++)
        {
            printf("*" );
        }
        printf("\n" );
    }
    
    
    return 0;
    
}
