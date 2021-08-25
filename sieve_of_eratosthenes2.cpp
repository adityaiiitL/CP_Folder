#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // to print all the prime factors of a number N
    int n;cin>>n;
    int a[100]={0};
    for(int i=2;i<=n;i++)a[i]=i;
    for(int i=2;i<=n;i++)
    {
        if(a[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(a[j]==j)a[j]=i;
            }
        }
    }
    while(n!=1)
    {
        cout<<a[n]<<" ";
        n/=a[n];
    }
    return 0;
}