#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int counter=0;
        for(int i=0;i<n-1;i++)
        {
            int mx=max(a[i],a[i+1]),mn=min(a[i],a[i+1]);
            if(mx>2*mn)
            {
                while(2*mn<mx)
                {
                    mn*=2;
                    counter++;
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}