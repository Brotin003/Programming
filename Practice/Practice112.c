// Write a program to print multiplication table of a given number n

//BY USING WHILE LOOP
// #include <stdio.h>
// int main()
// {
//     int i = 1;
//     int n;
//     printf("Enter n:- ");
//     scanf("%d", &n);
//     while (i <= 10)
//     {
//         printf("%d * %d = %d\n", n, i, n * i);
//         i++;
//     }
//     return 0;
// }

//BY USING FOR LOOP
#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("Enter n:- ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}