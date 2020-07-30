// case 1: de-allocation of a memory block
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *) malloc (7* sizeof(int));
    ptr[0] = 34;
    ptr[1] = 44;
    ptr[2] = 64;
    ptr[3] = 24;
    free(ptr);  // ptr is now a dangling pointer 
    return 0;
}