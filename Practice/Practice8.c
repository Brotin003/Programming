//Programm to find Relationship between two numbers

#include <stdio.h>
int main()
{
    int a, b;
    printf("Please enter two integes:");
    scanf("%d%d",&a,&b);
    if(a<=b)
    printf("%d<=%d\n",a,b);
    else
    printf("%d>%d\n",a,b);
    return 0;
}