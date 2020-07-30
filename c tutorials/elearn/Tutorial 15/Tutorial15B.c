// ways to define function
// DECELELARATION OF FUNCTION 
// FUNCTION CODE EXAMPLE:- WHITH ARGUMENTS AND WITHOUT RETURN VALUE

#include <stdio.h>
int sum (int a, int b);     // yaha pe pehle function ko declare karna hai
void printstar(int n)

{
    for(int i = 0; i<n; i++)
    {
         printf("%c", '*');
    }
}
int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printstar(7);
    
    return 0;
}
int sum (int a, int b)          // is ko hum # include ke bad bhi likh sakte hai 
{                               // function declare krne k lie
    return a + b;
}










