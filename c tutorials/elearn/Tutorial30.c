// UNions in c

#include <stdio.h>
#include <string.h>
union Student {
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    union Student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name, "Aman"); /* one member will be active only....program will secure the name .....or we can 
                               split line by useing Alt+up or down key  for a right answers above of the data will 
                                be courroup insted  of this line bkz it is helpful in writing memory management programmes */

    printf("The id is %d\n", s1.id);
    printf("The marks is %d \n", s1.marks);
    printf("The fav_char is %c \n", s1.fav_char);
    printf("The name is %s \n", s1.name);

    return 0;
}

/* program will secure the name .....or we can split line by useing Alt+up or
 down key  for a right answers above of the data will be courroup insted 
of this line bkz it is helpful in writing memory management programmes */