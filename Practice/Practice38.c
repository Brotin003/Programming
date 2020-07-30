// Write a C program to print all natural numbers in reverse (from n to 1). - Using for loop
#include <stdio.h>
int main()
{
    int i, start;
    printf("Enter the value of n: ");
    scanf("%d", &start);

    for (i = start; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}