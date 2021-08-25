#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long double s,x,n;
    cin>>s>>x>>n;
    long long int k=s/x;
    vector<int>v(k,x);
    long double sum=x*(k);
    for(long long i=0;i<n;i++)
    {
        long long int t,y;
        cin>>t>>y;
        v[t-1]=y;
        sum=sum-x+y;
    }
    if(sum>=s)cout<<k<<endl;
    else 
    {
        k+=ceil((s-sum)/x);
    }
    cout<<k<<endl;
    return 0;
}