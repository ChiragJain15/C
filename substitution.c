#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        printf("Invalid usage \n");
        return 1;   
    }
    int length = strlen(argv[1]);
    if (length !=26)
    {
        printf("Invali key");
        return 2;
    }
    char* text;
    text = (char*)malloc(10000 * sizeof(char));
    scanf("%[^\n]%*c", text);
    //printf("%s",text);
    int l = strlen(text);
    //printf("%d",l);
    realloc(text, (l + 1) * sizeof(char));
    for (int i = 0; i < l ; i++)
    {
        if (*(text + i) >= 'a' && *(text + i) <= 'z')
        {
            int num = (int)*(text + i) - 'a';
            *(text + i) = tolower(argv[1][num]);
        }
        else if (*(text + i) >= 'A' && *(text + i) <= 'Z')
        {
            int num = (int)*(text + i) - 'A';
            *(text + i) = toupper(argv[1][num]);
        }
    }
    printf("%s",text);
    free(text);
}
