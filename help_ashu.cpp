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

pii st[1000001];
lli n;
vec v;
void buildTree(lli si,lli ss,lli se){
    if(ss==se){
        if(v[ss]&1)st[si]={1,0};
        else st[si]={0,1};
        fo;
    }
    lli mid=(ss+se)/2;
    buildTree(2*si,ss,mid);
    buildTree(2*si+1,mid+1,se);
    st[si].first=st[2*si].first+st[2*si+1].first;
    st[si].second=st[2*si].second+st[2*si+1].second;
}
lli getOdd(lli si,lli ss,lli se,lli qs,lli qe){
    if(qe<ss or qs>se)fo 0;
    if(qs<=ss and se<=qe)fo st[si].first;
    lli mid=(ss+se)/2;
    lli l=getOdd(2*si,ss,mid,qs,qe);
    lli r=getOdd(2*si+1,mid+1,se,qs,qe);
    fo l+r;
}
lli getEven(lli si,lli ss,lli se,lli qs,lli qe){
    if(qe<ss or qs>se)fo 0;
    if(qs<=ss and se<=qe)fo st[si].second;
    lli mid=(ss+se)/2;
    lli l=getEven(2*si,ss,mid,qs,qe);
    lli r=getEven(2*si+1,mid+1,se,qs,qe);
    fo l+r;
}
void update(lli si,lli ss,lli se,lli qi,lli newValue){
    if(ss==se){
        if(v[ss]&1)st[si]={0,1};
        else st[si]={1,0};
        v[ss]=newValue;
        fo;
    }
    lli mid=(ss+se)/2;
    if(qi<=mid)update(2*si,ss,mid,qi,newValue);
    else update(2*si+1,mid+1,se,qi,newValue);
    st[si].first=st[2*si].first+st[2*si+1].first;
    st[si].second=st[2*si].second+st[2*si+1].second;
}
void solve(){

    cin>>n;
    in1(v,n);
    buildTree(1,0,n-1);
    lli q;
    cin>>q;
    while(q--){
        lli t,l,r;
        cin>>t>>l>>r;
        if(t==0){
            if(v[l-1]%2==r%2)continue;
            update(1,0,n-1,l-1,r);
        }
        else if(t==1)cout<<getEven(1,0,n-1,l-1,r-1)<<endl;
        else if(t==2)cout<<getOdd(1,0,n-1,l-1,r-1)<<endl;
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
    // cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}