// case 3: variables going out of scope
#include <stdio.h>
#include <stdlib.h>
int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return 0;
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

    //case3:
    int *danglingPtr3;
    {
        int a = 12;
        danglingPtr3 = &a;
    }
    // Here variable a goes out of scope which means danglingPtr3 is pointing to allocation which is freed and hence danglingPtr3 is now a dangling pointer
    return 0;
}