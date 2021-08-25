#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define all(v) v.begin(),v.end()
// Top-down Apporoach (0-1Knapsack)part-3
void solve(){

    li n,x;
    cin>>n>>x;
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    sort(all(v),greater<lli>());
    li dp[n+1][x+1];
    for(li i=0;i<=n;i++){

        for(li j=0;j<=x;j++){
            
            if(j==0)dp[i][j]=1;
            if(i==0&&j!=0)dp[i][j]=0;
        }
    }
    for(li i=1;i<=n;i++){

        for(li j=1;j<=x;j++){

            if(v[i-1]<=j){
                dp[i][j]=dp[i-1][j-v[i-1]]+dp[i-1][j];
            }
            else dp[i][j]=dp[i-1][j];
            // cout<<dp[i][j]<<endl;
        }
    }
    // cout<<dp[1][2]<<endl;
    // cout<<dp[2][2]<<endl;
    cout<<dp[n][x]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}