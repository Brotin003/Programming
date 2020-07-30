//Recurcion
#include <stdio.h>
int factotial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factotial(number - 1));
    }
}
int main()
{
    int num;
    printf("Enter the number you want the factorial of :- ");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factotial(num));
    return 0;
}