// C program to find sum of even numbers between 1 to n
#include <stdio.h>
int main()
{
    int i, start, end, sum=0;
    printf("Enter strting point :-");
    scanf("%d", &start);
    printf("Enter end point :- ");
    scanf("%d", &end);

    printf("Natural numbers betweem %d to %d \n", start, end);

    if (start % 2 != 0)
    {
        start++;
    }

    for (i = start; i <= end; i+= 2)
    {
        sum += i;
    }

    printf("The sum of even numbers between 1 to n is %d to %d = %d", start, end, sum);
    return 0;
}