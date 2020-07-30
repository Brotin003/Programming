// Write a C program to print all alphabets from a to z. - using while loop
#include <stdio.h>
int main()
{
    char ch = 'A';
    printf("Alphabets from A to Z are:\n");
    while (ch <= 'Z')
    {
        printf("%c\n", ch);
        ch++;
    }

    return 0;
}