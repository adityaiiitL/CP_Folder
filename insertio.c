#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    //taking input in array...
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    //taking input of index and value at which the particular has to be inserted...
    int k,value;
    scanf("%d %d",&k,&value);
    //assigning values to the adjacent (after) places...
    for(int i=n;i>k;i--)a[i]=a[i-1];
    //assigning value at kth position...
    a[k]=value;
    //increasing the size of array...
    n++;
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}