// C program to print number pattern with 1, 0 at alternate rows
#include <stdio.h>
int main()
{
    int rows, cols, i, j;
    printf("Enter the number of rows :- ");
    scanf("%d", &rows);
    printf("Enter the number of colums :- ");
    scanf("%d", &cols);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            printf("%d", (i % 2));
        }
        printf("\n");
    }

    return 0;
}