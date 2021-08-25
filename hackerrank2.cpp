#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>m;
    vector<int>brr(m);
    for(int i=0;i<m;i++)cin>>brr[i];
    vector<int>c;
    for(int i=0;i<m;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(brr[i]==arr[j])
            {
                arr[j]=-1;
                break;
            }
        }
        if(j==n)
        {
            c.push_back(brr[i]);
        }
    }
    sort(c.begin(),c.end());
    for(auto i=c.begin();i!=c.end();i++)
    {
        cout<<*(i)<<" ";
    }
    return 0;
}