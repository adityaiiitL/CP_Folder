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

lli dp[11][11][11];
string s;
lli func(lli i,lli p1,lli p2){
    if(dp[i][p1][p2]!=-1)fo dp[i][p1][p2];
    if(i==10)fo 0;
    lli rem1=(12-i)/2-1,rem2=(11-i)/2;
    if(p1-p2>rem2 or p2-p1>rem1){
        fo 0;
    }
    if(i&1){
        if(s[i]=='1')fo dp[i][p1][p2]=1+func(i+1,p1,p2+1);
        if(s[i]=='0')fo dp[i][p1][p2]=1+func(i+1,p1,p2);
        if(s[i]=='?'){
            fo dp[i][p1][p2]=min(1+func(i+1,p1,p2+1),1+func(i+1,p1,p2));
        }
    }
    else{
        if(s[i]=='1')fo dp[i][p1][p2]=1+func(i+1,p1+1,p2);
        if(s[i]=='0')fo dp[i][p1][p2]=1+func(i+1,p1,p2);
        if(s[i]=='?'){
            fo dp[i][p1][p2]=min(1+func(i+1,p1+1,p2),1+func(i+1,p1,p2));
        }
    }
}
void solve(){

    memset(dp,-1,sizeof(dp));
    cin>>s;
    bool f=true;
    f(i,0,10){
        if(s[i]!='0'){
            f=false;
            break;
        }
    }
    if(f)cout<<10<<endl;
    else cout<<func(0,0,0)<<endl;
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