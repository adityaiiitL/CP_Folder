#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,co=0,c1=0,c2=0;
        cin>>n;int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]%3==0)co++;
            if(a[i]%3==1)c1++;
            if(a[i]%3==2)c2++;
        }
        int a1=abs(co-n/3),a2=abs(c1-n/3),a3=abs(c2-n/3);
        if(co==c1&&c1==c2&&c2==co)cout<<0<<endl; 
        else if(co%3==0&&c1%3==0&&c2%3==0)cout<<c2-n/3;
        else 
        {
            cout<<a1+a2+a3-1<<endl;
        }
    }
    return 0;
}