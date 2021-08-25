#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            long long int temp=a[i]-i;
            if(temp<0)continue;
            else
            {
                a[i+1]+=temp;
                a[i]=i;
            }
        }
        bool flag=true;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>=a[i+1])
            {
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    } 
    return 0;
}