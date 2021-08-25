#include<stdio.h>
#include<string.h>
#include"structures1.h"
int main()
{
    struct student record[3];
    strcpy(record[0].name,"Aditya Agrawal");
    strcpy(record[1].name,"Prabhav Agrawal");
    strcpy(record[2].name,"Gaurav Singh Bhandari");
    record[0].id=1;
    record[1].id=2;
    record[2].id=3;
    record[0].marks=18;
    record[1].marks=17;
    record[2].marks=19;
    for(int i=0;i<3;i++)
    {
        printf("Name: %s\n",record[i].name);
        printf("Id: %d\n",record[i].id);
        printf("Marks: %d\n",record[i].marks);
        printf("-----------------------\n");
    }
    return 0;
}