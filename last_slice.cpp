#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long int k;
    cin>>n>>k;
    vector<int>v(n);
    int s=0;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        v[i]=h;
        s+=(i+1)*v[i];
    }
    if(s<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    int low=0,high=n-1,mid,mn=INT_MAX;
    bool flag=true;
    while(low<=high)
    {
        long long int sum=0;
        mid=(low+high)/2;
        for(int i=mid,j=1;i<n;i++,j++)sum+=j*v[i];
        if(sum<k)
        {
            low=mid-1;
        }
        if(sum>=k)
        {
            low=mid+1;
            mn=min(mn,n-mid-1);
        }
    }
    cout<<
    return 0;
}