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

    lli n;
    cin>>n;
    set<lli>s;
    vec v;
    if(n==1){
        f(i,0,6){
            lli x;
            cin>>x;
            s.insert(x);
        }
    }
    if(n==2){
        vec a(6),b(6);
        in(a);
        in(b);
        lli mx=intmin;
        f(i,0,6){
            f(j,0,6){
                s.insert(10*a[i]+b[j]);
                s.insert(10*b[j]+a[i]);
                s.insert(a[i]);
                s.insert(b[j]);
            }
        }
    }
    if(n==3){
        vec a(6),b(6),c(6);
        in(a),in(b),in(c);
        lli mx=intmin;
        f(i,0,6){
            f(j,0,6){
                f(k,0,6){
                    s.insert(100*a[i]+10*b[j]+c[k]);
                    s.insert(100*b[j]+10*a[i]+c[k]);
                    s.insert(100*a[i]+10*c[k]+b[j]);
                    s.insert(100*b[j]+10*c[k]+a[i]);
                    s.insert(100*c[k]+10*b[j]+a[i]);
                    s.insert(100*c[k]+10*a[i]+b[j]);
                    s.insert(10*a[i]+b[j]);
                    s.insert(10*b[j]+a[i]);
                    s.insert(10*c[k]+a[i]);
                    s.insert(10*a[i]+c[k]);
                    s.insert(10*b[j]+c[k]);
                    s.insert(10*c[k]+b[j]);
                    s.insert(a[i]);
                    s.insert(b[j]);
                    s.insert(c[k]);
                }
            }
        }
    }
    s.insert(0);
    for(auto i:s)v.pb(i);
    // out(v);
    f(i,0,v.size()){
        if(i!=v.size()-1 and v[i+1]-v[i]>1){
            cout<<v[i]<<endl;
            fo;
        }
    }
    cout<<v.size()-1<<endl;
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