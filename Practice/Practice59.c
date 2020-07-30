// Write a program to generate the following patteren :-
// *****
// ****
// ***
// **
// *
#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows;
    printf("How many rows do you want to print :- ");
    scanf("%d", &rows);
    reversestarpattern(rows);
    return 0;
}