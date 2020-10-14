#include <stdio.h>

void merge(int a[], int firt, int mid, int last);
void mergeSort(int a[], int first, int last);

void merge(int a[],int first, int mid, int last)
{
    int size1, size2;
    size1 = mid - first + 1;
    size2 = last - mid;
    int b[size1], c[size2];
    for (int i = 0; i < size1; i++)
        b[i] = a[first + i];
    for (int i = 0; i < size2; i++)
        c[i] = a[mid + i + 1];

    int i = 0,j = 0 ,k = first;
    while (i < size1 && j < size2)
    {
        if (b[i] > c[j])
        {
            a[k] = c[j];
            j++;
        }
        else
        {
            a[k] = b[i];
            i++;
        }
        k++;   
    }    
    while (i < size1)
    {
        a[k] = b[i];
        k++;
        i++;
    }
    while (j < size2)
    {
        a[k] = c[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int first, int last)
{
    if(first < last)
    {
        int mid = (first + last) / 2;
        mergeSort (a, first, mid);
        mergeSort (a, mid + 1, last);

        merge(a, first, mid, last);
    }
}

int main()
{
    int  n;
    printf("Enter the number of elements \n");
    scanf("%d", &n);
    int a[n];
    
    //populating the array by taking input from user
    printf("Populate the array \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    //calling merge sort function 
    mergeSort(a, 0, n - 1);
    
    //Printing the result    
    printf("The sorted array is : \n");
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
}