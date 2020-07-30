// Write a C program to check whether a number is even or odd.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number to check even of odd:-");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("This number is even\n");
    }
    else
    {
        printf("This number is odd");
    }

    return 0;
}