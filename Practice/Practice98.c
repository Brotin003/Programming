//Write a program to find out Whether a student is pass or fail, if it requires total 40%
// and at least 33% in each subject to pass . Assume 3 subjects and take marks as an input from
// the user.
#include <stdio.h>
int main()
{
    int maths, physics, chemistry;
    float total;
    printf("Enter physics marks :-");
    scanf("%d", &maths);

    printf("Enter maths marks :-");
    scanf("%d", &physics);

    printf("Enter chemistry marks :-");
    scanf("%d", &chemistry);

    total = (physics + maths + chemistry) / 3;
    if ((total < 40) || maths < 33 || physics < 33 || chemistry < 33)
    {
        printf("Your total percentage is %.2f and you are Failed\n", total);
    }
    else
    {
        printf("Your total percentage is %.2f and you are Passed\n", total);
    }
    return 0;
} 