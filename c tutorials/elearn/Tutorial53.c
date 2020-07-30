//Function Pointers in C
#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
void greet()
{
    printf("Hello world my name is aman%d\n");                                
}
int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2)); // to test the function
    int (*fptr)(int, int);                           // Declaring a function pointer  //fptr = fumction ptr
    fptr = &sum;                                     // Creating a function pointer
    int d = (*fptr)(4, 6);                           // Derefrencing a function pointer
    printf("The value of d is %d\n", d);
    return 0;
}