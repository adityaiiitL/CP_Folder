#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        long int n,k;
        cin>>n>>k;
        if(k!=0)cout<<n%k<<endl;
        else cout<<n<<endl;
    }
    return 0;
}