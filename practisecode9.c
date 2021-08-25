#include<stdio.h>
int primecheck(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(primecheck(i)&&primecheck(n-i))flag=1;
    }
    if(flag==1)printf("YES\n");
    else printf("NO\n");
    return 0;
}
int primecheck(int n)
{
    if(n<=1)return 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
