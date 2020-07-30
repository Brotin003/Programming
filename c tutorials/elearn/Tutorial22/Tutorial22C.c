/* TAKE INPUT FROM THE USER AND ASK USER CHOOSE 0 FOR TRIANGULAR STAR PATTERN AND 1 FOR REVERSED TRIANGULAR STAR PATTERN
 THEN PRINT THE PATTERN ACCORDINGLY
*
**
***
**** -> Triangular star pattern 
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
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int main()
{
    int rows, Type;
    printf("Enter 0 for Star pattern\nEnter 1 for Reverse star pattern\nChoose any one:-");
    scanf("%d", &Type);

    printf("How many rows do you want to print :-");
    scanf("%d", &rows);

    switch (Type)
    {
    case 0:
        starpattern(rows);
        break;

    case 1:
        reversestarpattern(rows);
        break;
    default:
        printf("YOU HAVE ENTERED INVALID CHOISE");
        break;
    }

    return 0;
}
