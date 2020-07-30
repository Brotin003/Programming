//Write a program to calculate the factorial of a given input natural number
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    long int fact = 1;
    printf("Enter any number to find factorial:-\n");
    scanf("%d", &x);
    while (x > 0)
    {
        fact = fact * x; //Factorial calculation
        x = x -1;
    }
    printf("Factorial is:- %1d\n", fact);
    
    return 0;
}