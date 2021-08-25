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
typedef vector<pair<string,lli>> vp;
typedef map<lli,lli> mi;
typedef map<string,lli> ms;
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
lli dist[300005],mx=intmin;
void dfs(lli v){

    vis[v]=true;
    for(auto i:adj[v]){

        if(!vis[i]){
            dist[i]=1+dist[v];
            mx=max(dist[i],mx);
            dfs(i);
        }
    }
}
void solve(){

    lli n;
    cin>>n;
    vector<string>v;
    ms m;
    while(n--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        f(i,0,s1.size())if(s1[i]-'a'<0)s1[i]+=32;
        f(i,0,s3.size())if(s3[i]-'a'<0)s3[i]+=32;
        if(m[s1]==0)v.pb(s1),m[s1]++;
        if(m[s3]==0)v.pb(s3),m[s3]++;
        lli x,y;
        f(i,0,v.size()){
            if(v[i]==s1)x=i;
            if(v[i]==s3)y=i;
        }
        adj[x].pb(y);
        adj[y].pb(x);
    }
    lli k;
    f(i,0,v.size()){
        if(v[i]=="polycarp"){
            k=i;
            break;
        }
    }
    dist[k]=0;
    dfs(k);
    cout<<mx+1<<endl;
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