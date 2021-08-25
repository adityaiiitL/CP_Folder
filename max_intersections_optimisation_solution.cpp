#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        m[l]++;
        m[r+1]--;
    }
    int mx=0,ans=0;
    for(auto i=m.begin();i!=m.end();i++)
    {
        ans+=(*i).second;
        if(ans>mx)mx=ans;
    }
    cout<<mx<<endl;
    return 0;
}