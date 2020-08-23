// Conditional Operators
// If-Else Condition
//  C Program to check Whether a number is even or odd
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter number:- ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n",a);
    }

    return 0;
}