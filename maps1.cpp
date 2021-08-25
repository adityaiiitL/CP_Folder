#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        m[h]++;
    }
    int counter=0;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if((*i).second>k)counter++;
    }
    cout<<counter;
    return 0;
}