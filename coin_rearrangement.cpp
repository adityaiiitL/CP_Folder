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

    li n,x;
    cin>>n>>x;
    vector<li>dp(x+1,0);
    vector<li>c(n);
    for(li i=0;i<n;i++)cin>>c[i];
    dp[0]=1;
    for(li i=1;i<=x;i++){

        for(li j=0;j<n;j++){

            if(c[j]>i)continue;
            dp[i]=(dp[i]+dp[i-c[j]])%mdl;
        }
    }
    cout<<dp[x]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}