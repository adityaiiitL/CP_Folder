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
#define makegraph(adj, num)     \
for (int i=0;i<num;i++)         \
{                               \
    int x,y;                    \
    cin>>x>>y;                  \
    adj[x].push_back(y);        \
    adj[y].push_back(x);        \
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
lli n;
vec v1,v2;
lli dp[1000001][2];
lli func1(lli i,bool flag){

    if(i==n)return 0;
    if(dp[i][flag]!=-1)return dp[i][flag];
    if(!flag){

        lli temp=v1[i]+func1(i+1,1);
        lli imp=func1(i+1,0);
        return dp[i][flag]=max(imp,temp);
    }
    else{

        return dp[i][flag]=max(v2[i]+func1(i+1,0),func1(i+1,1));
    }
}
lli func2(lli i,bool flag){

    if(i==n)return 0;
    if(dp[i][flag]!=-1)return dp[i][flag];
    if(flag){

        lli temp=v1[i]+func2(i+1,0);
        lli imp=func2(i+1,1);
        return dp[i][flag]=max(imp,temp);
    }
    else{

        return dp[i][flag]=max(v2[i]+func2(i+1,1),func2(i+1,0));
    }
}

void solve(){

    cin>>n;
    f(i,0,n){

        lli h;
        cin>>h;
        v1.pb(h);
    }
    f(i,0,n){

        lli h;
        cin>>h;
        v2.pb(h);
    }
    memset(dp,-1,sizeof(dp));
    lli a=func1(0,0);
    memset(dp,-1,sizeof(dp));
    lli b=func2(0,0);
    cout<<max(a,b)<<endl;
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