//IF AND ELSE IN C LANGUAGE 
          //2. IF  AND ELSE STATEMENT

#include <stdio.h>

int main()
{
    int a;

    printf("How much money do you have to buy a chocolate:?\n");
    scanf("%d", &a);
    if(a>=15)
    {
        printf("You are allowed to buy chocolate\n");
    }
    
    else
    {
        printf("Sorry you dont have enough money to buy chocolate");
    }

    return 0;
}

