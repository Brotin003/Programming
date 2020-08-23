// Array of structure 
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
    struct employee facebook[100];
    facebook[0].code = 1;
    facebook[0].salary = 100.4;
    strcpy(facebook[0].name, "Aman");


    facebook[1].code = 2;
    facebook[1].salary = 130.4;
    strcpy(facebook[1].name, "Abhishek");


    facebook[2].code = 3;
    facebook[2].salary = 104.4;
    strcpy(facebook[2].name, "Somu");


    facebook[3].code = 4;
    facebook[3].salary = 180.4;
    strcpy(facebook[3].name, "Happy");


    facebook[4].code = 5;
    facebook[4].salary = 130.4;
    strcpy(facebook[4].name, "Ankush");
    printf("Done");

    return 0;
}