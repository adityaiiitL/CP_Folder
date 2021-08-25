#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        v[i]=h;
    }
    sort(v.begin(),v.end());
    int mex=1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==mex)mex++;
    }
    cout<<mex<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}