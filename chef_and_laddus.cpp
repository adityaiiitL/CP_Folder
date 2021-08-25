#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k;
        int a[n],b[k];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int diff=INT_MAX;
        for(int i=0;i<n-k;i++)
        {
            int temp=a[i+k-1]-a[i];
            diff=min(diff,temp);
        }
        cout<<diff<<endl;
    }
    return 0;
}