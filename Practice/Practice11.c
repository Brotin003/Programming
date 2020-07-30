// Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h>
int main()
{
    int num1;

    // Input two numbers from user
    printf("Enter number:-");
    scanf("%d", &num1);

    // If num1 is greater than zero
    if (num1 > 0)
    {
        printf("This number is POSITIVE");
    }

    // If num1 is less than 0
    if (num1 < 0)
    {
        printf("This number is NEGATIVE");
    }

    // If num1 is equals to 0
    if (num1 == 0)
    {
        printf("This numberis ZERO");
    }

    return 0;
}