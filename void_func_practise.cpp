#include<bits/stdc++.h>
using namespace std;
#define li long int
void solve()
{
    li n;
    cin>>n;
    if(n%2==0)cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}