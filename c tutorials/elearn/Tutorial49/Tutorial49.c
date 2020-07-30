// You have to fill in values to a tempalte letter.txt
// Letter.txt looks something like this
// Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
// Please visit our outlet  {{outlet}} for any kind of problems. We plan to serve you again soon.
// You have to read this file and replace these values:
// {{name}} - aman
// {{item}} - Table fan
// outlet - Ram laxmi fan outlet
// Use fime function in c to acomplish the same

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// this is the string
char *replaceword(const char *str, const char *oldword, const char *newword)
{
    char *resultstring;
    int i, count = 0;
    int newwwordlength = strlen(newword);
    int oldwwordlength = strlen(oldword);

    // lets count the number of times old words occur in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;

            //    jump over this word
            i = i + oldwwordlength - 1;
        }
    }

    // making a new string to fit in a replaced words
    resultstring = (char *)malloc(i + count * (newwwordlength - oldwwordlength) + 1);

    i = 0;
    while (*str)
    {
        //compare the substring with result
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwwordlength;
            str += oldwwordlength;
        }
        else
        {
            resultstring[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was : %s\n", str);

    //Call the replaceword function and generate new str
    char *newstr;
    newstr = replaceword(str, "{{item}}", "Table fan");
    newstr = replaceword(newstr, "{{outlet}}", "Ram laxmi fan outlet");
    newstr = replaceword(newstr, "{{name}}", "aman");
    printf("The actual bill generated is : %s\n", newstr);
    printf("The generated bill has been written to the file genbill.txt\n");

    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}