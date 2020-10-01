//Write a C program to find maximum between three numbers.

#include <stdio.h>
int main()
{
    int num1, num2, num3, Max;

    // Input three numbers from user
    printf("Enter number First :-");
    scanf("%d", &num1);

    printf("Enter number Second:-");
    scanf("%d", &num2);

    printf("Enter number Third :-");
    scanf("%d", &num3);

    Max = max(num1,max(num2,num3));

    //  Print maximum value
    printf("Maximum number among all three numbers = %d", Max);

    return 0;
}
