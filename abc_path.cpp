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
typedef pair<lli,lli> pii;
typedef map<lli,lli> mi;
typedef map<char,lli> mc;
typedef map<string,lli> ms;
typedef vector<lli> vec;
typedef vector<string> vs;
typedef vector<char> vc;
typedef set<lli> si;
typedef set<char> sc;
typedef set<string> ss;
typedef stack<lli> stk;

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
#define endl '\n'
#define gcd __gcd

const int intmax=2147483647;
const int intmin=-2147483648;
const int mod=1000000007;
const int mod2=998244353;
const int pi=3.141592653589;

lli pow_itr(lli a,lli b){
    lli p=1;
    while(b){
        if(b&1==1)p*=a;
        a*=a;
        b=b>>1;
    }
    return p;
}
void google(int t) {cout<<"Case "<<t<<": ";}
lli mod_add(lli a,lli b,lli m) {a=a%m;b=b%m;return (((a+b)%m)+m)%m;}
lli mod_mul(lli a,lli b,lli m) {a=a%m;b=b%m;return (((a*b)%m)+m)%m;}
lli mod_sub(lli a,lli b,lli m) {a=a%m;b=b%m;return (((a-b)%m)+m)%m;}

lli lcm(lli a,lli b) {return (a*b)/gcd(a,b);}
void divisors(lli n,vec &fact){
    f(i,2,sqrt(n)+1){
        if(n%i==0){
            if(i*i==n)fact.pb(i);
            else {fact.pb(i);fact.pb(n/i);}
        }
    }
    sort(all(fact));
}
void in(vec &v){f(i,0,v.size())cin>>v[i];}
void in1(vec &v,lli n){f(i,0,n){lli h;cin>>h;v.pb(h);}}
void out(vec v){f(i,0,v.size())cout<<v[i]<<' ';cout<<endl;}

vector<lli>adj[30005];
bool vis[30005];
lli dist[30005];
void dfs(lli v){

    vis[v]=true;
    for(auto i:adj[v]){

        if(!vis[i]){

            // cout<<v<<" - "<<i<<endl;
            dist[i]=dist[v]+1;
            dfs(i);
        }
    }
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
    while(1){
        
        memset(adj,0,sizeof(adj));
        memset(vis,0,sizeof(vis));
        memset(dist,0,sizeof(dist));
        lli h,w;
        cin>>h>>w;
        if(h==0 or w==0)break;
        char a[h][w];
        f(i,0,h){
            f(j,0,w)cin>>a[i][j];
        }
        vec v(h*w+1);
        f(i,0,h){
            f(j,0,w){
                if(i!=h-1 and a[i+1][j]-a[i][j]==1 and !v[w*(i)+j+1] and !v[w*(i+1)+j+1]){adj[w*(i)+j+1].pb(w*(i+1)+j+1);adj[w*(i+1)+j+1].pb(w*(i)+j+1);v[w*(i+1)+j+1]++;v[w*(i)+j+1]++;}
                if(j!=w-1 and a[i][j+1]-a[i][j]==1 and !v[w*(i)+j+1] and !v[w*(i)+j+2]){adj[w*(i)+j+1].pb(w*(i)+j+2);adj[w*(i)+j+2].pb(w*(i)+j+1);v[w*(i)+j+2]++;v[w*(i)+j+1]++;}
                if(i!=h-1 and j!=w-1 and a[i+1][j+1]-a[i][j]==1 and !v[w*(i)+j+1] and !v[w*(i+1)+j+2]){adj[w*(i)+j+1].pb(w*(i+1)+j+2);adj[w*(i+1)+j+2].pb(w*(i)+j+1);v[w*(i+1)+j+2]++;v[w*(i)+j+1]++;}
                if(i!=0 and j!=w-1 and a[i-1][j+1]-a[i][j]==1 and !v[w*(i)+j+1] and !v[w*(i-1)+j+2]){adj[w*(i)+j+1].pb(w*(i-1)+j+2);adj[w*(i-1)+j+2].pb(w*(i)+j+1);v[w*(i-1)+j+2]++;v[w*(i)+j+1]++;}
                if(i!=0 and a[i-1][j]-a[i][j]==1 and !v[w*(i)+j+1] and !v[w*(i-1)+j+1]){adj[w*(i)+j+1].pb(w*(i-1)+j+1);adj[w*(i-1)+j+1].pb(w*(i)+j+1);v[w*(i-1)+j+1]++;v[w*(i)+j+1]++;}
                if(j!=0 and a[i][j-1]-a[i][j]==1){adj[w*i+j+1].pb(w*i+j and !v[w*(i)+j+1] and !v[w*(i)+j+1]);adj[w*i+j].pb(w*i+j);adj[w*i+j].pb(w*i+j+1);v[w*(i)+j+1]++;v[w*(i)+j]++;}
                if(i!=0 and j!=0 and a[i-1][j-1]-a[i][j]==1){adj[w*(i)+j+1].pb(w*(i-1)+j);adj[w*(i-1)+j].pb(w*(i)+j+1);v[w*(i-1)+j]++;v[w*(i)+j+1]++;}
                if(i!=h-1 and j!=0 and a[i+1][j-1]-a[i][j]==1){adj[w*(i)+j+1].pb(w*(i+1)+j);adj[w*(i+1)+j].pb(w*(i)+j+1);v[w*(i+1)+j]++;v[w*(i)+j+1]++;}
            }   
        }
        // f(i,0,h){
        //     f(j,0,w)cout<<a[i][j];
        //     br;
        // }
        // for(auto i:adj){
        //     for(auto j:i)cout<<j<<endl;
        // }
        dist[1]=0;
        dfs(1);
        lli mx=intmin;
        for(auto i:dist)mx=max(mx,i);
        google(t);
        cout<<mx+1<<endl;
        t++;
    }
    fo 0;
}