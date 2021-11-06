#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int check(int position);
int roll();

int roll()
{
    srand(time(0));
    char character;
    int dice;
    dice = rand() % 6 + 1;
    printf("enter R to roll the dice\n");
    scanf("\n%c", &character);
    printf("DICE ROLLING\n\t\t");
    sleep(1);
    printf("You rolled a %d\n",dice);
    return dice;
}
int check(int position)
{   
    int a[] = {31, 37, 73, 78, 92, 99, 5, 7, 28, 22, 44, 70, 79, 14, 17, 53, 39, 35, 7, 25, 29, 55, 41, 95, 89, 81};
    for (int i = 0; i < 13; i++)
    {
        if (position == a[i] && i < 6)
        {
            printf("you have been bitten by a snake move to %d", a[i + 13]);
            position = a[i + 13];
        }
        else  if (position == a[i] && i > 6)
        {
            printf("you have climbed a ladder move to %d", a[i + 13]);
            position = a[i + 13];
        }
    }
    return position;
}