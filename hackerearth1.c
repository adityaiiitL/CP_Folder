#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag=0;
    while(1)
    {
        if(n==1)
        {
            flag=1;
            break;
        }
        if(n%2==0)n/=2;
        else n=3*n+1;
    }
    if(flag==1)printf("YES\n");
    else printf("NO\n");
    return 0;
}