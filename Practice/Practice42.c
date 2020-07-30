// Example program to demonstrate break statement
#include <stdio.h>
int main()
{
    int num, isPrime, i;
    printf("Enter any number\n");
    scanf("%d", &num);

    isPrime = 1;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;

            break;
        }
    }

    if (isPrime == 1)
    {
        printf("Number is prime number\n");
    }
    else
    {
        printf("Number is composite number\n");
    }

    return 0;
}