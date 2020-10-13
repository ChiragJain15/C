#include<stdio.h>

int main()
{
    FILE *fr;
    char text[1024];
    fr = fopen("binFile.bin","rb");
    fread(text,sizeof(char), 1024, fr);
    printf("%s", text);
    fclose(fr);

}