#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    test:
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]%k!=0)
            {
                int j;
                for(j=0;j<n;j++)
                {
                    int temp=a[i]+a[j];
                    if(temp%k==0)
                    {
                        break;
                    }
                }
                if(j==n-1)
                {
                    cout<<"NO"<<endl;
                    goto test;
                }
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}