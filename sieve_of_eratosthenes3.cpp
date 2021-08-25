#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int a[n],mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    int b[mx+1]={0};
    for(int i=2;i<=mx;i++)
    {
        if(b[i]==0)
        {
            for(int j=i;j<=mx;j+=i)b[j]++;
        }
    }
    for(int i=0;i<n;i++)cout<<b[a[i]]<<" ";
    return 0;
}