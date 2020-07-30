//SIMPLE ADDDITION SUBSTRACTION AND MULTIPLICATION PROGRAM

#include <stdio.h>

int main()
{       
    int choise;
    int num1, num2;

    printf("1. Additon\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("1. Choose any of the option:\n");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
        printf("1. Type any two no.\n");
        scanf("%d %d", &num1, &num2);
        printf("Sum of %d and %d is %d\n", num1, num2, num1 + num2);
        return num1 + num2;     
        break;

    case 2:
        printf("1. Type any two no.\n");
        scanf("%d %d", &num1, &num2);
        printf("Difference b/w %d and %d is %d", num1, num2, num1 - num2);
        break;   

    case 3:
        printf("1. Type any two no.\n");
        scanf("%d %d", &num1, &num2);
        printf("Product of %d and %d is %d\n", num1, num2, num1 * num2);
        break;
    
    default:
        printf("Choose correct option\n");
    }
    return 0;
}
