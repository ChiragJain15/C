#include <stdio.h>

int main()
{
    FILE *fr;
    char ch;
    fr = fopen("textfile.txt","r");
    while(1)
    {
        ch = getc(fr);
        if(ch == EOF)
            break;
        printf("%c", ch);
    } 
    
}