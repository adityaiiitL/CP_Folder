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
lli lcm(lli a,lli b) {return (a*b)/gcd(a,b);}
void in(vec &v){f(i,0,v.size())cin>>v[i];}
void in1(vec &v,lli n){f(i,0,n){lli h;cin>>h;v.pb(h);}}
void out(vec v){f(i,0,v.size())cout<<v[i]<<' ';cout<<endl;}

lli n,m;
vs v;
lli dp[1001][2][2][2][2][2][2][2][2][2][2];
lli func(lli i,bool f0,bool f1,bool f2,bool f3,bool f4,bool f5,bool f6,bool f7,bool f8,bool f9){
    if(dp[i][f0][f1][f2][f3][f4][f5][f6][f7][f8][f9]!=-1){
        fo dp[i][f0][f1][f2][f3][f4][f5][f6][f7][f8][f9];
    }
    if(f0+f1+f2+f3+f4+f5+f6+f7+f8+f9==10){
        fo 0;
    }
    if(f0+f1+f2+f3+f4+f5+f6+f7+f8+f9!=10 and i==n){
        fo intmax;
    }
    lli a=func(i+1,f0,f1,f2,f3,f4,f5,f6,f7,f8,f9);
    f(j,0,m){
        if(v[i][j]=='0')f0=1;
        if(v[i][j]=='1')f1=1;
        if(v[i][j]=='2')f2=1;
        if(v[i][j]=='3')f3=1;
        if(v[i][j]=='4')f4=1;
        if(v[i][j]=='5')f5=1;
        if(v[i][j]=='6')f6=1;
        if(v[i][j]=='7')f7=1;
        if(v[i][j]=='8')f8=1;
        if(v[i][j]=='9')f9=1;
    }   
    lli b=1+func(i+1,f0,f1,f2,f3,f4,f5,f6,f7,f8,f9);
    fo dp[i][f0][f1][f2][f3][f4][f5][f6][f7][f8][f9]=min(a,b);
}
void solve(){

    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    v.clear();
    f(i,0,n){
        string s;
        cin>>s;
        v.pb(s);
    }
    lli ans=func(0,0,0,0,0,0,0,0,0,0,0);
    if(ans==intmax)cout<<-1<<endl;
    else cout<<func(0,0,0,0,0,0,0,0,0,0,0)<<endl;
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