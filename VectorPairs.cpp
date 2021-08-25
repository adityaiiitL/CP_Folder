#include<bits/stdc++.h>
using namespace std;
//function to sort pairs according to there first number...
bool myCompare(pair<int,int>p1, pair<int,int>p2)
{
    return p1.first>p2.first;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        //vector storing pairs of array's elements and there indices...
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            pair<int,int>p;
            p.first=a[i];
            p.second=i;
            v.push_back(p);
        }
    //sort vector on the basis of first part of pairs...
        sort(v.begin(),v.end(),myCompare);
    //numbering the sorted elements in array...
        for(int i=0;i<n;i++)
        {
            a[v[i].second]=i;
        }
        for(int i=0;i<n;i++)cout<<a[i]+1<<" ";
        cout<<endl;
    }
    return 0;
}
