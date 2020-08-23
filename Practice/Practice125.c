// Write a program with three functions
// 1> Good morning function which prints "Good morning"
// 1> Good morning function which prints "Good afternoon"
// 1> Good morning function which prints "Good night"

//****EVEREY FUNCTION GETS CALLED DIRECTLY OR INDIRECTLY FROM MAIN()****//
#include <stdio.h>
void GoodMorning();
void GoodEvening();
void GoodNight();
int main()
{
    GoodMorning();
    return 0;
}
void GoodMorning()
{
    printf("Good morning students\n");
    GoodEvening();                         // GOOD MORNING CALLS GOOD EVENING
}
void GoodEvening()
{
    printf("Good evening students\n");
    GoodNight();                           // GOOD EVENING CALLS GOOD NIGHT
}
void GoodNight()
{
    printf("Good night students\n");
}
