#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fr;
    int counter = 0;
    char word[20];
    fr = fopen("textfile.txt","r");
    while(1)
    {
        fscanf(fr, "%s", word);
        if (strncmp(word,"Harry", 5) == 0)
            counter++;
        if(getc(fr) == EOF)
            break;
    } 
    printf("harry is written %d times", counter);
    printf("\n");

}