#include<bits/stdc++.h>
using namespace std;
#define li long int
void solve()
{
    li n;
    cin>>n;
    vector<li>v;
    for(li i=0;i<n;i++)
    {
        li h;cin>>h;
        v.push_back(h);
    }
    sort(v.begin(),v.end());
    li mex=1;
    for(li i=0;i<n;i++)
    {
        if(v[i]==mex)mex++;
    }
    cout<<mex<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}