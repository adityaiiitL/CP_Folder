#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
// Top-down approach

li fib(li n,vector<li>&dp){

    if(n<2)return n;
    if(dp[n]!=-1)return dp[n];
    li ans=fib(n-1,dp)+fib(n-2,dp);
    // Storage step
    dp[n]=ans;
    return ans;
}
void solve(){

    li n;
    cin>>n;
    vector<li>dp(n+1,-1);
    cout<<fib(n,dp)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}