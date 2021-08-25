#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)printf(" ");
        for(int j=n-i;j>=0;j--)printf("%d",j%10);
        for(int j=1;j<=n-i;j++)printf("%d",j%10);
        printf("\n");
    }
    for(int i=n;i>1;i--)
    {
        for(int j=0;j<=i;j++)printf(" ");
        for(int j=n-i+1;j>=0;j--)printf("%d",j%10);
        for(int j=1;j<=n-i+1;j++)printf("%d",j%10);
        printf("\n");
    }
    return 0;
}