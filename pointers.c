#include<stdio.h>
int main()
{
    char arr[6]="Hello";
    char *p=&arr[0];
    for(;*p!='\0';p++)
    {
        printf("%c",*p);
    } 
    return 0;
}