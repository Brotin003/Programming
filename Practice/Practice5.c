#include <stdio.h>
int main()
{
    int n, i, range;
    printf("Enter The Integer:-");
    scanf("%d", &n);

    printf("Enter The Integer:-");
    scanf("%d", &range);

    for (i = 1; i <= range; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}































