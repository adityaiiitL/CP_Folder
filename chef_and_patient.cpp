#include<bits/stdc++.h>
using namespace std;
bool mycom(pair<int,int>p1,pair<int,int>p2)
{
    return p1.second>p2.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int a[n];
        for(long long int i=0;i<n;i++)cin>>a[i];
        map<long long int,long long int>m;
        for(long long int i=0;i<n;i++)m[i]=a[i];
        sort(m.begin(),m.end(),mycom);
        for(auto i=m.begin();i!=m.end();i++)
        {
            cout<<(*i).second<<" ";
        }
    }
    return 0;
}