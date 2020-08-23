// Write a programm to sum firse 10 natural numbers using for and do while loop

//Using do While loop
// #include <stdio.h>
// int main()
// {
//     int i = 1, n = 10, sum = 0;
//     do
//     {
//         sum += i;
//         i++;
//     } while (i <= 10);
//     printf("The value of sum (1 to 10) is %d", sum);
//     return 0;
// }

// Using for loop
#include <stdio.h>
int main()
{
    int i, n = 10, sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("The value of sum (1 to 10) is %d", sum);
    return 0;
}