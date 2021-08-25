#include<bits/stdc++.h>
using namespace std;
bool sorted(int a[],int n)
{
    if(n==1)return true;
    bool restarray=sorted(a+1,n-1);
    if(a[0]<a[1]&&restarray)return true;
    return false;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sorted(a,n);
    return 0;
}