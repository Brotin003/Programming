//STRING FUNCTIONS IN C <STRING.H>
    

#include <stdio.h>
#include <string.h>
int main()
{
    char string1[] = "Aman\t";
    char string2[] = "Abhishek\t";
    char string3[54];

    // puts(strcat(string1, string2));      // Stract func. used to concatrnate or combne two given strings

    printf("The length of string1 is %d\n", strlen(string1)); //STRLEN: function used to show  a length of a string
    printf("The length of string2 is %d\n", strlen(string2));

    printf("The reversed string string1 is:"); // STRREV :- func. used to reverse the string
    puts(strrev(string1));
    printf("The reversed string string2 is:");
    puts(strrev(string2));

    strcpy(string3, strcat(string1, string2)); // STRCPY :- func. used to copy one string into another
    puts(string3);
    return 0;
}