// Write a program using a functions which calculates the sum and average of two numbers.
//  use pointers and print the value of sum and average in main().
#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2; // Typecasted in float
}
int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of avg is %.2f\n", avg);
    return 0;
}