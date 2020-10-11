#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n, a[100][100], b, c;
    scanf("%d", &n);
    c = n;
  	b = 2 * (n - 1) + 1;
    for (int i = 0; i < c; i++) 
    {
        for (int j = i; j < b - i; j++)
        {
            for (int k = i; k < b - i; k++)
            {
                a[j][k] = n;
            }
        }
        n--;
    }
    for (int i = 0; i < b ;i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}