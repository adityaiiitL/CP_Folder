#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,x,n,m;
    cin>>s>>x>>n;
    m=s/x+1;
    long long int a[m];
    for(int i=0;i<m;i++)a[i]=x;
    for(int i=0;i<n;i++)
    {
        int t,y;
        cin>>t>>y;
        if(t<=m)a[t-1]=y;
    }
    int sum=0;
    for(int i=0;i<m;i++)
    {
        sum+=a[i];
        if(sum>=s)
        {
            cout<<i+1<<endl;;
            break;
        }
    }
    return 0;
}