
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n"); //SWITCH CASE CONTROL STATEMENTS IN C
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23");
        break; //if we remove break then it will
               //not skip and it will check default and also prints default
    default:
        printf("The age is not 3, 13 or 23");
        break;
    }
    return 0;
}
