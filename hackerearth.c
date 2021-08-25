#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i1=1,i2=0;
    while(1)
    {
        for(int i=1;i<=i1;i++)
        {
            i2++;
            if(i2==n)
            {
                printf("Patlu\n");
                return 0;
            }
        }
        for(int i=1;i<=2*i1;i++)
        {
            i2++;
            if(i2==n)
            {
                printf("Motu\n");
                return 0;
            }
        }
        i1++;
    }
    return 0;
}