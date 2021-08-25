#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
#define mdl 1000000007
li dice(li n){

    vector<li>dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    for(li i=2;i<=n;i++){

        for(li j=1;j<=6;j++){

            if(j>i)break;
            dp[i]=(dp[i]%mdl+dp[i-j]%mdl)%mdl;
        }
    }
    return dp[n];
}
void solve(){

    li n;
    cin>>n;
    cout<<dice(n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}