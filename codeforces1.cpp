#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n],j=0;
        for(int i=0;i<n;i++)cin>>a[i];
        while(k--)
        {
            for(int i=0;i<n-1;i++)
            {
                if(a[i]<a[i+1])
                {
                    b[j]=a[i];
                    j++;
                    break;
                }
            }
        }

    }
    return 0;
}