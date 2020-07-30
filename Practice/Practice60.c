//Take input form the user and ask the user choose O for triangular starPattern and 1 for reversed triangular starPattern
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
    printf("Enter 0 for starpattern\nEnter 1 for reversestarpattern\nChoose any one\n");
    scanf("%d", &Type);
    printf("How many rows do you want :- ");
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
        printf("This is invalid entry");
        break;
    }

    return 0;
}