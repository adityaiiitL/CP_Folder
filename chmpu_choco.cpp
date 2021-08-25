#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int h;cin>>h;
            s.insert(h);
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int h;cin>>h;
            v.push_back(h);
        }
        set<int>s1;
        for(int i=0;i<n;i++)
        {
            auto it=lower_bound(s.begin(),s.end(),v[i]);
            auto itr=upper_bound(s.begin(),s.end(),v[i]);
            if((*it)==v[i])
            {
                s1.insert(v[i]);
                s.erase(it);
            }
            if((*it)>=v[i])
            {
                
            }
        }
    }
    return 0;
}