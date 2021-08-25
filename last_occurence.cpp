#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        v.push_back(h);
    }
    int i=upper_bound(v.begin(),v.end(),x)-v.begin();
    i--;
    if(i>=0&&v[i]==x)cout<<i;
    else cout<<"FO\n";
    return 0;
}