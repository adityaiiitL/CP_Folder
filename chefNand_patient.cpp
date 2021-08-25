#include<bits/stdc++.h>
using namespace std;
bool mycomp(pair<long long int,long long int>p1,pair<long long int,long long int>p2)
{
    if(p1.first==p2.first)return p2.first;
    return p1.first>p2.first;
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
       long long int a[n];
       vector<pair<long long int,long long int>>v;
       for(long long int i=0;i<n;i++)
        {
            cin>>a[i]; 
            pair<long long int,long long int>p;
            p.first=a[i];
            p.second=i;
            v.push_back(p);
        } 
        sort(v.begin(),v.end(),mycomp);
        
        for(long long int i=0;i<n;i++)
        {
            a[v[i].second]=i;
        }
        for(long long int i=0;i<n;i++)cout<<a[i]+1<<" ";
        cout<<endl;
    }
    return 0;
}