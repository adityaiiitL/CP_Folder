#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
li knap(li w[],li v[],li n,li i,li wt,li dp[101][101]){


    if(i==n||wt==0)return 0;
    if(dp[i][wt]!=-1)return dp[i][wt];
    li ans1,ans2;
    if(wt>=w[i]){
        li temp=v[i]+knap(w,v,n,i+1,wt-w[i],dp);
        ans1=temp;
    }
    ans2=knap(w,v,n,i+1,wt,dp);
    if(wt>=w[i]){

        dp[i][wt]=max(ans1,ans2);
    }
    else dp[i][wt]=ans2;
    return dp[i][wt];
    
}
void solve(){

    li n,wt;
    cin>>n>>wt;
    li w[n],v[n];
    for(li i=0;i<n;i++)cin>>w[i];
    for(li i=0;i<n;i++)cin>>v[i];
    li dp[101][101];
    memset(dp,-1,sizeof(dp));
    cout<<knap(w,v,n,0,wt,dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}