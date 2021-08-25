#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    test:
    while(t-->0)
    {
        int n,count=0,m=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)count++;
        }
        int arr[count];
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                arr[m]=n-i-1;
                m++;
            }
        }
        int sum=0;
        for(int i=0;i<count;i++)sum+=arr[i];
        cout<<sum<<endl;
    }
    return 0;
}