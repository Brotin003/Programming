//NESTED IF ELSE STATEMENT

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    if(x>15)

    {
        printf("No. entered by you is greater than 15\n");

        if(x<50)

        {
            printf("And it lies between 15 and 50");
        }
    }

    else
    {
        printf("Enter valid NO.");
    }

    return 0;
}    