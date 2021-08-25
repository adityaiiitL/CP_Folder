#include<stdio.h>
int binary_search(int a[],int low,int high,int key)
{
    if(low>high)return -1;
    int mid=(low+high)/2;
    if(a[mid]==key)return mid;
    if(a[mid]>key)binary_search(a,low,mid-1,key);
    else binary_search(a,mid+1,high,key);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int key;
    scanf("%d",&key);
    int flag=binary_search(a,0,n-1,key);
    if(flag<0)printf("Element not found !!\n");
    else printf("Element found at %dth index\n",flag);
    return 0;
}