#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int a[n],b[n];
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(m[b[i]]>0)m[b[i]]++;
    }
    bool flag=false;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if((*i).second>1)
        {
            
        }
    }
    return 0;
}