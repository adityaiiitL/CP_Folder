#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'

// Bottom-up approach
li friend_party(li n){

    vector<li>dp(n+1,-1);
    dp[1]=1; // 1 friend 1 way
    dp[2]=2; // 2 friends 2 ways
    for(li i=3;i<n+1;i++){

        dp[i]=dp[i-1]+(i-1)*dp[i-2];
    } 
    return dp[n];
}
void solve(){

    li n;
    cin>>n;
    cout<<friend_party(n)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){

        solve();
    }
    return 0;
}