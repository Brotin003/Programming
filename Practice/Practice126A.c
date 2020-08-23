// sum program
#include <stdio.h>
// Sum is a function which take a and b and returns an integer as an input
int sum(int a, int b); // function prototype deceleration
int main()
{
    int C;
    C = sum(2, 5); // function call
    printf("The value of C is %d\n", C);
    return 0;
}
int sum(int a, int b)
{
    int C;
    C = a + b;
    return C;
}