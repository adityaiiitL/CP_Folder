#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
li pairs(li n,vector<li>&dp){

    if(n==0||n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    li temp=pairs(n-1,dp)+(n-1)*pairs(n-2,dp);
    // Storage step
    dp[n]=temp;
    return temp;
}
void solve(){

    li n;
    cin>>n;
    vector<li>dp(n+1,-1);
    cout<<pairs(n,dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}