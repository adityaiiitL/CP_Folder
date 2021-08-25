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
//  0-1 Knapsack (Top-down approach) part-1
void solve(){

    li n,x;
    cin>>n>>x;
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    li dp[n+1][x+1];
    dp[0][0]=1;
    for(li i=0;i<=n;i++){
        for(li j=0;j<=x;j++){
            if(i==0&&j!=0)dp[i][j]=0;
            if(j==0&&i!=0)dp[i][j]=1;
        }
    }
    for(li i=1;i<=n;i++){
        for(li j=1;j<=x;j++){
            if(v[i-1]<=j)dp[i][j]=(dp[i-1][j-v[i-1]]|dp[i-1][j]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    if(dp[n][x])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}