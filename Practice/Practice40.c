// Write a C program to find sum of all natural numbers between 1 to n.
#include <stdio.h>
int main()
{
    int i, start, end, sum = 0;
    printf("Enter the starting value :- ");
    scanf("%d", &start);
    printf("Enter the ending value :- ");
    scanf("%d", &end);

    printf("natural number from %d to %d is\n", start, end);

    for (i = start; i <= end; i++)
    {
        printf("%d\n", i);
    }

    printf("The sum of all natural numbers %d to %d = %d ", start, end, sum);

    return 0;
}