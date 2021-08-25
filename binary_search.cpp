#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cin>>n>>key;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        v.push_back(h);
    }
    auto i=lower_bound(v.begin(),v.end(),key);
    cout<<i-v.begin();
    return 0;
}