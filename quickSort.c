#include <stdio.h>

int partition(int arr[],int first,int last);
void quickSort(int arr[],int first,int last);

int partition(int arr[],int first,int last)
{
    int pivot = arr[last];
    int i = first - 1;
    int temp;
    for (int j = first; j < last ;j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }    
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[last];
    arr[last] = temp;
    return i + 1;
}

void quickSort(int arr[],int first,int last)
{   
    if (first < last)
    {
        int pi = partition(arr, first, last);
        quickSort(arr, first, pi - 1);
        quickSort(arr, pi + 1, last);
    }
    
}

int main()
{
    int num, search;
    printf("Enter Number of Elements \n");
    scanf("%d", &num);
    int arr[num];
    //populating the array
    printf("Populate the array\n");
    for (int i = 0; i < num ; i++)
    {
        scanf("%d",&arr[i]);
    }

    quickSort(arr, 0, num - 1);

    for (int i = 0; i < num ; i++)
    {
        printf("%d",arr[i]);
    }
}