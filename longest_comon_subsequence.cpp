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
li dp[101][101];
li func(string x, string y,li i1,li i2){

    if(i1<0||i2<0)return 0;
    if(dp[i1][i2]!=-1)return dp[i1][i2];
    if(x[i1]==y[i2]){
        return dp[i1][i2]=1+func(x,y,i1-1,i2-1);
    }
    else{
        return dp[i1][i2]=max(func(x,y,i1-1,i2),func(x,y,i1,i2-1));
    }   
}
void solve(){

    string x,y;
    cin>>x>>y;
    cout<<func(x,y,x.size()-1,y.size()-1);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp,-1,sizeof(dp));
    solve();
    return 0;
}