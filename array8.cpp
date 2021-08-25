#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=2;
    int ans=2;
    int pd=a[1]-a[0];
    int curr=2;
    while(i<n)
    {
        if(a[i]-a[i-1]==pd)
        {
            curr++;
        }
        else
        {
            pd=a[i]-a[i-1];
            curr=2;
        }
        i++;
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
    return 0;
}