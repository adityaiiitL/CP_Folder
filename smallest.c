#include<stdio.h>
#include<math.h>
int smallest(int a[],int n)
{
    if(n==1)return a[0];
    return fmin(a[n-1],smallest(a,n-1));
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("%d\n",smallest(a,n));
    return 0;
}