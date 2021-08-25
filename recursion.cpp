#include<bits/stdc++.h>
using namespace std;
int prod(int a[],int l,int r)
{
    if(l>r)return 1;
    return a[l]*prod(a,l+1,r);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //product of elements of array using recursion
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<prod(a,0,n-1);
    return 0;
}