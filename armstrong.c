#include<stdio.h>
#include<math.h>
int main()
{
    int n,counter=0;
    scanf("%d",&n);
    int a=n,c=n;
    while(n>0)
    {
        n/=10;
        counter++;
    }
    int sum=0;
    while(a>0)
    {
        int b=a%10;
        sum+=pow(b,counter);
        a/=10;
    }
    if(sum==c)printf("YES\n");
    else printf("NO\n");
    return 0;
}