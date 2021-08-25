#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int counter=0;
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[0])counter++;
        }
        cout<<n-counter-1<<endl;
    }
    return 0;
}