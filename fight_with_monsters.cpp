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

lli a,b;
bool comp(lli n1,lli n2){
    lli temp1,temp2;
    if(n1%(a+b)==0)temp1=b;
    else temp1=n1%(a+b)-a;
    lli var1,var2;
    if(temp1%a==0)var1=temp1/a;
    else var1=temp1/a+1;
    if(n2%(a+b)==0)temp2=b;
    else temp2=n2%(a+b)-a;
    if(temp2%a==0)var2=temp2/a;
    else var2=temp2/a+1;
    fo var1<var2;
}
void solve(){

    lli n,k;
    cin>>n>>a>>b>>k;
    vec v(n);
    in(v);
    sort(all(v),comp);
    // debug(v);
    lli c=0;
    lli ans=0;
    f(i,0,n){
        if(v[i]<=a)ans++;
        else{
            if(v[i]%(a+b)>a or v[i]%(a+b)==0){
                // db(i);
                if(k>0){
                    lli temp;
                    if(v[i]%(a+b)==0)temp=b;
                    else temp=v[i]%(a+b)-a;
                    lli var;
                    if(temp%a==0)var=temp/a;
                    else var=temp/a+1;
                    if(var<=k){
                        k-=var;
                        ans++;
                    }
                    else{
                        if(k*a>=temp){
                            ans++;
                            k=0;
                        }
                    }
                }
            }
            else ans++;
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

    lli t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}