#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        v[i]=h;
        if(h==1)count++;
    }
    while(q--)
    {
        int t,i;
        cin>>t>>i;
        if(t==1)
        {
            if(v[i-1]==1)count--;
            else count++;
            v[i-1]=1-v[i-1];
        }
        else
        {
            if(i<=count)cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}