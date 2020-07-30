// Command line calculator in c
// You have to create a command line utility to add/substract/divide.multyply two numbers
// first command line argument of your c program must be the operation.
// The next arguments being the two numbers. for example:
// >> Command.c add 45 4
// >>49

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);   // (atoi) is a function which converts string into integer
    num2 = atoi(argv[3]);

    // printf("Operation is %s\n", operation);
    // printf("Num1 is %d\n", num1);                     // For testing
    // printf("Num2 is %d\n", num2);

    if (strcmp(operation, "Add") == 0)
    {
        printf("%d\n", num1 + num2);
    }

    else if (strcmp(operation, "Substract") == 0)
    {
        printf("%d\n", num1 - num2);
    }

    else if (strcmp(operation, "Multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }

    else if (strcmp(operation, "Divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}
