// C PRE-PROCESSOR INTRO. AND WORKING

#include <stdio.h>
#include <stdlib.h>

int sum = 34;  // I define this int because the linkage of Tutorial45.c
int* functionDangling()
{
    int a, b, sum2; // I wrote sum2 insted of sum because of linking with Tutorial45.c
    a = 34;
    b = 362;
    sum = a + b;
    return &sum;
}
int main2()     // I wrote main2 insted of sum because of linking with Tutorial45.
{
    /* code..........*/
    return 0;
}
