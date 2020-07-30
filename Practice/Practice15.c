// Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
int main()
{
    char alphabet;
    printf("Enter the alphabet\n");
    scanf("%c", &alphabet);

    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
    {
        printf("This is a ALPHABET\n");
    }
    else
    {
        printf("This is not a ALPHABET\n");
    }

    return 0;
}