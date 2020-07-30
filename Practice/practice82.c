// Write a program to convert celcius (centigrade degrees temperature to farenheit)
#include <stdio.h>
int main()
{
    float celcious = 37, far;
    far = (celcious * 9/5) + 32 ;
    printf("The value of this celcious temprature in farenheit is %f", far);
    return 0;
}