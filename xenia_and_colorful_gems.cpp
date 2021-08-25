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
    vec x(a),y(b),z(c);
    in(x);
    in(y);
    in(z);
    sort(all(x));
    sort(all(y));
    sort(all(z));
    lli mn=9223372036854775807;
    f(i,0,a){
        lli j1=lower_bound(all(y),x[i])-y.begin();
        lli j2=lower_bound(all(z),x[i])-z.begin();
        if(j1==b)j1--;
        if(j2==c)j2--;
        lli temp=pow_itr(x[i]-y[j1],2)+pow_itr(x[i]-z[j2],2)+pow_itr(y[j1]-z[j2],2);
        mn=min(mn,temp);
        if(j1!=0){
            temp=pow_itr(x[i]-y[j1-1],2)+pow_itr(x[i]-z[j2],2)+pow_itr(y[j1-1]-z[j2],2);
            mn=min(mn,temp);
            if(j2!=0){
                temp=pow_itr(x[i]-y[j1-1],2)+pow_itr(x[i]-z[j2-1],2)+pow_itr(y[j1-1]-z[j2-1],2);
                mn=min(mn,temp);
            }
        }
        if(j2!=0){
            temp=pow_itr(x[i]-y[j1],2)+pow_itr(x[i]-z[j2-1],2)+pow_itr(y[j1]-z[j2-1],2);
            mn=min(mn,temp);
            if(j1!=0){
                temp=pow_itr(x[i]-y[j1-1],2)+pow_itr(x[i]-z[j2-1],2)+pow_itr(y[j1-1]-z[j2-1],2);
                mn=min(mn,temp);
            }
        }
    }
    f(i,0,b){
        lli j1=lower_bound(all(x),y[i])-x.begin();
        lli j2=lower_bound(all(z),y[i])-z.begin();
        if(j1==a)j1--;
        if(j2==c)j2--;
        lli temp=pow_itr(y[i]-x[j1],2)+pow_itr(y[i]-z[j2],2)+pow_itr(x[j1]-z[j2],2);
        mn=min(mn,temp);
        if(j1!=0){
            temp=pow_itr(y[i]-x[j1-1],2)+pow_itr(y[i]-z[j2],2)+pow_itr(x[j1-1]-z[j2],2);
            mn=min(mn,temp);
            if(j2!=0){
                temp=pow_itr(y[i]-x[j1-1],2)+pow_itr(y[i]-z[j2-1],2)+pow_itr(x[j1-1]-z[j2-1],2);
                mn=min(mn,temp);
            }
        }
        if(j2!=0){
            temp=temp=pow_itr(y[i]-x[j1],2)+pow_itr(y[i]-z[j2-1],2)+pow_itr(x[j1]-z[j2-1],2);
            mn=min(mn,temp);
            if(j1!=0){
                temp=pow_itr(y[i]-x[j1-1],2)+pow_itr(y[i]-z[j2-1],2)+pow_itr(x[j1-1]-z[j2-1],2);
                mn=min(mn,temp);
            }
        }
    }
    f(i,0,c){
        lli j1=lower_bound(all(x),z[i])-x.begin();
        lli j2=lower_bound(all(y),z[i])-y.begin();
        if(j1==a)j1--;
        if(j2==b)j2--;
        lli temp=pow_itr(z[i]-x[j1],2)+pow_itr(z[i]-y[j2],2)+pow_itr(x[j1]-y[j2],2);
        mn=min(mn,temp);
        if(j1!=0){
            temp=pow_itr(z[i]-x[j1-1],2)+pow_itr(z[i]-y[j2],2)+pow_itr(x[j1-1]-y[j2],2);
            mn=min(mn,temp);
            if(j2!=0){
                temp=pow_itr(z[i]-x[j1-1],2)+pow_itr(z[i]-y[j2-1],2)+pow_itr(x[j1-1]-y[j2-1],2);
                mn=min(mn,temp);
            }
        }
        if(j2!=0){
            temp=temp=pow_itr(z[i]-x[j1],2)+pow_itr(z[i]-y[j2-1],2)+pow_itr(x[j1]-y[j2-1],2);
            mn=min(mn,temp);
            if(j1!=0){
                temp=pow_itr(z[i]-x[j1-1],2)+pow_itr(z[i]-y[j2-1],2)+pow_itr(x[j1-1]-y[j2-1],2);
                mn=min(mn,temp);
            }
        }
    }
    cout<<mn<<endl;
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