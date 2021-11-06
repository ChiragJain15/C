#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randint(int L_Limit , int U_Limit);
void Status();
void Attack();
void Help();
void Flee();
void Explore();
void Rest();
char name[20], action;
char game =  'Y';
int max_health,health,zom_health;
int main()
{
    while(game == 'Y')
    {
        printf("Enter your character's name: \n");
        scanf("%s",&name);
        printf("Hello there! I am %s . I'll be your avatar in this virtual world.\n",name);
        printf("Lets Start!!!\n");
        printf("[For the list of controls type 'Help']\n");
        max_health=10;
        health=10;
        zom_health=0;
        printf("%s is in a dense forest.\n", name);
        while(health > 0)
        {
            printf("Enter your action.\n");
            scanf("\n");
            scanf("%c", &action);
            if (action == 'A'){Attack();}
            else if (action == 'E'){Explore();}
            else if (action =='F'){Flee();}
            else if (action =='H'){Help();}
            else if (action == 'R'){Rest();}
            else if (action == 'S'){Status();}
            else {printf("%s didn't understand what you asked him to do just now.\n",name);}
        }
        printf("R.I.P\n");
        printf("Game over...\n");
        printf("Wannna play again:[Y,N]\n");
        scanf("\n");
        scanf("%c",&game);
        if(game == 'Y')
        {
            printf("================================== RESTART ==================================\n");
        }
        else
        {
            printf("Thanks for playing.\n");
            return 0;
        }
    }
    return 1;
}
int randint(int L_Limit, int U_Limit)
{
    srand(time(0));
    return rand() % U_Limit + 1;
}
void Status()
{
    printf("Player health = [%d/%d] \n",health,max_health);
    if(zom_health>0)
    {
        printf("Zombie health = %d \n",zom_health);
    }
}

void Attack()
{
    int a,x,z;
    a = randint(1,5);
    if (zom_health > 0)
        {
            if (a > 3)
                {
                    x = randint(1,5);
                    printf("%s attacked on the zombie with his sword.\n",name);
                    printf("Zombie lost %d HP(s).\n",x);
                    printf("%s defended the zombie's attack.\n",name);
                    zom_health -= x;
                    if (zom_health <= 0)
                    {
                        printf("zombie is dead...\n");
                        printf("%s gains HP advantage by 1.\n",name);
                        zom_health = 0;
                        health++;
                        max_health++;
                    }
                }
            else
            {
                z = randint(1,5);
                printf("%s attacked on the zombie with his sword.\n",name);
                printf("zombie defended the attack and attacked in return.\n");
                printf("%s losts %d HP(s).\n",name,z);
                health -= z;
            }
        }
    else
        {
            printf("%s swinged his sword in the air without motive.\n",name);
            printf("%s got tired.\n",name);
            health-=1;
        }
}

void Help()
{
    int max_health,health,zom_health;
    printf("Controls:-[H for Help, S for Status, F for Flee,A for Attack,E for Explore, R for Rest]\n");
}

void Flee()
{
    int x;
    if (zom_health > 0)
        {
        if (randint(1,3)==1)
            {
                printf("%s fleed from the zombie.",name);
                zom_health = 0;
            }
        else
            {
                x = randint(1,5);
                printf("Cannot flee.");
                printf("The zombie attacked.");
                printf("%s losed %d HP(s).",name,x);
                health-=x;
            }
        }
    else
    {
        printf("There's no one to flee from.");
    }
}

void Explore()
{
    int x;
    if (zom_health == 0)
    {
        printf("%s ran through curvy paths and reached to a new area.",name);
        if((randint(1,5)%2)==0)
        {
            x = randint(1,5);
            zom_health = randint(1,8);
            printf("A zombie came out of a dark patch of dense trees.");
            printf("It attacked on you.Kill it or it will kill you.\n");
            printf("%s losed %d HP(s).\n",name,x);
            health -= x;
        }
        else
        {
            printf("%s did not found anything.\n",name);
        }
    }
    else
    {
        x=randint(1,5);
        printf("Cannot leave battleground in between the fight.\n");
        printf("The zombie attacked.\n");
        printf("%s losed %d HP(s).\n",name,x);
        health -= x;
    }
}

void Rest()
{
    int x;
    if (zom_health == 0)
        {
            if (max_health - health>5)
            {
                printf("%s slept for a while.\n",name);
                health += randint(1,5);
            }
            else if (max_health - health == 4)
            {
                printf("%s slept for a while.\n",name);
                health += randint(1,4);
            }
            else if (max_health - health == 3)
            {
                printf("%s slept for a while.\n",name);
                health += randint(1,3);
            }
            else if (max_health - health == 2)
            {
                printf("%s slept for a while.\n",name);
                health += randint(1,2);
            }
            else if (max_health - health==1)
            {
                printf("%s slept for a while.\n",name);
                health += 1;
            }
            else
            {
                printf("%s tried to sleep but cannot rest.\n",name);
            }
            if (randint(1,3) == 1)
            {
                printf("%s woke by a rude attack of a zombie.\n",name);
                zom_health = randint(1,5);
            }
        }
    else
    {
        printf("%s cannot sleep in the battleground.",name);
        x = randint(1,5);
        printf("The zombie attacked.");
        printf("%s losed %d HP(s).",name,x);
        health -= x;
    }
}

