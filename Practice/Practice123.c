#include <stdio.h>
void display(); // FUNCTION PROTOTYPE
int main()
{
    int a;
    printf("Initializing display function\n");
    display(); //FUNCTION CALL
    printf("Display function finished its work\n");
    return 0;
}
// FUNCTION DEFINATION
void display()
{
    printf("This is aman\n");
}