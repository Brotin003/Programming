// Project2?
// Snake water Gun
// Snake,Water, Gun or Rock, Paper , Scissor is a game most of us having played during school 
// time. (I sometimes play even now)
// Write a c program capable of playing this game with you.
// Your program should able to print the result after choose snake/ water or gun.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    // returns 1 if you win, -1 if you lose and 0 if draw

    // Condition of draw
    if (you == comp) {
        return 0;
    }

    // cases covered
    // snake <-> snake, water <-> water, gun <-> gun
    // snake <-> water
    // gun <-> 
    // gun <-> Snake

    // Condition snake and water
    if (you=='s' && comp == 'w')
    {
        return 1;
    }
    else if (you=='w' && comp == 's')
    {
        return -1;
    }

    // Condition gun and Water
    if (you=='w' && comp == 'g')
    {
        return 1;
    }
    else if (you=='g' && comp == 'w')
    {
        return -1;
    }

    // Condition gun and Snake
    if (you=='s' && comp == 'g')
    {
        return -1;
    }
    else if (you=='g' && comp == 's')
    {
        return -1;
    }

}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if (number<33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else {
        comp = 'g';
    }

    printf("Enter 's' for Snake, 'w' for Water and 'g' for Gun :- ");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    printf("You choose '%c' and computer choose '%c'. \n\n", you, comp);
    if (result == 0)
    {
        printf("******GAME DRAW******\n");
    }
    else if (result == 1)
    {
        printf("******YOU WIN******\n");
    }
    else
    {
        printf("******YOU LOOSE******\n");
    }
    return 0;
}

