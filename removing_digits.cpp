#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
li dp[10001];
li func(li n){

    dp[0]=0;
    dp[1]=1;
    
}
void solve(){

    li n;
    cin>>n;
    // string s=to_string(n);
    li a=n,count=0;
    while(a>0){
        
        string s=to_string(a);
        li mx=INT_MIN;
        for(li i=0;i<s.size();i++){

            li temp=s[i]-'0';
            mx=max(mx,temp);
        }
        a-=mx;
        count++;
        // s=to_string(a);
    }
    cout<<count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp,0,sizeof(dp));
    solve();
    return 0;
}