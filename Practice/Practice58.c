// Write a program to generate the following patteren :-
// *
// **
// ***
// ****
// *****
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
int main()
{
    int rows;
    printf("How many rows do you want\n");
    scanf("%d", &rows);
    starpattern(rows);
    return 0;
}