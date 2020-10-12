#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int power(int a, int b);
int power(int a, int b)
{
    if ( b == 0)
    {
        return 1;
    }
    for (int i = 1 ; i < b ;i++)
    {
        a *= 10;
    }
    return a;
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Invalid Usage \n");
        return 1;
    }
    int key = 0;
    int length = strlen(argv[1]);
    for (int i = 0; i < length; i++)
    {
        if ((int)argv[1][i] < 48 || (int)argv[1][i] > 57 )
        {
            printf("invalid usage \n");
            return 2;
        }
    }
    unsigned char* text;
    text = (char*)malloc(102400 * sizeof(char));
    scanf("%[^\n]%*c", text);
    //printf("%s",text);
    int l = strlen(text);
    realloc(text, (l + 1) * sizeof(char));
    for (int i = 1; i <= length; i++)
    {  
        key += power(10,(length - i)) * (argv[1][i - 1] - 48);
    }
    //printf("%d", key);
    key = key % 26;
    for (int i = 0; i < l; i++)
    {
        if(*(text + i) >= 'a' && *(text + i) <= 'z')
        {
            *(text + i) += key;
            if(*(text + i) > 'z')
            {
                int num = (int)*(text + i) - (int)'z' - 1;
                *(text + i) = 'a' + num;
            }

        }
        if(*(text + i) >= 'A' && *(text + i) <= 'Z')
        {
            *(text + i) += key;
            if(*(text + i) > 'Z')
            {
                int num = (int)*(text + i) - (int)'Z' - 1;
                *(text + i) = 'A' + num;
            }
        }
    }printf("%s",text);
        
}