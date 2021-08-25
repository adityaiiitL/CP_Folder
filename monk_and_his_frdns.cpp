#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        map<int,int>M;
        for(int i=0;i<n;i++)
        {
            long long int h;cin>>h;
            M[h]++;
        }
        for(long long int i=0;i<m;i++)
        {
            long long int h;cin>>h;
            if(M[h]>0)cout<<"YES\n";
            else cout<<"NO\n";
            M[h]++;
        }
    }
    return 0;
}