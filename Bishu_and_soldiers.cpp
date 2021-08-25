#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int h;cin>>h;
        v.push_back(h);
    }
    sort(v.begin(),v.end());
    int q;cin>>q;
    while(q--)
    {
        int p;cin>>p;
        int low=0,high=n-1,mid;
        int counter=0,sum=0;
        bool flag=false;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(p>=v[mid]&&(p<v[mid+1]||mid==n-1))
            {
                flag=true;
                break;
            }
            if(p<v[mid])high=mid-1;
            else low=mid+1;
        }
        if(flag)
        {
            for(int i=0;i<=mid;i++)
            {
                counter++;
                sum+=v[i];
            }
        }
        cout<<counter<<" "<<sum<<endl;
    }
    return 0;
}