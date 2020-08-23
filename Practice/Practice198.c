// File I/O
#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Sample.txt", "r");  // --> for reading the file
    // ptr = fopen("Sample.txt", "w");     // --> for writing to a file
    return 0;
}
