// Operator Precedence
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    (a < 5) ? printf("A is less than 5") : printf(" A is not less than 5 ");
    return 0;
}