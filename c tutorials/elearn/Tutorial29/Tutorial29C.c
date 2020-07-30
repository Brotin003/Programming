#include <stdio.h>

typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std; // tpeder ki wajhe se new name choose kia hai:- std

int main()
{
    // int *a, b;
    typedef int *intpointer;
    intpointer a, b;
    int c = 89;
    a = &c;
    return 0;
}