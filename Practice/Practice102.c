// Write a program to find greatest of four numbers enterd by user
#include<stdio.h> 
#include<stdlib.h> 
int main() 
{  
 int a,b,c,d,largest; 
  
 //Getting the numbers 
 printf("Enter the numbers out of which you have to find the greatest\n"); 
 scanf("%d\n %d\n %d\n %d",&a,&b,&c,&d); 
  
 //Actual Computation 
 largest= (a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d; 
 printf("The largest number is %d",largest); 
 return 0; 
}