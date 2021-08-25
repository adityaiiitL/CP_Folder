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

lli n;
vec v;
lli blk;
lli freq[1000001];
lli cnt=0;
bool op(pair<lli,pii>p1,pair<lli,pii>p2){
    if(((p1.second).first)/blk!=((p2.second).first)/blk){
        fo ((p1.second).first)/blk<((p2.second).first)/blk;
    }
    fo (p1.second).second<(p2.second).second;
}
void add(lli val){
    freq[v[val]]++;
    if(freq[v[val]]==1)cnt++;
}
void remove(lli val){
    freq[v[val]]--;
    if(freq[v[val]]==0)cnt--;
}
void solve(){

    cin>>n;
    in1(v,n);
    blk=sqrt(n);
    lli q;
    cin>>q;
    vector<pair<lli,pii>>queries;
    f(i,0,q){
        lli l,r;
        cin>>l>>r;
        queries.pb(mp(i,mp(l-1,r-1)));
    }
    sort(all(queries),op);
    vp ans;
    lli pl=0,pr=-1;
    f(i,0,q){
        lli l=(queries[i].second).first;
        lli r=(queries[i].second).second;
        while(l<pl){
            pl--;
            add(pl);
        }
        while(r>pr){
            pr++;
            add(pr);
        }
        while(l>pl){
            remove(pl);
            pl++;
        }
        while(r<pr){
            remove(pr);
            pr--;
        }
        ans.pb(mp(queries[i].first,cnt));
    }
    sort(all(ans));
    for(auto i:ans)cout<<i.second<<endl;
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