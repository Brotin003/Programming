//Write a program to award grades to student depending upon criteria mentioned below:
// --> Marks less than or equal to 50 and give "D" grade.
// --> Marks above 50 and below 60 give "C" grade.
// --> Marks between 60 to 75 are given "B" grade.
// --> Marks greater than 75 are given "A" grade.

#include <stdio.h>
int main()
{
    int Result;
    printf("Enter the total marks of student :-");
    scanf("%d", &Result);

    if (Result <= 50)
    {
        printf("Grade 'D'\n");
    }
    else if (Result <= 60)
    {
        printf("Grade 'C'\n");
    }
    else if (Result <= 75)
    {
        printf("Grade 'B'\n");
    }
    else
    {
        printf("Grade 'A'\n");
    }

    return 0;
}