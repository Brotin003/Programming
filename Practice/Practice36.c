// Write a C program to print all natural numbers from 1 to n. - Using for loop
#include <stdio.h>
int main()
{
    int i, end;
    printf("Print all the natural numbers 1 to : ");
    scanf("%d", &end);

    printf("Natural numbers from 1 to %d are : \n", end);

    i = 1;
    for (i = 1; i <= end; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}