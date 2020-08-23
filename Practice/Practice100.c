// Write a program to find whether a year entered by the user is a leap year or not. Take year
// as an input from the user
#include <stdio.h>
#include <math.h>
int main()
{
    int year;
    printf("Enter the year :-");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d is leap year\n", year);
    }
    else
    {
        printf("%d is a normal year\n", year);
    }
    return 0;
}