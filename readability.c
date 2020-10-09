#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
    float letters = 0, words = 1, sentences = 0, l, s;
    int index;
    char text[1000];
    gets(text);
    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
            sentences ++;
        if (text[i] == ' ')
            words ++;
        if (text[i] >= 'a' && text[i] <= 'z')
            letters++;
        if (text[i] >= 'A' && text[i] <= 'Z')
            letters++;    
        i++;
    }
    l =  letters / (words / 100);
    s = sentences / (words / 100);
    index = round(0.0588 * l - 0.296 * s - 15.8);
    if (index < 1)
    {
        printf("Grade less than 1");
    }
    else if (index >= 1 && index <= 16)
    {
        printf("Grade %d", index);
    }
    else
    {
        printf("Grade 16+");
    }
    printf("\n");
}