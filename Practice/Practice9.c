// Write a C program to find maximum between two numbers.

#include <stdio.h>
int main()
{
    int num1, num2;

    // Input two numbers from user
    printf("Enter number First :-");
    scanf("%d", &num1);

    printf("Enter number Second:-");
    scanf("%d", &num2);

    // If num1 is maximum
    if (num1 > num2)
    {
        printf("%d is greater", num1);
    }

    // If num2 is maximum
    if (num1 < num2)
    {
        printf("%d is greater", num2);
    }

    //  If both are equal
    if (num1 == num2)
    {
        printf("Both are Equal");
    }

    return 0;
}