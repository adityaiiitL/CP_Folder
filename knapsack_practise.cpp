#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
li knap(vector<li>w,vector<li>c,li n,lli i,li wt,li dp[1001][1001]){

    if(i==n||wt==0)return 0;
    if(dp[i][wt]!=-1)return dp[i][wt];
    li ans1,ans2;
    if(wt>=w[i])ans1=c[i]+knap(w,c,n,i+1,wt-w[i],dp);
    ans2=knap(w,c,n,i+1,wt,dp);
    if(wt>=w[i]){

        return dp[i][wt]=max(ans1,ans2);
    }
    return dp[i][wt]=ans2;
}
void solve(){

    li n,wt;
    cin>>wt>>n;
    vector<li>w(n);
    vector<li>c(n);
    for(li i=0;i<n;i++){
        cin>>c[i];
        cin>>w[i];
    }
    li dp[1001][1001];
    memset(dp,-1,sizeof(dp));
    cout<<knap(w,c,n,0,wt,dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}