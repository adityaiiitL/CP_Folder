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
void solve(){
    
    lli n,m;
    cin>>n>>m;
    lli sum=0;
    vector<lli>v(n);
    for(lli i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    vector<lli>w(m),c(m);
    for(lli i=0;i<m;i++){
        cin>>w[i]>>c[i];
    }
    lli wt=n;
    lli dp[wt+1];
    memset(dp,0,sizeof(dp));
    for(lli i=0;i<m;i++){

        for(lli j=wt;j>=w[i];j--){
            dp[j]=max(dp[j],c[i]+dp[j-w[i]]);
        }
    }
    // cout<<dp[wt]<<endl;
    cout<<sum-dp[wt]<<endl;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}