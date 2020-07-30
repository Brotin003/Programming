//Example of two  dimentional array
#include <stdio.h>
int main()
{
    int Matrix[3][3];
    printf("This program will print no. from 1-9 i matrix from : \n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter no. (1-9) : ");
            scanf("%d", &Matrix[i][j]);
        }
    }
    printf("\n\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n So this is the matrix form of number (1-9)");
    return 0;
}