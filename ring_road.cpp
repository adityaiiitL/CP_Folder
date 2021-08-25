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
// #define map map<lli,lli>
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
map<pair<lli,lli>,lli>m;
lli cost1,cost2;
lli c=0,k;
lli n;
bool f=false;
void dfs(lli v){

    vis[v]=true;
    c++;
    if(c==n and f==false)k=v,f=true;
    for(auto i:adj[v]){

        if(vis[i] and i==1 and v==k){
            if(m.find(mp(v,i))==m.end()){
                cost1+=m[mp(i,v)];
            }
        }
        if(!vis[i]){

            if(m.find(mp(v,i))==m.end()){
                cost1+=m[mp(i,v)];
            }
            dfs(i);
        }
    }
}
void dfs1(lli v){

    vis[v]=true;
    c++;
    if(c==n and f==false)k=v,f=true;
    for(auto i:adj[v]){

        if(vis[i] and i==1 and v==k){
            if(m.find(mp(i,v))==m.end()){
                cost2+=m[mp(v,i)];
            }
        }
        if(!vis[i]){

            if(m.find(mp(i,v))==m.end()){
                cost2+=m[mp(v,i)];
            }
            dfs1(i);
        }
    }
}
void solve(){

    cin>>n;
    lli a=n;
    while(a--){
        lli x,y,c;
        cin>>x>>y>>c;
        m[mp(x,y)]=c;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(1);
    c=0;
    f=false;
    memset(vis,0,sizeof(vis));
    dfs1(1); 
    // cout<<cost1<<' '<<cost2<<endl;
    cout<<min(cost1,cost2)<<endl;
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