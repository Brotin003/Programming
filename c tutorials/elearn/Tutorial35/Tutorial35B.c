//DYNAMIC MEMORY ALLOCATION 
// 2. C CALLOC
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // USe of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n , sizeof(int));   //if we comment out this loop then this will show result that is initialized by zero
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        printf("The value at %d of this array %d\n", i, ptr[i]);
    }

    return 0;
}