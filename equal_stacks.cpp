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

void solve(){

    lli a,b,c;
    cin>>a>>b>>c;
    vec h1(a),h2(b),h3(c);
    in(h1),in(h2),in(h3);
    reverse(all(h1));
    reverse(all(h2));
    reverse(all(h3));
    vec pre1,pre2,pre3;
    lli s1=0,s2=0,s3=0;
    f(i,0,a){
        s1+=h1[i];
        pre1.pb(s1);
    }
    f(i,0,b){
        s2+=h2[i];
        pre2.pb(s2);
    }
    f(i,0,c){
        s3+=h3[i];
        pre3.pb(s3);
    }
    lli mx=intmin;
    f(i,0,a){
        auto j=lower_bound(all(pre2),pre1[i]);
        auto k=lower_bound(all(pre3),pre1[i]);
        if(pre1[i]==*j and pre1[i]==*k){
            mx=max(mx,*j);
        }
    }
    f(i,0,b){
        auto j=lower_bound(all(pre1),pre2[i]);
        auto k=lower_bound(all(pre3),pre2[i]);
        if(pre2[i]==*j and pre2[i]==*k){
            mx=max(mx,*j);
        }
    }
    f(i,0,c){
        auto j=lower_bound(all(pre1),pre3[i]);
        auto k=lower_bound(all(pre2),pre3[i]);
        if(pre3[i]==*j and pre3[i]==*k){
            mx=max(mx,*j);
        }
    }
    if(mx!=intmin)cout<<mx<<endl;
    else cout<<0<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    lli t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}