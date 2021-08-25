#include<stdio.h>
#include<math.h>
int highest(int a[],int n,int i)
{
    if(i==n-1)return a[i];
    return fmax(a[i],highest(a,n,i+1));
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int i=0;
    printf("%d\n",highest(a,n,i));
    return 0;
}