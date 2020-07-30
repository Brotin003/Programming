//IF ELSE IF STATEMENT

#include <stdio.h>

int main()
{
    int x;
    printf("Enter your age\t");
    scanf("%d", &x);
    if(x>=18)
    {
        printf("You are eligible to vote\n");
    } 
    else if (x>5 && x<10)
    {
        printf("You are child");
    }
    else
    {
        printf("You are not eligible to vote\n");
    }
    return 0;
}
