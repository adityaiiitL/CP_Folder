#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int ones_count=0,count=0;
        int even_freq=0,odd_freq=0;
        for(auto i=m.begin();i!=m.end();i++)
        {
            if((*i).second>1)
            {
                count=max(count,(*i).second);
            }
            if((*i).second==1)ones_count++;
        }
        if(count/2<ones_count)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}