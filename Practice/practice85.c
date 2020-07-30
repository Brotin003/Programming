// Arithmatic instructions
#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4;
    int b = 8;
    int z;
    z = b * a; // legal
    // b * a = z; // illegal
    printf("The value of z is %d\n", z);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("8 when divided by 3 leaves a reminder of %d\n", 8%3);
    printf("-8 when divided by 3 leaves a reminder of %d\n", -8%3);
    printf("8 when divided by -3 leaves a reminder of %d\n", 8%-3);

    // No operator is assumed to be present 4 aur 5 ke bich me multiply ka sign na ho 
    // to hum use assume ni kr skte ki waha multiply ka sign hoga0
    // printf("The value of 4*5 is %d\n",(4)(5));  //--> will not return 20
    printf("The value of 4*5 is %d\n",(4)*(5)); //--> will return 20

    // There is no operator to perform exponentiation in C♦
    printf("The value of 4^5 is %d\n",(4)^(5)); //--> will not produce 4 to the power 5........ basically it is a bitwise XOR operator
    printf("The value of 2 to the power 5 is %f\n",pow(2, 5)); // we use %f because it gives us double value 



    printf("The calue of 6 + 5 is %d\n", 6 + 5);
    printf("The calue of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("The calue of 5/2 is %d\n", 5/2);
    printf("The calue of 3.0/9 is %f\n", 3.0/9);
    return 0;
}