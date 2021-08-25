#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
// Memoization-approach (0-1Knapsack)part-3
li dp[101][101];
li func(vector<li>v,li n,li x){

    if(x==0)return 1;
    if(n==0&&x!=0)return 0;
    if(dp[n-1][x]!=-1)return dp[n-1][x];
    if(x>=v[n-1]){
        return dp[n-1][x]=func(v,n-1,x-v[n-1])+func(v,n-1,x);
    }
    else return dp[n-1][x]=func(v,n-1,x);
}
void solve(){

    li n,x;
    cin>>n>>x;
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    cout<<func(v,n,x);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp,-1,sizeof(dp));
    solve();
    return 0;
}