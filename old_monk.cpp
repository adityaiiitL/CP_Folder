#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        int low=0,high=n-1;
        int diff=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[low]<=b[high])
            {
                diff=max(diff,high-low);
            }
            if(a[mid]<b[mid])
            {
                low=mid-1;
            }
            else
            {
                high=mid+1;
            }
        }
        cout<<diff<<endl;
    }
    return 0;
}  