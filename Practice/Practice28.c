// Write a C program to check whether a number is even or odd using switch case.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number to check even or odd : ");
    scanf("%d", &num);

    switch (num % 2)
    {
    case 0:    // If n%2 == 0 
        printf("Number is even");
        break;

    case 1:    // Else if n%2 == 1
        printf("Number is odd\n");
        break;
    }
}