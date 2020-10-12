#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int* a;
    a = (int*)malloc(1024 * sizeof(int));
    int i = 0, flag = 1;
    while (flag)
    {
        printf("Enter number \n");
        printf("\t\t");
        scanf("%d", a + i);
        printf("press 1 to enter more and 0 to exit \n");
        printf("\t\t");
        scanf("%d", &flag);
        i++;
    }
    realloc(a, i * sizeof(int));

    int num;
    printf("Enter number you want to search for \n");
    scanf("%d", &num);
    
    for (int j = 0; j < i; j++)
    {
        if(num == *(a + j))
        {
            printf("%d found at position  %d \n",num,  j + 1);
            free(a);
            return 0;
        }
    }
    printf("Number not found \n"); 
    free(a);
    return 0;
}