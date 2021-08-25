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

string s;
lli n;
vec st[400004];
class segTree
{
    public:
    void build(lli si,lli ss,lli se){
        if(ss==se){
            while(st[si].size()<26)st[si].pb(0);
            st[si][s[ss]-'a']++;
            fo;
        }
        lli mid=(ss+se)/2;
        build(2*si,ss,mid);
        build(2*si+1,mid+1,se);
        st[si]=st[2*si];
        f(i,0,26)st[si][i]+=st[2*si+1][i];
    }
    vec query(lli si,lli ss,lli se,lli qs,lli qe){
        if(qe<ss or qs>se){
            vec v(26,0);
            fo v;
        }
        if(qs<=ss and se<=qe){
            fo st[si];
        }
        lli mid=(ss+se)/2;
        vec l=query(2*si,ss,mid,qs,qe);
        vec r=query(2*si+1,mid+1,se,qs,qe);
        vec t(26);
        f(i,0,26)t[i]+=l[i]+r[i];
        fo t;
    }
    void updatePoint(lli si,lli ss,lli se,lli qi,char old,char val){
        if(qi>se or qi<ss)fo;
        else if(ss==se){
            while(st[si].size()<26)st[si].pb(0);
            st[si][val-'a']++;
            st[si][old-'a']--;
            fo;
        }
        else{
            while(st[si].size()<26)st[si].pb(0);
            st[si][val-'a']++;
            st[si][old-'a']--;
            lli mid=(ss+se)/2;
            updatePoint(2*si,ss,mid,qi,old,val);
            updatePoint(2*si+1,mid+1,se,qi,old,val);
        }
    }
};
void solve(){

    cin>>s;
    n=s.size();
    segTree st;
    st.build(1,0,n-1);
    lli q;
    cin>>q;
    while(q--){
        lli t;
        cin>>t;
        if(t==1){
            lli l;char r;
            cin>>l>>r;
            st.updatePoint(1,0,n-1,l-1,s[l-1],r);
            s[l-1]=r;
        }
        else {
            lli l,r;
            cin>>l>>r;
            vec m=st.query(1,0,n-1,l-1,r-1);
            lli c=0;
            for(auto i:m){
                if(i>0)c++;
            }
            cout<<c<<endl;
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