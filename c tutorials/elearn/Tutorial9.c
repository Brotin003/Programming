#include <stdio.h>

#include <conio.h>

int main()
{
    int x;
    printf("Which subject's quiz you have given");

    printf("\n\n if maths then enter 1 \n\n if science then enter 2 \n\n if both then enter 4 \n\n");
    
    printf("Enter:");

    scanf("%d",&x);

    if(x==1)
    {
        printf("\n You have given maths quiz");
        printf(" you were passed");
        printf(" and you got 15 rupee gift.");
    }

    if(x==2)
    {
        printf("\n You have given science quiz");
        printf(" you were passed");
        printf(" and you got 15 rupee gift.");
    }

    if(x==4)
    {   
        printf("\n You have given both quiz");        
        printf(" you were passed");
        printf(" and you got 45 rupee gift.");
    }   
    
        return 0;
    }
