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
typedef int lli;
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
#define nah cout<<"No"<<endl
#define yeah cout<<"Yes"<<endl
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
void google(int t) {cout<<"Case #"<<t<<": ";}
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

// 100*50*50*50*50=625000000
lli n,m;
char arr[51][51];
lli dist[51][51];
bool vis[51][51];
lli dx[4]={-1,0,1,0};
lli dy[4]={0,1,0,-1};
bool isValid(lli x,lli y){
    if(x<0 or y<0 or x>n-1 or y>m-1)fo false;
    if(vis[x][y] or arr[x][y]=='#')fo false;
    fo true;
}
void bfs(lli x,lli y){

    queue<pii>q;
    q.push(mp(x,y));
    dist[x][y]=0;
    vis[x][y]=1;
    while(q.size()){
        lli curx=q.front().first;
        lli cury=q.front().second;
        q.pop();
        f(i,0,4){
            if(isValid(curx+dx[i],cury+dy[i])){
                lli newx=curx+dx[i];
                lli newy=cury+dy[i];
                dist[newx][newy]=dist[curx][cury]+1;
                vis[newx][newy]=1;
                q.push(mp(newx,newy));
            }
        }
    }
}
void solve(){

    cin>>n>>m;
    f(i,0,n){
        f(j,0,m)cin>>arr[i][j];
    }
    f(i,0,n){
        f(j,0,m){
            if(arr[i][j]=='B'){
                if(i!=0 and arr[i-1][j]=='.')arr[i-1][j]='#';
                if(i!=n-1 and arr[i+1][j]=='.')arr[i+1][j]='#';
                if(j!=0 and arr[i][j-1]=='.')arr[i][j-1]='#';
                if(j!=m-1 and arr[i][j+1]=='.')arr[i][j+1]='#';
            }
        }
    }
    memset(vis,0,sizeof(vis));
    memset(dist,0,sizeof(dist));
    if(arr[n-1][m-1]!='#')bfs(n-1,m-1);   
    f(i,0,n){
        f(j,0,m){
            if(arr[i][j]=='G' and !dist[i][j]){
                nah;fo;
            }
            if(arr[i][j]=='B' and dist[i][j]){
                nah;fo;
            }
        }
    }
    yeah;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}