#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<long int>v;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        v.push_back(h);
    }
    sort(v.begin(),v.end(),greater<int>());
    long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i]*(i+1);
    }
    cout<<sum<<endl;
    return 0;
}