#include<stdio.h>
int main()
{
    int n;
    printf("Give me the size of the hourglass: ");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<i;j++)printf(" ");
            for(int k=n-i;k>=0;k--)printf("%d",k%10);
            for(int k=1;k<=n-i;k++)printf("%d",k%10);
            printf("\n");
        }
        for(int i=n;i>0;i--)
        {
            for(int j=0;j<i-1;j++)printf(" ");
            for(int k=n-i+1;k>=0;k--)printf("%d",k%10);
            for(int k=1;k<=n-i+1;k++)printf("%d",k%10);
            printf("\n");
        }
    }
    else if(n==0)printf("0\n");
    else if(n<0)printf("Invalid input, I need a positive integer as input\n");
    return 0;
}