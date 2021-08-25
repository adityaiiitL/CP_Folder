#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
// Memoization approach (0-1 knapsack)part-1
li dp[101][101];
bool func(vector<li>v,li n,li x){

    if(n==0&&x==0)return true;
    if(n==0&&x!=0)return false;
    if(x==0&&n!=0)return true;
    if(dp[n-1][x]!=-1)return dp[n-1][x];
    if(x>=v[n-1]){
        return dp[n-1][x]=(func(v,n-1,x-v[n-1])|func(v,n-1,x));
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