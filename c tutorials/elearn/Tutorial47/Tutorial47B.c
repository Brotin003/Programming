//FUNCTIONS FOR FILE I/O
// ****2.WRITING A FILE****
// it means in the txt file all text will be dissapper and  char string text will be printed

#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "This content was produced by Tutoria47.c";

    ptr = fopen("Tutorial47B.txt", "w");
    fprintf(ptr, "%s", string);

    return 0;
}