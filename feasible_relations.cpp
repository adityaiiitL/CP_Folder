// Author: Aditya Agrawal //
#include<bits/stdc++.h>
using namespace std;

// #pragma GCC target ("avx2")
// #pragma GCC optimize ("O3")
// #pragma GCC optimize ("unroll-loops")

#define debug(x)			 	\
    for(auto element:x)      	\
        cout<<element<<" ";  	\
        cout<<endl;
#define debugp(x)          	    \
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
vector<lli>adj[300005];
bool vis[300005];
lli cs_arr[300005];
lli cc;
void dfs(lli v){

    vis[v]=true;
    cs_arr[v]=cc;
    for(auto i:adj[v]){

        if(!vis[i]){

            dfs(i);
        }
    }
}
void solve(){

    memset(adj,0,sizeof(adj));
    memset(vis,0,sizeof(vis));
    memset(cs_arr,0,sizeof(cs_arr));
    lli n,m;
    cin>>n>>m;
    vp v;
    while(m--){

        lli x,y;
        string s;
        cin>>x>>s>>y;
        if(s=="!=")v.pb(mp(x,y));
        else {
            adj[x].pb(y);
            adj[y].pb(x);
        }
    }   
    cc=0;
    f(i,i,n+1){
        if(!vis[i]){
            cc++;
            dfs(i);
        }
    }
    f(i,0,v.size()){
        if(cs_arr[v[i].first]==cs_arr[v[i].second]){
            nah;
            fo;
        }
    }
    yeah;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}