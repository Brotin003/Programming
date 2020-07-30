//FUNCTIONS FOR FILE I/O
// ****1.READING A FILE****
// it means only for reading the .txt file
//we  have to use a _ (underscore)  insted of wide space ...... to print all .txt file.....and we  have to use a _ (underscore) in every wide space for print all txt file in compiler...if we dont use under score then it will print only one word
#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[64];

    ptr = fopen("Tutorial47A.txt", "r");
    fscanf(ptr, "%s", string); 
    printf("The content of this file has %s\n", string);

    return 0;
}