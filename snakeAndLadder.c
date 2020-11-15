#include <stdio.h>
#include "snakeAndLadderFunctions.h"

int main()
{
    int player1 = 0, player2 = 0;
    int dice;
    printf("\t\t\t\t-------SNAKE AND LADDERS--------\n");
    while(player1 < 100 && player2 < 100)
    {
        printf("\n\n\t\tplayer 1 is at %d \n\t\tplayer 2 is at %d\n", player1, player2);
        dice = roll();
        if (player1 + dice > 100)
        {
            printf("Can't move\n");
            continue;
        }        
        player1 += dice;
        if (dice == 6)
        {
            dice = roll();
            player1 += dice;
        }
        printf("player 1 is at %d\n", player1);
        player1 = check(player1); 
        dice = roll();
        if (player2 + dice > 100)
        {
            printf("Can't move\n");
            continue;
        }        
        player2 += dice;
        if (dice == 6)
        {
            dice = roll();
            player2 += dice;
        }
        printf("player 2 is at %d\n", player2);
        player2 = check(player2); 
    }
    if (player1 == 100)
        printf("player 1 wins\n");
    else
    {
        printf("player 2 wins\n");
    }
        
}