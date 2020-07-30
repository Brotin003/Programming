//DYNAMIC MEMORY ALLOCATION 
// 1. C MALLOC
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // USe of Malloc
    int *ptr;
    //We can also create n size array using printf............
    ptr = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++) // we made a array of size 3 so we cannot increase value on this for loop
                                //if we increase value here it will show garbage value on result
    {
        printf("The value at %d of this array %d\n", i, ptr[i]);
    }

    return 0;
}