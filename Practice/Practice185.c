// Initializing a structures
#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee Aman = {100,71.22, "Aman"};

    printf("Code is :-  %d\n", Aman.code);
    printf("Salary is :- %.2f\n", Aman.salary);
    printf("Name is :- %s\n", Aman.name);
    return 0;
}