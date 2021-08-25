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
// 1-step, 2-step or 3-step jump
// li dp[10001];
li jump(li n){

    // if(n==0||n==1)return 1;
    // if(n==2)return 2;
    // if(n==3)return 4;
    // if(dp[n]!=-1)return dp[n];
    // li temp=jump(n-1)+jump(n-2)+jump(n-3);
    // dp[n]=temp;
    // return temp;
    li dp[n+1]={0};
    dp[0]=1,dp[1]=1,dp[2]=2;
    for(li i=3;i<=n;i++){

        // for(li j=0;j<i;j++){
        //     dp[i]+=dp[j];
        // }
        dp[i]+=dp[i-1];
    }
    return dp[n];
}
void solve(){

    li n;
    cin>>n;
    cout<<jump(n)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // memset(dp,-1,sizeof(dp));
    solve();
    return 0;
}