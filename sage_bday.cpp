#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    vector<int>v1(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int j=n/2; 
    for(int i=0;i<n;i+=2)
    {
        v1[i]=v[j];
        j++;
    }
    int k=0;
    for(int i=1;i<n;i+=2)
    {
        v1[i]=v[k];
        k++;
    }
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        if(v1[i]<v1[i-1]&&v1[i]<v1[i+1])ans++;
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++)cout<<v1[i]<<" ";
    cout<<endl;
    return 0;
}