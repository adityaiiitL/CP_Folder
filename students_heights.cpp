#include<bits/stdc++.h>
using namespace std;
bool mycomp(pair<long long int,long long int>p1,pair<long long int,long long int>p2)
{
    return p1.first<p2.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long int h[n],iq[n];
        for(int i=0;i<n;i++)cin>>h[i];
        for(int i=0;i<n;i++)cin>>iq[i];
        vector<pair<long long int,long long int>>v;
        for(int i=0;i<n;i++)
        {
            pair<long long int,long long int>p;
            p.first=h[i];
            p.second=iq[i];
            v.push_back(p);
        }
        sort(v.begin(),v.end(),mycomp);
        int counter=1,maxcount=0;
        bool flag=false;
        for(auto i=v.begin();i!=v.end()-1;i++)
        {
            counter=1;
            long long int temp=(*i).second;
            for(auto j=i+1;j!=v.end();j++)
            {
                if(temp>(*j).second)
                {
                    temp=(*j).second;
                    counter++;
                }
            }
            maxcount=max(maxcount,counter);
        }
        cout<<maxcount<<endl;
    }
    return 0;
}