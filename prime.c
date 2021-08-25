#include<stdio.h>
int main()
{
    int a,b,counter=0,i,j;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)break;
        }
        if(j==i)counter++;
    }
    printf("%d\n",counter);
    return 0;
}