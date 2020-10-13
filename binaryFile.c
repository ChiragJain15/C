#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fo;
    char* text;
    fo = fopen("binFile.bin","wb");
    printf("Enter Text: \n");
    scanf("%[^\n]%*c", text);
    fwrite(text,sizeof(char), strlen(text), fo);
    fclose(fo);
}