// Write a program to print multiplication table of 10 in reversed order

//BY USING FOR LOOP
#include <stdio.h>
int main()
{
    printf("****Multiplication table of 10****\n");
    for (int i = 10; i; i--)
    {
        printf("10 X %d = %d\n", i, 10 * i);
    }
    return 0;
}

//BY USING WHILE LOOP
// #include <stdio.h>
// int main()
// {
//     int i = 10;
//     int n;
//     printf("Enter n :-");
//     scanf("%d", &n);
//     while (i >= 1)
//     {
//         printf("%d X %d = %d\n", n, i, n * i);
//         i--;
//     }
//     return 0;
// }