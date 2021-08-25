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
li dp[1001];
li func(vector<li>&v,li n){

    if(n==0||n==1)return 0;
    if(n==2)return abs(v[2]-v[1]);
    if(dp[n]!=-1)return dp[n];
    li temp=min(func(v,n-1)+abs(v[n]-v[n-1]),func(v,n-2)+abs(v[n]-v[n-2]));
    dp[n]=temp;
    return temp;
}
void solve(){

    li n;
    cin>>n;
    vector<li>v(n+1,0);
    for(li i=1;i<=n;i++)cin>>v[i];
    cout<<func(v,n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp,-1,sizeof(dp));
    solve();
    return 0;
}