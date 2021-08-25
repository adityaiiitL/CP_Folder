#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        for(int j=l;j<=r;j++)m[j]++;
    }
    int ans=-1;
    int mx_int=INT_MIN;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(mx_int<(*i).second)
        {
            mx_int=(*i).second;
        }
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if((*i).second==mx_int)
        {
            cout<<(*i).first;
            break;
        }
    }
    return 0;
}
// 5
// 1 4
// 2 5    1  2  3  4  5  6  7  8  9
// 3 6    1  1  1  1  0 -1 -1 -1 -1
// 4 8    1  2  3  4  4  3  2  1  0   
// 5 7