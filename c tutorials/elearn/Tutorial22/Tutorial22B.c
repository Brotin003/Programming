/* WRITE A PROGRAMM TO GENERATE FOLLOWING PROGRAMM
 
****
***
**
*     -> Reverse triangular star pattern   */

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
        for (int j = 0; j <= rows - i - 1; j++) //mandetory
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows;
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    reversestarpattern(rows);
    return 0;
}
