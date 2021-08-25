#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1 && a[i]!=0)odd++;
            if(a[i]%2==0 && a[i]!=0) even++;
        }
        if(even>odd)cout<<odd<<endl;
        else cout<<even<<endl;
    }

    return 0;
}