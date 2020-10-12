#include <stdio.h>


int main()
{
    int num, search;
    printf("Enter Number of Elements \n");
    scanf("%d", &num);
    int arr[num];
    printf("Populate the array\n");
    for (int i = 0; i < num ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number to be searched\n");
    scanf("%d",&search);
    for (int i = 0; i < num; i++)
    {
        if (search == arr[i])
        {
            printf("Element found at position %d\n", i + 1);
            return 0;
        }     
    }
    printf("Element not found \n");
    return 0;
}
