//Typedef in c

#include <stdio.h>
typedef struct Student // typedef add kia hai
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std; // typedef ki wajhe se new name choose kia hai:- std

int main()
{
    std s1, s2; // struct Student also we can use this
    s1.id = 34;
    s2.id = 89;
    printf("Value of s1's is %d\n", s1.id);
    printf("Value of s2's is %d\n", s2.id);
    return 0;
}