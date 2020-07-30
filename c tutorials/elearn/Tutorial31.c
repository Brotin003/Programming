//C LANGUAGE HTML PARSER

#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // variable to track weather we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
            ;
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    // REMOVE THE TRALLING SPACES FROM THE BEGNING

    while (string[0] == ' ')
    {
        //shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }

    // REMOVE THE TRALLING SPACES FROM THE END
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}
int main()
{
    char string[] = "<h1> this is        a heading        </h1>"; //INSTED OF 1St <H1> WE CAN WRITE ANYTHING
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}

/*
Input:
<h1> This is a heading</h1>

Output:
<span> This is a heading <\span>

Output:
This is a heading
*/