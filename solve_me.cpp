#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;cin>>n;
    int a[n];
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2==1&&a[i]%2==0)sum1+=a[i];
        else sum2+=a[i];
    }
    if(sum1>sum2)cout<<"Yes";
    else cout<<"No";
    return 0;
}