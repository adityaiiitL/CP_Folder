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
li func(string x, string y,li i1, li i2,li dp[101][101]){

    if(i1<0||i2<0)return 0;
    if(dp[i1][i2]!=-1)return dp[i1][i2];
    if(x[i1]==y[i2]){

        return dp[i1][i2]=1+func(x,y,i1-1,i2-1,dp);
    }
    else{
        return dp[i1][i2]=max(func(x,y,i1-1,i2,dp),func(x,y,i1,i2-1,dp));
    }
}
void solve(){

    string s;
    cin>>s;
    li n=0;
    while(1){

        string s1;
        li a=n;
        while(a>0){
            
            s1+=a%2+'0';
            a/=2;
        }
        if(n==0)s1="0";
        reverse(s1.begin(),s1.end());
        li dp[101][101];
        memset(dp,-1,sizeof(dp));
        if(func(s,s1,s.size()-1,s1.size()-1,dp)<s1.size()){
            cout<<s1<<endl;
            return;
        }
        else n++;
    }
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