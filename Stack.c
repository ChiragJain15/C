#include <stdio.h>
#include <stdbool.h>

bool isEmpty(int top);
void pop(int arr[], int *top);
void push(int arr[], int *top);
void display(int arr[],int top);


void display(int arr[], int top)
{
    printf("Stack: ");
    for (int i = top; i >= 0; i--)
    {
            printf("%d ",arr[i]);
    }
    printf("\n");
}

void push(int arr[], int *top)
{   
    if(*top == 9)
    {
        printf("Stack Overflow \n");
        return;
    }
    *top = *top + 1;
    printf("Enter element to be pushed \n");
    scanf("%d", &arr[*top]);
}

void pop(int arr[], int *top)
{
    if(isEmpty(*top) == false)
    {
        arr[*top] = 0;
        *top = *top - 1;
    }
    else 
        printf("Stack Is Empty \n");
}

bool isEmpty(int top)
{
    if (top == -1)
        return true;
    return false;     
}



int main()
{
    int arr[10], opt = 0, top = -1;
    while(1)
    {    
        printf("Enter 1 To Push \n");
        printf("Enter 2 For Pop\n");
        printf("Enter 3 To display \n");
        printf("Enter 4 To Exit \n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: push(arr, &top);break;
            case 2: pop(arr, &top);break;
            case 3: display(arr, top);break;
            case 4: return 0;break;
            default: printf("Invalid Input \n");return 0;
        }
    }
}