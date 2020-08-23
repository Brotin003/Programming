// Pointer aeithmatic
#include <stdio.h>
int main()
{
    // int i = 34;
    // int *ptr = &i;  // increment of 4 bytes 
    // printf("The value of ptr is %u\n", ptr);
    // ptr++;
    // ptr = ptr +1;
    // ptr = ptr -1;
    // ptr++;
    // ptr--;
    // printf("The value of ptr is %u\n", ptr);

    char i = 34;
    char *ptr = &i;    // increment of 1 bytes
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    // ptr = ptr +1;
    // ptr = ptr -1;
    // ptr++;
    // ptr--;
    printf("The value of ptr is %u\n", ptr);
    return 0;
}