#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],sum=0,difference=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            difference=0;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    difference=max(j-i,difference);
                }
            }
            sum+=difference;
        }
        cout<<sum<<endl;
    }
    return 0;
}