#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1; // mistake 1.... -1 return krega
    }

    else if ((char1 == 'r') && (char2 == 's')) // mistake 2// else if hoga
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}
int main()
{

    char pname[20];
    int choose;
    char playerchoose;
    char dict[] = {'r', 'p', 's'};
    char compchoose;
    int playerscore = 0, compscore = 0;
    printf("ENTER YOUR NAME :- ");
    scanf("%s", &pname);
    getchar();
    printf("Welcome %s to the Rock, Paper & Scissors Game \n");

    for (int i = 0; i < 3; i++)
    {
        printf("Its your turn:\n");
        printf("Press 1 for rock\nPress 2 for paper\nPress 3 for Scissors\n");
        scanf("%d", &choose);
        getchar();
        playerchoose = dict[choose - 1];
        printf("YOU choose '%c'\n\n", playerchoose);

        printf("Its comp turn\n");
        // printf("Press 1 for rock\nPress 2 for paper\nPress 3 for Scissors\n");  // is line ko likhne ka koi fayda nahi hai kuki computer automatically select krta hai
        choose = generateRandomNumber(3) + 1;
        compchoose = dict[choose - 1];
        printf("CPU choose '%c'\n\n", compchoose);

        if (greater(compchoose, playerchoose) == 1)
        {
            compscore += 1;
            printf("CPU got it \n");
        }

        else if (greater(compchoose, playerchoose) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("Its a draw\n");
        }

        else
        {
            playerscore += 1;
            printf("You got it\n");
        }
    }
    printf("YOU: %d\nCPU: %d\n ", playerscore, compscore);

    if (playerscore > compscore)
    {
        printf("You win the game\n");
    }

    else if (playerscore < compscore)
    {
        printf("You win the game\n");
    }
    else
    {
        printf("Its a draw\n");
    }
    return 0;
}