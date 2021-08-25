#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int h;cin>>h;
            v[i]=h;
            m[h]++;
        }
        int maxm=0;
        for(auto i=m.begin();i!=m.end();i++)
        {
            maxm=max(maxm,(*i).second);
        }
        if(m.size()==maxm)cout<<m.size()-1<<endl;
        else if(m.size()<maxm)
        {
            if(maxm-m.size()>=1)cout<<m.size()<<endl;
            else cout<<m.size()-1<<endl;
        }
        else cout<<maxm<<endl;
    }
    return 0;
}