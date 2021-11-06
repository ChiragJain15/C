/*
insert 
delete
linear search
binary search
display
reverse
bubble sort
*/


#include <stdio.h>

int size = 0;

#define MAX 10

void insert(int *arr, int pos, int value);
void delete(int *arr, int pos);
void display(int *arr);
int lsearch(int *arr,int ele);
int bsearch(int *arr,int ele);
void reverse(int *arr);
void sort(int *arr);


void insert(int *arr, int pos, int value)
{
    for (int i = size; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
}

void display(int *arr)
{
    for (int i = 0; i < MAX; i++)
        printf(" %d , ", arr[i]);
    printf("\n");
        
}

int lsearch(int *arr, int ele)
{
    for (int i = 0; i < MAX; i++)
    {
        if (ele == arr[i])
            return i + 1;
    }
    return -1;
}

void reverse(int *arr)
{
    int temp;
    for (int i = 0; i < MAX / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[MAX - i - 1];
        arr[MAX - i - 1] = temp;
    }
}

void sort(int *arr)
{
    int temp;
    for (int j = 0; j < MAX - 1; j++)
    {
        for (int i = j; i < MAX - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10] = {0};
    int opt = 0, value, pos, choice, ele;
    while (opt == 0)
    {
        printf("Enter 1 to insert values into the array\n");
        printf("Enter 2 to display the array\n");
        printf("ENter 3 to use linear search algo\n");
        printf("Enter 4 to reverse the array\n");
        printf("Enter 5 to bubble sort \n");
        printf("");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("Enter value to be added:\n");
                    scanf("%d", &value);
                    printf("Enter position where value is to be added:\n");
                    scanf("%d", &pos);
                    insert(arr, pos, value);break;
            case 2: display(arr);break;
            case 3: printf("Enter element to be searched\n");
                    scanf("%d", &ele);
                    pos = lsearch(arr, ele);
                    if (pos >= 0)
                        printf("element found at pos %d", pos);
                    else
                        printf("Element not found\n");
                    break; 
            case 4: reverse(arr);break;
            case 5: sort(arr);break;
            default: printf("Invalid Choice\n");break;
        }
        printf("Enter 1 to exit or 0 to do more");
        scanf("%d", &opt);

    }
}