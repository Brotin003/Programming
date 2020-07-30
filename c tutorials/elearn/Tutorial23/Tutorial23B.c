// call by refrence

#include <stdio.h>
int sum (int a, int b);     // yaha pe pehle function ko declare karna hai
void printstar(int n)

{
    for(int i = 0; i<n; i++)
    {
         printf("%c", '*');
    }
}

int takenumber()
{
    int i;
    printf("Enter a number:-");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    c = takenumber();

    printf("The number entered is %d \n", c);

    
    return 0;
}
int sum (int a, int b)          // is ko hum # include ke bad bhi likh sakte hai 
{                               // function declare krne k lie
    return a + b;
}
// YE EK AISA FUNCTION THA JISNE INTEGER VALUE KO RETURN KIA AUR ISNE KOI PARAMETERS  NHI LIE INPUT ME









