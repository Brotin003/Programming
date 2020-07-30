// Write a programm that performs the following, depending upon the choise selected by the user.
// 1) Calculate the square of number if choise is 1
// 2) Calculate the cube of number if choise is 2 and 4
// 3) Calculate the cube of the given number if choise is 3
// 4) Otherwise print the number as it is

#include <stdio.h>
#include <math.h>
int main()
{
    int choise, n;
    printf("Enter any number:- \n");
    scanf("%d", &n);
    printf("Choise is as follows:\n\n");
    printf("1. To find the square of a number\n");
    printf("2. To find the square-root of a number\n");
    printf("3. To find the cube root  of a number\n");
    printf("4. To print the number as it is\n\n");
    printf("Enter your choise:- \n");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
        printf("The square of a number is %d\n", n * n);
        break;
    case 2:
        printf("The square-root of a given number is %f", sqrt(n)); // sqrt == square root
        break;
    case 3:
        printf("The cube of given number is %d", n * n * n);
        break;

    default:
        printf("The number you had given is %d\n", n);
        break;
    }
    return 0;
}





                                                                              