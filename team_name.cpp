#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        map<string,vector<char>>m;
        for(int i=0;i<n;i++)
        {
            string s;cin>>s;
            int n=s.size();
            vector<char>v;
            v.push_back(s[0]);
            m[s.substr(1,n-1)]=v;
        }
        int counter=0;
        for(auto i=m.begin();i!=m.end();i++)
        {
            
        }
    }
    return 0;
}