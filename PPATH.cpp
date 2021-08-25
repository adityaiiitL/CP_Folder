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
lli spf[100001];
void sieve(){
    f(i,0,100001)spf[i]=0;
    f(i,2,100001){

        if(spf[i]==0){

            for(lli j=i*i;j<100001;j+=i){

                if(spf[j]==0)spf[j]=1;
            }
        }
    }
}
vector<lli>adj[300005];
bool vis[300005];
lli dist[300005];
void bfs(lli v){

    queue<lli>q;
    q.push(v);
    vis[v]=true;
    while(q.size()!=0){

        lli temp=q.front();
        q.pop();
        for(auto i:adj[temp]){

            if(!vis[i]){

                dist[i]=1+dist[temp];
                q.push(i);
                vis[i]=true;
            }
        }
    }
}
bool valid(lli n1,lli n2){

    string s1=to_string(n1),s2=to_string(n2);
    lli c=0;
    f(i,0,s1.size()){
        if(s1[i]!=s2[i])c++;
    }
    if(c==1)fo true;
    fo false;
}
void build(){

    vec v;
    f(i,1001,10000){
        if(spf[i]==0)v.pb(i);
    }
    f(i,0,v.size()-1){
        f(j,i+1,v.size()){
            if(valid(v[i],v[j])){
                adj[v[i]].pb(v[j]);
                adj[v[j]].pb(v[i]);
            }
        }
    }
}
void solve(){

    memset(vis,0,sizeof(vis));
    memset(dist,0,sizeof(dist));
    lli l,r;
    cin>>l>>r;
    dist[l]=0;
    bfs(l);
    cout<<dist[r]<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    build();
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}