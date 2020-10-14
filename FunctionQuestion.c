#include <stdio.h>

//function prototype 
int printMenu();
int triangle();
int sqaure();
int circle();
int rectangle();
 
int main()
{
    int opt, area;
    //function call to print menu
    switch (printMenu())
    {
        case 1: area = triangle();break;
        case 2: area = square();break;
        case 3: area = circle();break;
        case 4: area = rectangle();break;
        default: printf("Invalid Input \n");break;
    }
    //printing the result
    printf("area is %d", area);
}

//----------//**FUNCTION DEFINITIONS**//-----------//


//function to print the menu and input choice
int printMenu()
{
    int opt;
    printf("Enter 1 for triangle \n");
    printf("Enter 2 for square \n");
    printf("Enter 3 for circle \n");
    printf("Enter 4 for rectangle \n");
    scanf("%d", &opt);
    return opt;
    
}

//function to calculate the area for a triangle
int triangle()
{
    int baseLength, height;
    //enter your code here
}

//function to calculate the area for a square
int square()
{
    int sideLength;
    //enter your code here
}

////function to calculate the area for a rectangle
int rectangle()
{
    int length, bredth;
    //enter your code
}

////function to calculate the area for a circle
int circle()
{
    int pi = 3.14, radius;
    //enter your code
}