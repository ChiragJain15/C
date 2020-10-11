#include <stdio.h>

struct student
{
    long int admissionNum;
    char name[30];
}stud;


int main()
{
    FILE *fo;
    int flag = 1;
    fo = fopen("studentRecord.txt","r");
    while (flag == 1)
    {
        printf("Enter admission number for student\n");
        scanf("%ld", &stud.admissionNum);
        fprintf(fo, "%ld \n", stud.admissionNum);
        printf("Enter name of student \n");
        scanf("%s",&stud.name);
        fprintf(fo, "%s \n",stud.name);
        printf("want to enter more ? enter 1  for yes and 0 for no\n");
        scanf("%d",&flag);
    }
    fclose(fo);
}