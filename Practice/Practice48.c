#include <stdio.h>
VoidStar_pattern()
{
    int a;
    printf("Type how many stars(*) you want : ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
}
int sum();
void product(int x, int y);
float percentage(int x, int y);
int main()
{
    int add;
    int x, y;
    int m, s;
    float perct;
    VoidStar_pattern();
    add = sum();
    printf("sum is %d\n", add);
    printf("\n\n Type two number. to get their multlipication:\n");
    scanf("%d %d", &x, &y);
    product(x, y);
    printf("Type your two subject marks out of 100 :\n");
    printf("Maths : ");
    scanf("%d", &m);
    printf("Science : ");
    scanf("%d", &s);
    perct = percentage(m, s);
    printf("Your percentage is %2f", perct);
    return 0;
}
int sum()
{
    int x, y, z;
    printf("\n\nType no. 1:\t");
    scanf("%d", &x);
    printf("Type no.2 :\t");
    scanf("%d", &y);
    z = x + y;
    return 2;
}
void Product(int a, int b)
{
    int multiplication;
    multiplication = a * b;
    printf("The product is %d\n\n", multiplication);
}
float Percentage(int x, int y)
{
    float perct;
    perct=((x + y) / 200.0)*100.0;
    return perct;
}