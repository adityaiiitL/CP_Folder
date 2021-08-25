#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        m[h]++;
    }
    int ans=0;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if((*i).first!=1 && (*i).first!=0&& (((*i).first)*((*i).first))%abs(1-((*i).first))==0)
        {
            int temp=((*i).first)*((*i).first)/1-((*i).first);
            if(m[temp]!=(*i).first)ans+=m[temp];
        }
    }
    cout<<ans<<endl;
    return 0;
}