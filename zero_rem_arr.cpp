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
#define debugp(x)          	    \
    for(auto element:x)    		\
        cout<<element.first<<" "<<element.second<<endl
#define db(x) cout<< #x<<"="<<x<<'\n'
#define makegraph(adj, num)   	\
for (int i=0;i<num;i++) 	    \
{                             	\
    int x,y;                 	\
    cin>>x>>y;            		\
    adj[x].push_back(y);      	\
    adj[y].push_back(x);      	\
}
void google(int t) {cout<<"Case #"<<t<<": ";}
int mod_add(int a,int b,int m) {a=a%m;b=b%m;return (((a+b)%m)+m)%m;}
int mod_mul(int a,int b,int m) {a=a%m;b=b%m;return (((a*b)%m)+m)%m;}
int mod_sub(int a,int b,int m) {a=a%m;b=b%m;return (((a-b)%m)+m)%m;}
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

void solve(){

    lli n,k;
    cin>>n>>k;
    vec v(n);
    in(v);
    mi m;
    lli mx=intmin;
    f(i,0,n){if(v[i]%k==0){continue;}m[k-v[i]%k]++;mx=max(mx,m[k-v[i]%k]);}
    lli ans=0;
    for(auto i:m){
        if(i.second==mx){
            ans=(i.second-1)*k*1ll+i.first+1;
        }
    }
    cout<<ans<<endl;
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