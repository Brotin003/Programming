//NESTED SWITCH
//SWITCH CASE CONTROL STATEMENTS IN C
#include <stdio.h>
int main()
{
    int age, marks;             
    printf("Enter your age\n"); 
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks); 

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45");
            break;
            //switch ke ander bhi switch dala ja sakta hai
        default:
            printf("Your marks are not 45");
        }
        break;

    case 13:
        printf("The age is 13\n");
        break;

    case 23:
        printf("The age is 23");
        break; //if we remove break then it will
               //not skip and it will check default and also prints default
    default:
        printf("The age is not 2, 13 or 23");
        break;
    }
    return 0;
}
