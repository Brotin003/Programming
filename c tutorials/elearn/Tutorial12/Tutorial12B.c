//BREAK AND CONTINUE STATEMENT
// 1. Continue Statement

#include <stdio.h>

int main()
{
    printf("hello world\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);

        if (age>10)
        {
            continue;
        }

        printf("We have not come accross any continue statement\n");
        printf("We have not come accross any continue statement\n");
        printf("We have not come accross any continue statement\n");
        printf("We have not come accross any continue statement\n");
        printf("We have not come accross any continue statement\n");
        printf("Aman is a good boy\n");

        
    }
    return 0;
}
