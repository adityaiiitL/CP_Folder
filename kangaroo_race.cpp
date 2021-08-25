#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void solve(){
    
    lli n,x,y;
    cin>>n>>x>>y;
    lli dp[n+1];
    for(lli i=0;i<x;i++)dp[i]=0;
    dp[x]=1;
    for(lli i=x+1;i<=n;i++){
        for(lli j=x;j<=y;j++){
            if(i>=j)dp[i]=(dp[i]+dp[i-j])%mdl;
            else break;
        }
    }
    cout<<dp[n]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}