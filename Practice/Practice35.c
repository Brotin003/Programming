// Write a C program to print all even numbers between 1 to 100. - using while loop
#include <stdio.h>
int main()
{
    int i, n;
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are: \n", n);
    i = 2;
    while (i <= n)
    {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}

































































