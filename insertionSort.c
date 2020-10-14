#include <stdio.h>

int insertionSort(int a[], int n);

int insertionSort(int a[], int n)
{
   int key;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        int j = i - 1;
        while(a[j] > key && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
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