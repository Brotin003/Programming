// CREATE A GAME:- ROCK, PAPER, SCISSORSS GAME
// If Player1 chooses:- rock
// If Player2 (computer) Chooses:- scissors--> player 1 gets 1 point
// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - papers wins
//Write a C program to allow user to play this game three times with computer . Log the scores of computer and the player.
// Display the name of the winner at the end.
// NOte:- You have to display name of the player during the game. Take users as an input from the User

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //SRAND TAKES SEED AS AN INPUT AND IS DEFINED INSIDE STDLIB.H
    return rand() % n;
}

int greater(char char1, char char2)
{
    //For Rock, Paper , Scissores --> Returns 1 if c1>c2 and 0 otherwise. if c1==c2 it will return -1

    if (char1 == char2)
    {
        return -1;
    }

    //Comparision of Rock & Scissor
    else if ((char1 == 'R') && (char2 == 'S'))
    {
        return 1;
    }
    else if ((char2 == 'R') && (char1 == 'S'))
    {
        return 0;
    }

    // Comparision of Paper & Rock
    else if ((char1 == 'P') && (char2 == 'R'))
    {
        return 1;
    }
    else if ((char2 == 'P') && (char1 == 'R'))
    {
        return 0;
    }

    //Comparision of Scissor & paper
    else if ((char1 == 'S') && (char2 == 'P'))
    {
        return 1;
    }
    else if ((char2 == 'S') && (char1 == 'P'))
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, ComputerScore = 0, temp;
    char playerchar, Computerchar;
    char dict[] = {'R', 'P', 'S'};
    printf("Welcome to the Game Rock, Paper, Scissors.\n");
    for (int i = 1; i < 4; i++)
    {
        //Take player 1's input
        printf("ROUND:- %d", i, "\n");
        printf("\nPlayer 1's Turn:\n");
        printf("CHOOSE:-\n1 For ROCK\n2 For PAPER\n3 For SCISSORS\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You choosed :- %c\n\n", playerchar);

        //Generate computer's input
        printf("Computer's Turn:\n");
        printf(" CHOOSE:-\n 1 For ROCK\n 2 For PAPER\n 3 For SCISSORS\n");
        temp = generateRandomNumber(3) + 1;
        Computerchar = dict[temp - 1];
        printf("Computer choosed :- %c\n\n", Computerchar);

        //Compare the scores
        if (greater(Computerchar, playerchar) == 1)
        {
            ComputerScore += 1;
            printf("Computer got it!\n");
        }

        else if (greater(Computerchar, playerchar) == -1)
        {
            ComputerScore += 1;
            playerScore += 1;
            printf("It's a Draw!\n");
        }
        else
        {
            playerScore += 1;
            printf("You got it!\n");
        }
        printf("You:-%d\nComputer:-%d\n\n", playerScore, ComputerScore);
    }
    if (playerScore > ComputerScore)
    {
        printf("YOU WON THE GAME\n");
    }
    else if (playerScore < ComputerScore)
    {
        printf("YOU LOOSE...TRY YOUR LUCK...COMPUTER WON THE GAME\n");
    }
    else
    {
        printf("IT'S A DRAW\n");
    }
    return 0;
}