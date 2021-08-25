#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m;
    cin>>n>>m;
    vector<long long int>v;
    for(int i=0;i<n;i++)
    {
        long long int h;
        cin>>h;
        v.push_back(h);
    }
    sort(v.begin(),v.end());
    long long int low=0,high=v[n-1],mid,sum=0,highest=0;
    while(low<=high)
    {
        sum=0;
        mid=(low+high)/2;
        int it=lower_bound(v.begin(),v.end(),mid)-v.begin();
        for(int i=it;i<n;i++)
        {
            sum+=v[i]-mid;
        }
        if(sum==m)
        {
            highest=mid;
            break;
        }
        if(sum<m)high=mid-1;
        else
        {
            low=mid+1;
            highest=max(mid,highest);
        }
    }
    cout<<highest;
    return 0;
}