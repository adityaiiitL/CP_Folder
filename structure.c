#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char fullname[54];
}
aditya,prabhav,tejas;
int main()
{
    aditya.id=1;
    prabhav.id=2;
    tejas.id=3;
    strcpy(aditya.fullname,"Aditya Agrawal");
    strcpy(prabhav.fullname,"Prabhav Agrawal");
    strcpy(tejas.fullname,"Tejas Taneja");
    aditya.marks=34;
    prabhav.marks=45;
    tejas.marks=46;
    aditya.fav_char='a';
    prabhav.fav_char='b';
    tejas.fav_char='c';
    printf("Aditya's full name is %s, ID is %d, his marks obtained are %d and his favourite character is %c.\n",aditya.fullname,aditya.id,aditya.marks,aditya.fav_char);
    printf("Prabhav's full name is %s, ID is %d, his marks obtained are %d and his favourite character is %c.\n",prabhav.fullname,prabhav.id,prabhav.marks,prabhav.fav_char);
    printf("Tejas's fullname is %s, ID is %d, his marks obtained are %d and his favourite character is %c.\n",tejas.fullname,tejas.id,tejas.marks,tejas.fav_char);
    return 0;
}