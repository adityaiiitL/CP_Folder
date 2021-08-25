#include<stdio.h>
#include<string.h>
int main()
{
    char n[1000];
    for(int i=0;i<1000;i++)scanf("%d",n[i]);
    for(int i=0;i<1000;i++)printf("%d",n[i]);
    return 0;
}