// Program to print natural numbers in range - Using for loop
#include <stdio.h>
int main()
{
    int i, start, end;
    printf("Enter the starting value : ");
    scanf("%d", &start);
    printf("Enter the end value : ");
    scanf("%d", &end);

    printf("Natural numbers from %d to %d are \n", start , end);

    for (i = start; i <= end; i++)
    {
       printf("%d\n",i);
    }
    

    return 0;
}