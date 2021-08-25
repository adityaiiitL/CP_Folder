// Author: Aditya Agrawal //
#include<bits/stdc++.h>
using namespace std;

// #pragma GCC target ("avx2")
// #pragma GCC optimize ("O3")
// #pragma GCC optimize ("unroll-loops")

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

vec v;
lli n,m;
lli st[400004];
lli freq[400004];
lli c;
class segTree
{
    public:
    void build(lli si,lli ss,lli se){
        if(ss==se){
            st[si]=v[ss];
            freq[si]=1;
            fo;
        }
        lli mid=(ss+se)/2;
        build(2*si,ss,mid);
        build(2*si+1,mid+1,se);
        st[si]=min(st[2*si],st[2*si+1]);

        if(st[2*si+1]<st[2*si])freq[si]=freq[2*si+1];
        else if(st[2*si+1]>st[2*si])freq[si]=freq[2*si];
        else freq[si]=freq[2*si]+freq[2*si+1];
    }
    lli query(lli si,lli ss,lli se,lli qs,lli qe){
        if(qe<ss or qs>se)fo intmax;
        if(qs<=ss and se<=qe)fo st[si];
        lli mid=(ss+se)/2;
        lli l=query(2*si,ss,mid,qs,qe);
        lli r=query(2*si+1,mid+1,se,qs,qe);
        fo min(l,r);
    }
    void updatePoint(lli si,lli ss,lli se,lli qi,lli val){
        if(ss==se){
            v[ss]=val;
            st[si]=v[ss];
            freq[si]=1;
            fo;
        }
        lli mid=(ss+se)/2;
        if(qi<=mid){
            freq[2*si]=0;
            updatePoint(2*si,ss,mid,qi,val);
        }
        else{
            freq[2*si+1]=0;
            updatePoint(2*si+1,mid+1,se,qi,val);
        }
        st[si]=min(st[2*si],st[2*si+1]);

        if(st[2*si+1]<st[2*si])freq[si]=freq[2*si+1];
        else if(st[2*si+1]>st[2*si])freq[si]=freq[2*si];
        else freq[si]=freq[2*si]+freq[2*si+1];
    }
    void num(lli si,lli ss,lli se,lli qs,lli qe,lli min){
        if(qe<ss or qs>se)fo;
        if(qs<=ss and se<=qe){
            if(st[si]==min){
                c+=freq[si];
            }
            fo;
        }
        lli mid=(ss+se)/2;
        num(2*si,ss,mid,qs,qe,min);
        num(2*si+1,mid+1,se,qs,qe,min);
    }
};
void solve(){

    cin>>n>>m;
    in1(v,n);
    segTree st;
    st.build(1,0,n-1);
    while(m--){
        lli t,l,r;
        cin>>t>>l>>r;
        if(t==1){
            st.updatePoint(1,0,n-1,l,r);
        }
        else{
            c=0;
            lli mn=st.query(1,0,n-1,l,r-1);
            st.num(1,0,n-1,l,r-1,mn);
            cout<<mn<<' '<<c<<endl;
        }
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