#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t;cin>>t;
    test:
    while(t--)
    {
        long int a[10];
        for(int i=0;i<10;i++)cin>>a[i];
        long int k;cin>>k;
        for(int i=9;i>=0;i--)
        {
            if(a[i]!=0)
            {
                k-=a[i];
                if(k==0)
                {
                    for(int j=i-1;j<=0;j--)
                    {
                        if(a[j]!=0)
                        {
                            cout<<j+1<<endl;
                            goto test;
                        }
                    }
                }
                else if(k<0)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}