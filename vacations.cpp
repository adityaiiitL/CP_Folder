// Author: Aditya Agrawal //
#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#define debug(x)			 	\
    for(auto element:x)      	\
        cout<<element<<" ";  	\
        cout<<endl;
#define debugp(x)          	\
    for(auto element:x)    		\
        cout<<element.first<<" "<<element.second<<endl
#define db(x) cout<< #x<<"="<<x<<'\n'
#define makegraph(adj, num)   	\
for (int i=0;i<num;i++) 	\
{                             	\
    int x,y;                 	\
    cin>>x>>y;            		\
    adj[x].push_back(y);      	\
    adj[y].push_back(x);      	\
}
typedef long int li;
typedef long long int lli;
typedef unsigned long long int ull;
typedef long double ld;
typedef vector<pair<lli,lli>> vp;
typedef map<lli,lli> mi;
typedef map<char,lli> mc;
typedef vector<lli> vec;
typedef vector<string> vs;
typedef stack<lli> stk;
#define intmax 2147483647
#define intmin -2147483648
#define pi 3.141592653589
#define mod 1000000007
#define mdl 998244353
#define fo return
#define br cout<<endl
#define nah cout<<"NO"<<endl
#define yeah cout<<"YES"<<endl
#define all(a) a.begin(),a.end()
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define gsort(x) sort(all(x),greater<lli>())
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
#define gcd __gcd

void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}

void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}
lli n;
vec v;
lli dp[101][2][2];
lli func(lli i,bool i1,bool i2){
    if(i==n)fo 0;
    if(dp[i][i1][i2]!=-1)fo dp[i][i1][i2];
    if(v[i]==0){
        fo dp[i][i1][i2]=1+func(i+1,0,0);
    }
    if(v[i]==1){
        if(i2)fo dp[i][i1][i2]=1+func(i+1,0,0);
        else fo dp[i][i1][i2]=min(func(i+1,0,1),1+func(i+1,0,0));
    }
    if(v[i]==2){
        if(i1)fo dp[i][i1][i2]=1+func(i+1,0,0);
        else fo dp[i][i1][i2]=min(func(i+1,1,0),1+func(i+1,0,0));
    }
    if(v[i]==3){
        if(i1 and i2)fo dp[i][i1][i2]=1+func(i+1,0,0);
        else if(i1 and !i2){
            fo dp[i][i1][i2]=min(func(i+1,0,1),1+func(i+1,0,0));
        }
        else if(!i1 and i2){
            fo dp[i][i1][i2]=min(func(i+1,1,0),1+func(i+1,0,0));
        }
        else if(!i1 and !i2){
            lli a=1+func(i+1,0,0),b=func(i+1,1,0),c=func(i+1,0,1);
            lli mn=min(a,b);
            mn=min(mn,c);
            fo dp[i][i1][i2]=mn;
        }
    }
}
void solve(){

    memset(dp,-1,sizeof(dp));
    cin>>n;
    f(i,0,n){lli h;cin>>h;v.pb(h);}
    cout<<func(0,0,0)<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    lli t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}