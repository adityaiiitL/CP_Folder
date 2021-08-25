#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
// Top- Down Approach
void solve(){

    li wt,n;
    cin>>wt>>n;
    vector<li>w(n),v(n);
    for(li i=0;i<n;i++)cin>>w[i];
    for(li i=0;i<n;i++)cin>>v[i];
    li dp[n+1][wt+1];
    for(li i=0;i<=n;i++){
        for(li j=0;j<=wt;j++){
            if(i==0||j==0)dp[i][j]=0;
        }
    }
    for(li i=1;i<=n;i++){

        for(li j=1;j<=wt;j++){

            if(w[i-1]<=j){
                
                dp[i][j]=max(v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][wt]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}