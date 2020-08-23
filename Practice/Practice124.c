// Write a program with three functions
// 1> Good morning function which prints "Good morning"
// 1> Good morning function which prints "Good afternoon"
// 1> Good morning function which prints "Good night"
#include <stdio.h>
void GoodMorning();
void GoodEvening();
void GoodNight();
int main()
{
    GoodMorning();
    GoodEvening();
    GoodNight();
    return 0;
}
void GoodMorning()
{
    printf("Good morning students\n");
}
void GoodEvening()
{
    printf("Good evening students\n");
}
void GoodNight()
{
    printf("Good night students\n");
}
