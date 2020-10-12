# include <stdio.h>

int main()
{
    FILE *fo,*fc;
    fo = fopen("studentRecord.txt","r");
    fc = fopen("studentRecordCpy.txt","w");
    char ch;
    while(1)
    {
        ch = fgetc(fo);
        if (ch == EOF)
            break;
        fputc(ch, fc);
    }
    fclose(fo);
    fclose(fc);
}