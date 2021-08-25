#include<bits/stdc++.h>
using namespace std;
bool myCompare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<p2.first;
}
int main()
{
    int n;cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        pair<int,int>p;
        p.first=h;
        p.second=i;
        v.push_back(p);
    }
    int x;cin>>x;
    sort(v.begin(),v.end(),myCompare);
    for(auto i=v.begin();i!=v.end();i++)
    {
        if((*i).first==x)
        {
            i--;
            cout<<(*i).second<<endl;
            break;
        }
    }
    return 0;
}