#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int n, int key)
{
    int i=0,s=n;
    while(i<=s)
    {
        int mid=(i+s)/2;
        if(key==a[mid])return mid;
        else if(key<a[mid])s=mid-1;
        else i=mid+1;
    }
    return -1;
}
//we can also use this STL--> binary_search(a,a+n,k) 
int main()
{
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>key;
    cout<<binarysearch(a,n,key)<<endl;
    return 0;
}