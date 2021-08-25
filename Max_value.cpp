#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        cout<<max(a[n-1]*a[n-2]+a[n-1]-a[n-2],a[0]*a[1]+a[1]-a[0])<<endl;
    }
    return 0;
}