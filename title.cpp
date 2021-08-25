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
void google(int t) {cout<<"Case #"<<t<<": ";}
lli mod_add(lli a,lli b,lli m) {a=a%m;b=b%m;return (((a+b)%m)+m)%m;}
lli mod_mul(lli a,lli b,lli m) {a=a%m;b=b%m;return (((a*b)%m)+m)%m;}
lli mod_sub(lli a,lli b,lli m) {a=a%m;b=b%m;return (((a-b)%m)+m)%m;}

lli lcm(lli a,lli b) {return (a*b)/gcd(a,b);}
void divisors(lli n,vec &fact){
    f(i,2,sqrt(n)+1){
        if(n%i==0){
            if(i*i==n)fact.pb(i);
            else {fact.pb(i);fact.pb(n/i);}
        }
    }
    sort(all(fact));
}
void in(vec &v){f(i,0,v.size())cin>>v[i];}
void in1(vec &v,lli n){f(i,0,n){lli h;cin>>h;v.pb(h);}}
void out(vec v){f(i,0,v.size())cout<<v[i]<<' ';cout<<endl;}

void solve(){

    lli n;
    cin>>n;
    string s;
    cin>>s;
    mc m;
    lli N=s.size();
    // cout<<s[N/2]<<endl;
    // db(N);
    if(N==1){
        if(s[0]=='?')s[0]='a';
        if(n==1)cout<<s<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
        fo;
    }
    f(i,0,N/2)if(s[i]!='?')m[s[i]]++;
    lli c=0;
    f(i,0,N/2){
        if(s[i]=='?' and s[N-i-1]=='?'){
            c++;
        }
        else if(s[i]=='?' and s[N-i-1]!='?')s[i]=s[N-i-1];
        else if(s[i]!='?' and s[N-i-1]=='?')s[N-i-1]=s[i];
    }
    if(N&1 and s[N/2]=='?')c++;
    m.clear();
    f(i,0,N/2)if(s[i]!='?')m[s[i]]++;
    // cout<<c<<' '<<m.size()<<endl;
    if(c>=n-m.size()){
        lli cnt=0;
        f(i,0,N/2){
            if(cnt==c-n+m.size())break;
            if(s[i]=='?'){
                s[i]='a',s[N-i-1]='a';
                cnt++;
            }
        }
        f(i,0,N/2){
            if(s[i]=='?'){
                f(j,0,26){
                    if(m['a'+j]==0){
                        s[i]='a'+j;
                        s[N-i-1]='a'+j;
                        m['a'+j]++;
                        break;
                    }
                }
            }
        }
        if(N&1 and s[N/2]=='?'){
            mc check;
            f(i,0,N)if(s[i]!='?')check[s[i]]++;
            if(check.size()==n)s[N/2]='a';
            else{
                f(j,0,26){
                    if(m['a'+j]==0){
                        s[N/2]='a'+j;
                        m['a'+j]++;
                        break;
                    }
                }
            }
        }
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
        fo;
    }
    // cout<<s<<endl;
    m.clear();
    f(i,0,N/2){
        if(s[i]!=s[N-i-1]){
            cout<<"IMPOSSIBLE"<<endl;
            fo;
        }
    }
    f(i,0,N)m[s[i]]++;
    if(m.size()==n)cout<<s<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
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