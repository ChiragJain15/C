#include <stdio.h>

//function prototypes
int bubbleSort(int a[],int n);
int binarySearch(int a[],int n, int ele);

//function definitions
int bubbleSort(int a[], int n)
{
    int swap, temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            swap = 1;
            if (a[j] > a[j + 1])
            {
               temp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = temp;
               swap = 0; 
            }
        }
        if (swap == 1)
            break;
    }
}
int binarySearch(int a[],int n, int ele)
{
    int ul, ll, mid;
    ul = n - 1;
    ll = 0;
    mid = n/2;
    while(1)
    {
        if(a[mid] == ele)
        {
            return 1;
        }
        else if(ele > a[mid])
        {
            ll = mid;
            mid = (ll + ul) / 2;
        }
        else if(ele < a[mid])
        {
            ul = mid;
            mid = (ll + ul) / 2;
        }
        if ((ul - ll) == 1)
            return 0;
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
    //implementing bubble sort function    
    bubbleSort(a, n); 
    //entering number to be searched    
    printf("Enter element to be searched \n");
    scanf("%d", &ele);
    //chechking for element using binary search
    int found = binarySearch(a, n, ele);
    //outputting the result if the element is found or not found
    if (found == 1)
        printf("Element Found \n");
    else if (found == 0)
        printf("Element Not Found \n");    
    return 0;
}