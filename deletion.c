#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    //taking input of index whose element is to be deleted...
    int k;
    scanf("%d",&k);
    //assigning the values to adjacent (before) places...
    for(int i=k;i<n;i++)a[i]=a[i+1];
    //decreasing the size of array...
    n--;
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}