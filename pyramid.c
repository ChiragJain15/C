#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter Height : \n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j < a; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("  ");
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}