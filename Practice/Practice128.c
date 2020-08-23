// Quick quiz :- Use the library functions to calculate the area of a square with side a
#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("The value of area is %.2f", pow(side, 2));

    return 0;
}