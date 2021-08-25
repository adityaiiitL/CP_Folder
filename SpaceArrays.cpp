#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t;
    cin>>t;
    test:
    while(t--)
    {
        long int n;
        cin>>n;
        long int a[n];
        for(long int i=0;i<n;i++)cin>>a[i];
        long int sum=0;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]>i+1)
            {
                cout<<"Second\n";
                goto test;
            }
        }
        for(long int i=0;i<n;i++)
        {
            sum+=(i+1)-a[i];
        }
        if(sum%2==0)cout<<"Second\n";
        else cout<<"First\n";
    }
    return 0;
}