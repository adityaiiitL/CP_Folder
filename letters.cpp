#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m;
    cin>>n>>m;
    vector<long long int>v1(n),v2(m),v3(n);
    long long int s=0;
    for(long long int i=0;i<n;i++)
    {
        long long int h;
        cin>>h;
        s+=h;
        v1[i]=h;
        v3[i]=s;
    }
    for(long long int i=0;i<m;i++)
    {
        long long int h;
        cin>>h;
        v2[i]=h;
    }
    long long int k=0;
    for(long long int i=0;i<m;i++)
    {
        long long int it=lower_bound(v3.begin(),v3.end(),v2[i])-v3.begin();
        if(it==0)k=0;
        else k=v3[it-1];
        cout<<it+1<<" "<<v2[i]-k<<endl;;
    }
    return 0;
}