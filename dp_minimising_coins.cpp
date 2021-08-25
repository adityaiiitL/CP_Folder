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

    li n,sum;
    cin>>n>>sum;
    vector<li>c(n);
    for(li i=0;i<n;i++)cin>>c[i];
    vector<li>dp(sum+1,0);
    dp[0]=0;
    for(li i=1;i<=sum;i++){

        li minimum=INT_MAX;
        for(li j=0;j<n;j++){

            if(c[j]>i)continue;
            // if(dp[i-c[j]]==0)continue;
            minimum=min(minimum,1+dp[i-c[j]]);
            dp[i]=minimum;
        }
    }
    if(dp[sum]!=0)cout<<dp[sum]<<endl;
    else cout<<-1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}