//DYNAMIC MEMORY ALLOCATION EXERCISE 8
/*ABC Pvt.ltd manages employes record of other compnies.
  Employee id can be of any length and it can contain any character
  for 3 employees , you have to take 'length of employee id' as a input in a length integer variable
  Then you have to take employee id as an input and display it in screen 
  store the employee id in a character array which is allocated dynamically.
  You have to create one character array dynamically 
  
  EMPLOYEE 1;
  ENTER NO. OF CHARACTERS IN YOUR eID
  45
  DYNAMICALLY ALLOCATE THE CHARACTER ARRAY.
  TAKE INPUT FROM USER

  EMPLOYEE 2;
  ENTER NO. OF CHARACTERS IN YOUR eID
  4
  DYNAMICALLY ALLOCATE THE CHARACTER ARRAY.
  TAKE INPUT FROM USER
    
  EMPLOYEE 3;
  ENTER NO. OF CHARACTERS IN YOUR eID
  9
  DYNAMICALLY ALLOCATE THE CHARACTER ARRAY.
  TAKE INPUT FROM USER
  
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int chars, i = 0;
  char a, b;
  char *ptr;
  while (i < 3)
  {
    printf("Employee %d: Enter the number of characters in your Employee Id\n", i + 1);
    scanf("%d", &chars);
    getchar();
    printf("Enter the value of a\n");
    scanf("%c", &a);
    getchar();
    printf("Enter the value of b\n");
    scanf("%c", &b);
    ptr = (char *)malloc((chars + 1) * sizeof(char)); //we need to store extra character +1 to allocate string bkz string needs a null  character
    printf("Enter your Employee Id\n");
    scanf("%s", ptr);
    printf("Your Employee Id is %s\n", ptr);
    free(ptr);
    i = i + 1;
  }
  return 0;
}