#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Number of primes between two numbers (Sieve method)
    int a,b;
    cin>>a>>b;
    int arr[100]={0};
    for(int i=2;i<=b;i++)
    {
        for(int j=i*i;j<=b;j+=i)
        {
            arr[j]=1;
        }
    }
    for(int i=a;i<=b;i++)
    {
        if(arr[i]==0)cout<<i<<endl;
    }
    /*int n;cin>>n;
    int a[100]={0};
    for(int i=2;i<=n;i++)
    {
        for(int j=i*i;j<=n;j+=i)
        {
            a[j]=1;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)cout<<i<<endl;;
    }*/
    return 0;
}