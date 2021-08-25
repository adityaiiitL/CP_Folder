#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(n==1)cout<<k<<endl;
        else if(n<k)
        {
            int temp=k/n;
            if(k%n==0)cout<<temp<<endl;
            else cout<<temp+1<<endl;
        }
        else
        {
            if(n%k==0)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}