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
li bino(li n,li r){

    li dp[r+1]={0};
    dp[0]=1;
    dp[1]=n;
    for(li i=2;i<=r;i++){

        dp[i]=(dp[i-1]*(n-i+1))%mdl;
    }
    return dp[r];
}
void solve(){

    li n,r;
    li a[801]={1};
    for(li i=1;i<=800;i++){
        a[i]=i*a[i-1];
    }
    cin>>n>>r;
    if(n<r){
        cout<<0<<endl;
        return;
    }
    cout<<(bino(n,r)/a[r])%mdl<<endl;
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