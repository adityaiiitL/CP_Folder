#include<stdio.h>
int main()
{
    long int n,n1;
    scanf("%ld",&n);
    n1=n;
    int i=1,sum=0,counter=0;
    while(n>0)
    {
        n/=10;
        counter++;
    }
    if(counter!=10)
    {
        printf("Illegal ISBN\n");
        return 0;
    }
    while(n1>0)
    {
        sum+=i*(n1%10);
        n1/=10;
        i++;
    }
    if(sum%11==0)printf("Legal ISBN\n");
    else printf("Illegal ISBN\n");
    return 0;
}