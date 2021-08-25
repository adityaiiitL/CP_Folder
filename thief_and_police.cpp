#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define lli long long int
#define ld long double
#define f(i,k,n) for(lli i=k;i<n;i++)
#define endl '\n'
void solve(){

    lli n,m;
    cin>>n>>m;
    lli a,b;
    cin>>a>>b;
    lli x,y;
    cin>>x>>y;
    lli dt=abs(n-a)+abs(m-b);
    lli dp=max(abs(n-x),abs(m-y));
    if(dp>=dt)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}