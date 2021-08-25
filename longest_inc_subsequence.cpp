// Author: Aditya Agrawal //
#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#define debug(x)			 \
    for(auto element:x)      \
        cout<<element<<" ";  \
        cout<<endl;
#define debugp(x)          \
    for(auto element:x)    \
        cout<<element.first<<" "<<element.second<<endl
#define db(x) cout<< #x<<"="<<x<<'\n'
#define makegraph(adj, num)   \
for (int i=0;i<num;i++) \
{                             \
    int x,y;                 \
    cin>>x>>y;            \
    adj[x].push_back(y);      \
    adj[y].push_back(x);      \
}
typedef long long int lli;
typedef unsigned long long int ull;
typedef long double ld;
#define intmax 2147483647
#define intmin -2147483648
#define pi 3.141592653589
#define mod 1000000007
#define mdl 998244353
#define fo return
#define all(a) a.begin(),a.end()
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define cntleadz(x) __builtin_clz(x)
#define cnttrailz(x) __builtin_ctz(x)
#define cntpop(x) __builtin_popcount(x)
#define binparity(x) __builtin_parity(x)
#define mp(a,b) make_pair(a,b)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'

void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}

void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}

// Longest Increasing Subsequence O(n^2)-method
vec v;
lli n;
lli dp[101][101];
lli lis(lli i,lli k){

    if(i==n){
        fo 0;
    }
    if(dp[i][k]!=-1)fo dp[i][k];
    if(v[i]>k){

        lli a=1+lis(i+1,v[i]);
        lli b=lis(i+1,k);
        fo dp[i][k]=max(a,b);
    }
    fo dp[i][k]=lis(i+1,k);
}
void solve(){

    cin>>n;
    f(i,0,n){

        lli h;
        cin>>h;
        v.pb(h);
    }
    lli ans=intmin;
    f(i,0,n-1){

        memset(dp,-1,sizeof(dp));
        lli temp=1+lis(i+1,v[i]);
        ans=max(ans,temp);
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t=1;
    // cin>>t;
    while(t--){
        
        solve();
    }
    fo 0;
}