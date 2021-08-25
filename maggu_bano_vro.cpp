#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n;cin>>n;
    map<long long int,int>m;
    int mx=0,smallno=INT_MAX;
    for(int i=0;i<n;i++)
    {
        long long int x; int y;
        cin>>x>>y;
        m[x]+=y;
        if(m[x]>mx)
        {
            mx=m[x];
            smallno=x;
        }
        if(m[x]==mx)
        {
            if(x<smallno)smallno=x;
        }
        cout<<smallno<<endl;
    }
    return 0;
}   