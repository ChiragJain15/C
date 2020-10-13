#include <stdio.h>

//function prototypes
int insertionSort(int a[],int n);

//function definitions
int insertionSort(int a[], int n)
{
    int min, pos, temp;
    for (int i = 0; i < n; i++)
    {
        min = a[i];
        pos = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < min)
            {
                pos = j;
                min = a[j];
            }
        }
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }    
}


int main()
{
    int  n, ele;
    printf("Enter the number of elements \n");
    scanf("%d", &n);
    int a[n];
    //populating the array by taking input from user
    printf("Populate the array \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    //implementing insertion sort function    
    insertionSort(a, n); 
    for (int i = 0; i < n; i++)
        printf("%d ",a[i]);    
    return 0;
}