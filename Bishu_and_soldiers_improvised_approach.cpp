#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        v[i]=h;
    }
    sort(v.begin(),v.end());
    int q;cin>>q;
    while(q--)
    {
        int p;cin>>p;
        auto itr=upper_bound(v.begin(),v.end(),p);
        itr--;
        int k=itr-v.begin();
        int sum=0;
        for(int i=0;i<=k;i++)sum+=v[i];
        cout<<k+1<<" "<<sum<<endl;
    }
    return 0;
}