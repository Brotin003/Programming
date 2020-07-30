//Example of one-dimentional array
#include <stdio.h>
int main()
{
    int marks[10], sum = 0;
    printf("Enter marks of 10 students : \n\n");
    for (int i = 0; i <= 9; i++)
    {
        printf("Marks of %d student : ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    int average = sum / 10;
    printf("\n The average marks of 10 students are %d",average);

    return 0;
}