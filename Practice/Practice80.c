//Write a c Programm to calculate area of rectangle:
// (a) Using hard coded inputs
// (b) Using inputs supplied by the user

#include <stdio.h>
int main()
{
    // (a)
    // int length=6, bredth = 8;
    // printf("The area of rectangle is %d", length * bredth);
    // return 0;

    // (b)
    int length, bredth;
    printf("What is the length of the rectangle:- ");
    scanf("%d",&length);
    printf("What is the bredth of the rectangle:- ");
    scanf("%d",&bredth);
    printf("The area of rectangle is %d", length * bredth);
    return 0;
} 