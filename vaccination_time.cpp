#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    long long int a[n][m];
    map<pair<int,int>,int>M;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            pair<int,int>p;
            p.first=i;
            p.second=j;
            if(a[i][j]%2==1)
            {
                M[p]=a[i][j];
            }
        }
    }
    int q;cin>>q;
    while(q--)
    {
        int l1,r1,l2,r2,count=0;
        cin>>l1>>r1>>l2>>r2;
        for(auto i=M.begin();i!=M.end();i++)
        {
            if(((*i).first).first>=l1-1&&((*i).first).second>=r1-1&&((*i).first).first<=l2-1&&((*i).first).second<=r2-1)
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}