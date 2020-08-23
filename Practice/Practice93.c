// Logical operator in C
#include <stdio.h>
int main()
{
    int age;
    int vipPass = 0;
    vipPass = 1;
    printf("Enter your age :-");
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || ! vipPass == 1) // ! --> Not operator , codition becomes true if it is false
    {
        printf("You are above 18 and below 70 you can drive\n");
    }
    else
    {
        printf("You can't drive\n");
    }
    if (age == 50)
    {
        printf("Half Century");
    }
    return 0;
}