//Write a programm to clculate the next salary of an employee, if a tax of 15% is leived
// on his gross-salary if it exceeds Rs. 10000/- per month
#include <stdio.h>
int main()
{
    float net_salary, gross_salary;
    printf("Enter the gross salary of an employee\n");
    scanf("%f", &gross_salary);
    if (gross_salary < 10000)

        net_salary = gross_salary;

    if (gross_salary >= 10000)

        net_salary = gross_salary - 0.15 * gross_salary;

    printf("\nNet salary is Rs.%.2f\n", net_salary); // .2 is islie likha hai kuki rest me point ke bad extra value htane k lie

    return 0;
}