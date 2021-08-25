#include<stdio.h>
int main()
{
    int n;
    do
    {
        scanf("%d",&n);
        if(n<0)printf("Are you a dumbfuck?\n");
        else printf("Great, factorial of %d is ",n);
    } 
    while(n<0);
    int fact=1;
    for(int i=2;i<=n;i++)fact*=i;
    printf("%d\n",fact);
    
    return 0;
}