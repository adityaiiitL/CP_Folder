#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;cin>>t;
    while(t--)
    {
        long long int s;cin>>s;
        long long int q[s];
        for(long long int i=0;i<s;i++)cin>>q[i];
        long long int sum=0;
        for(long long int i=0;i<s;i++)
        {
            long long int e;cin>>e;
            long long int l[e];
            for(long long int j=0;j<e;j++)
            {
                cin>>l[j];
                sum+=l[j];
            }
            sum-=q[i]*(e-1);
        }
        cout<<sum<<endl;
    }
    return 0;
}