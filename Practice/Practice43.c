//CONTINUE STATEMENET
#include <stdio.h>
int main()
{
    printf("Hello world\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d Enter your age\n", i);
        scanf("%d", &age);
        if (age > 10)
        {
            continue;
        }

        printf("We have not come accross my continue statement\n");
        printf("We have not come accross my continue statement\n");
        printf("We have not come accross my continue statement\n");
        printf("Aman is a good boy");
    }

    return 0;
}