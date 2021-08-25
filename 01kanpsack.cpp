#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
// Memoization
li knap(li wt,li n,vector<li>w,vector<li>v,li dp[101][101]){

    if(n==0||wt==0)return 0;
    if(dp[n-1][wt]!=-1)return dp[n-1][wt];
    if(wt>=w[n-1]){

        return dp[n-1][wt]=max(v[n-1]+knap(wt-w[n-1],n-1,w,v,dp),knap(wt,n-1,w,v,dp));
    }
    else return dp[n-1][wt]=knap(wt,n-1,w,v,dp);
}
void solve(){

    li wt,n;
    cin>>wt>>n;
    vector<li>w(n),v(n);
    for(li i=0;i<n;i++)cin>>w[i];
    for(li i=0;i<n;i++)cin>>v[i];
    li dp[101][101];
    memset(dp,-1,sizeof(dp));
    cout<<knap(wt,n,w,v,dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}