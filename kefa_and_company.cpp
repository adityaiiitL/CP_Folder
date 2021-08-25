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

    lli n,d;
    cin>>n>>d;
    vp v;
    f(i,0,n){
        lli x,y;
        cin>>x>>y;
        v.pb(mp(x,y));
    }
    sort(all(v));
    vec a;
    f(i,0,n)a.pb(v[i].first);
    // debugp(v);
    vec pre;
    lli s=0;
    f(i,0,n){
        s+=v[i].second;
        pre.pb(s);
    }
    lli ans=intmin;
    f(i,0,n){
        lli j=lower_bound(all(a),v[i].first+d)-a.begin();
        // db(a[j]);
        if(j==n){
            if(i==0)ans=max(ans,pre[n-1]);
            else ans=max(ans,pre[n-1]-pre[i-1]);
        }
        else {
            if(i==0)ans=max(ans,pre[j-1]);
            else ans=max(ans,pre[j-1]-pre[i-1]);
        }
        // db(ans);
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

    lli t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}