//  Complete this show function to display the content of employee
#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee emp) {
    printf("The code of employee is :- %d\n", emp.code);
    printf("The salary of employee is :- %.2f\n", emp.salary);
    printf("The name of employee is :- %s\n", emp.name);
    emp.code = 34;
}
int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //   (*ptr).code = 101;  // or you can also write :-  ptr->code = 101;
    ptr->code = 101;
    ptr->salary = 14.1;
    strcpy(ptr->name,"Aman");

    show(e1);
    printf("The code of employee is :- %d\n", e1.code);
    return 0;
}