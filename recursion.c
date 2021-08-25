#include<stdio.h>
#include<math.h>
// func to find factorial of n recursively
int fact(int n)
{
    if(n==0||n==1)return 1;
    return n*fact(n-1);
}
// func of binary search using recursion
int bin_search(int a[],int l,int h,int key)
{
    int mid=(l+h)/2;
    if(l>h)return -1;
    if(a[mid]==key)return mid;
    if(a[mid]>key)return bin_search(a,l,mid-1,key);
    else return bin_search(a,mid+1,h,key);
}
// func to find smallest element of array recursively
int func1(int a[],int l,int n)
{
    if(l==n)return a[l];
    return fmin(a[l],func1(a,l+1,n));
}
// func to find highest element of array recursively
int func2(int a[],int l,int n)
{
    if(l==n)return a[l];
    return fmax(a[l],func2(a,l+1,n));
}
int main()
{
    int n;
    scanf("%d",&n);
    /*
    printf("%d\n",fact(n));
    */
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    /*
    int key;
    scanf("%d",&key);
    int l=0,h=n-1;
    int ans=bin_search(a,l,h,key);
    if(ans>=0)printf("Element found at %dth index !!\n",ans);
    else printf("Element not found !!\n");
    */
    printf("Smallest element of array is %d\n",func1(a,0,n-1));
    printf("Highest element of array is %d\n",func2(a,0,n-1));
    return 0;
}