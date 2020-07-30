// Write a programm to calculate an Air ticket fare after discount, given following conditions
// --> If passenger is below 14 year then there is 50% discount on fare
// --> If passenger is above 50 years then there is 30% discount on fare
// --> If pessenger is above 14 and below 50 than there is 10% discount on fare
#include <stdio.h>
int main()
{
    int age;
    float fare;
    printf("--> Enter the age of passenger:- ");
    scanf("%d", &age);
    printf("--> Enter the air ticket fare:- ");
    scanf("%f", &fare);

    if (age < 14)
    {
        fare = fare - 0.5 * fare;
    }
    else if (age > 50)
    {
        fare = fare - 0.3 * fare;
    }
    else
    {
        fare = fare - 0.1 * fare;
    }
    printf("\n Air ticket fare charged to after discount is:- %.2f\n", fare);

    return 0;
}