#include <stdio.h>
//#include <conio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

void draw(char a[]);
bool isOver(char a[],int winner);
void computer(int a[]);

void computer(int a[])
{

}

bool isOver(char a[],int winner)
{
    if (a[1] == a[2] && a[2] == a[3])
    {
        printf("winner is %d\n", winner);
        return true;
    }
    if (a[4] == a[5] && a[5] == a[6])
    {
        printf("winner is %d\n", winner);
        return true;
    }
    if (a[7] == a[8] && a[8] == a[9])
    {
        printf("winner is %d\n", winner);
        return true;
    }
    if (a[1] == a[5] && a[5] == a[9])
    {
        printf("winner is %d\n", winner);
        return true;
    }
    if (a[3] == a[5] && a[5] == a[7])
    {
        printf("winner is %d\n", winner);
        return true;
    }
    if (a[1] == a[4] && a[4] == a[7])
    {
        printf("winner is %d\n", winner);
        return true;
    }
    if (a[2] == a[5] && a[5] == a[8])
    {
        printf("winner is %d\n", winner);
        return true;
    }
    if (a[3] == a[6] && a[6] == a[9])
    {
        printf("winner is %d\n", winner);
        return true;
    }
    return false;

}

void draw(char a[])
{
    //clrscr();
    printf("\t\t\t\t %c | %c | %c\n", a[1], a[2], a[3]);
    printf("\t\t\t\t-----------\n");
    printf("\t\t\t\t %c | %c | %c\n", a[4], a[5], a[6]);
    printf("\t\t\t\t-----------\n");
    printf("\t\t\t\t %c | %c | %c\n", a[7], a[8], a[9]);
    printf("\n");
}

int main(void)
{
    char a[10] = "0123456789";
    int choice, comp;
    srand(time(0));
    printf("-------------------------------Tic / Tac / Toe--------------------------------\n\n");
    int i = 9;
    printf("Player 1 is X and Player 2 is O\n");
    printf("Enter Choice to place your mark \n");
    while(i--)
    {
        draw(a);
        printf("Enter choice for player 1: \n \t\t\t\t");
        scanf("%d", &choice);
        printf("\n\n");
        a[choice] = 'X';
        draw(a);
        if(isOver(a, 1))
            return 0;
        do
        {
            comp = rand() % 10 + 1;
        }while(a[comp] == 'X');
        printf("Computer's Turn\n");
        a[comp] = 'O';
    }
    printf("Its a Draw \n");
}