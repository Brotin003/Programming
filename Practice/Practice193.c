// Create an array of 5 complex numbers created in problem 5 and display then with the help of 
// a display function. The values must be taken as an input from the user.
#include <stdio.h>
typedef struct complex
{
    int real;
    int complex;
}comp;
void display(comp c)
{
    printf("The value of real part is %d\n", c.real);
    printf("The value of coomplex part is %d\n", c.complex);
}
int main()
{
    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d num \n", i + 1);
        scanf("%d", &cnums[i].real);

        printf("Enter the complex value for %d num\n", i + 1);
        scanf("%d", &cnums[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
    return 0;
}