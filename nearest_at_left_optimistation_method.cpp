#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;cin>>n;
    vector<int>v,v1;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        v.push_back(h);
    }
    v1[0]=-1;
    set<int>s;
    s.insert(v[0]);
    for(int i=1;i<n;i++)
    {
        auto low=s.lower_bound(v[i]);
        auto high=s.upper_bound(v[i]);
        if(v[i]==(*low))
        {
            v1[i]=v[i];
            continue;
        }
        if(high==s.end())
        {
            low--;
            v1[i]=(*low);
            s.insert(v[i]);
            continue;
        }
        low--;
        if(abs(v[i]-(*low))>abs(v[i]-(*high)))
        {
            v1[i]=(*high);
        }
        else
        {
            v1[i]=(*low);
        }
        s.insert(v[i]);
    }
    for(int i=0;i<n;i++)cout<<v1[i]<<" ";
    return 0;
}