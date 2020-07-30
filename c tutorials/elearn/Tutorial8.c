#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your age\n");

    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age>=18) {
    
        printf("YOU CAN VOTE");
    }

    else if(age>=3)
    {
        printf("YOU ARE BETWEEN 3 TO 18 AND YOU CAN VOTE FOR BABIES");
    }

     else{
         printf("YOU CANNOT VOTE");
     }

    return 0;
}
                        