//BREAK AND CONTINUE STATEMENT
// 1. Break Statement

#include <stdio.h>

int main()
{
    printf("hello world\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);

        if (age > 10)
        {
            break;
        }
    }
    return 0;
}
