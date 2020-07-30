#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    struct Student Aman, Vikram, Pratik;
    Aman.id = 1;
    Vikram.id = 2;
    Pratik.id = 3;
    Aman.marks = 466;
    Vikram.marks = 446;
    Pratik.marks = 426;
    Aman.fav_char = 'p';
    Vikram.fav_char = 'y';
    Pratik.fav_char = 'o';
    strcpy(Aman.name, "Aman is the student of year\n");

    strcpy(Vikram.name, "Vikram is the student of year\n");

    strcpy(Pratik.name, "Pratik is the student of year\n");

    printf("Aman's student id is %d\n", Aman.id);
    printf("Aman got %d marks \n", Aman.marks);         
    printf("Aman's name is: %s\n", Aman.name);

    printf("Vikram's student id is %d\n",Vikram.id);
    printf("Vikram got %d marks \n", Vikram.marks);
    printf("Vikram's name is: %s\n", Vikram.name);    

    printf("Pratik's student id is %d\n", Pratik.id);
    printf("Pratik got %d marks \n", Pratik.marks);    
    printf("Pratik's name is: %s\n", Pratik.name);
    return 0;
}