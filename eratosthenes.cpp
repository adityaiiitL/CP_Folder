#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //find number of prime numbers upto 'n'...
    
    int n;cin>>n;
    int a[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)a[j]=1;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)cout<<i<<endl;
    }
    return 0;
}