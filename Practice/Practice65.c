//C program to print 1 square number pattern
#include <stdio.h>
int main()
{
    int rows, cols, i, j;
    printf("Enter number of rows :- ");
    scanf("%d", &rows);
    printf("Enter number of cols :- ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}