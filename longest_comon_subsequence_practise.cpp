#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
li dp[101][101];
li lcs(string x,string y,li a,li b){

    if(a<0||b<0)return 0;
    if(dp[a][b]!=-1)return dp[a][b];
    if(x[a]==y[b]){

        return dp[a][b]=1+lcs(x,y,a-1,b-1);
    }
    else return dp[a][b]=max(lcs(x,y,a-1,b),lcs(x,y,a,b-1));
}
void solve(){

    string x,y;
    cin>>x>>y;
    cout<<lcs(x,y,x.size()-1,y.size()-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp,-1,sizeof(dp));
    solve();
    return 0;
}