#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long int n,e,h,a,b,c;
    cin>>n>>e>>h>>a>>b>>c;
    vector<long int>ans;
    vector<long int>temp;
    for(long int i=0;i<=n;i++)temp.push_back(i);
    long int temp1=0,temp2=0;
    long int o,k;
    for(long int i=0;i<=n;i++)
    {
        temp1=lower_bound(temp.begin(),temp.end(),(2*n-e-2*i))-temp.begin();
        temp2=upper_bound(temp.begin(),temp.end(),(h-3*i))-temp.begin()-1;
        if(temp2<temp1||temp1==n+1)continue;
        if(temp2==n+1&&(temp2+3*i>h))continue;
        if(c>a)
        {
            k=(temp1<(n-i)?temp1:(n-i));
        }
        else
        {
            k=(temp2<(n-i)?temp2:(n-i));
        }
        o=n-k-i;
        if((k+2*i)>=2*n-e&&(k+3*i)<=h)
        {
            ans.push_back(a*o+b*i+c*k);
        }
    }
    if(ans.size()==0)cout<<"-1"<<endl;
    else
    {
        long int final_ans=1e18;
        for(long int i=0;i<ans.size();i++)
        {
            final_ans=min(final_ans,ans[i]);
        }
        cout<<final_ans<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}