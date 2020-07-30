// case 2: Returning local variables in functionc calls
#include <stdio.h>
#include <stdlib.h>
int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    
}

int main()
{
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is now a dangling pointer

    // case2:
    int *dangPtr = functionDangling(); // ptr is now a dangling pointer
    return 0;
}