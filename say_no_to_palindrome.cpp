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

    lli n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vec pre1,pre2,pre3,pre4,pre5,pre6;
    string s1,s2,s3,s4,s5,s6;
    f(i,0,n){
        if(i%3==0)s1.pb('a');
        else if(i%3==1)s1.pb('b');
        else s1.pb('c');
    }
    f(i,0,n){
        if(i%3==0)s2.pb('a');
        else if(i%3==1)s2.pb('c');
        else s2.pb('b');
    }
    f(i,0,n){
        if(i%3==0)s3.pb('b');
        else if(i%3==1)s3.pb('a');
        else s3.pb('c');
    }
    f(i,0,n){
        if(i%3==0)s4.pb('b');
        else if(i%3==1)s4.pb('c');
        else s4.pb('a');
    }
    f(i,0,n){
        if(i%3==0)s5.pb('c');
        else if(i%3==1)s5.pb('b');
        else s5.pb('a');
    }
    f(i,0,n){
        if(i%3==0)s6.pb('c');
        else if(i%3==1)s6.pb('a');
        else s6.pb('b');
    }
    lli c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
    f(i,0,n){
        if(s[i]!=s1[i])c1++;
        if(s[i]!=s2[i])c2++;
        if(s[i]!=s3[i])c3++;
        if(s[i]!=s4[i])c4++;
        if(s[i]!=s5[i])c5++;
        if(s[i]!=s6[i])c6++;
        pre1.pb(c1);pre2.pb(c2);pre3.pb(c3);
        pre4.pb(c4);pre5.pb(c5);pre6.pb(c6);
    }
    while(m--){
        lli l,r;
        cin>>l>>r;
        if(l==1){
            lli mn=intmax;
            mn=min(mn,pre1[r-1]);
            mn=min(mn,pre2[r-1]);
            mn=min(mn,pre3[r-1]);
            mn=min(mn,pre4[r-1]);
            mn=min(mn,pre5[r-1]);
            mn=min(mn,pre6[r-1]);
            cout<<mn<<endl;
        }
        else{
            lli mn=intmax;
            mn=min(mn,pre1[r-1]-pre1[l-2]);
            mn=min(mn,pre2[r-1]-pre2[l-2]);
            mn=min(mn,pre3[r-1]-pre3[l-2]);
            mn=min(mn,pre4[r-1]-pre4[l-2]);
            mn=min(mn,pre5[r-1]-pre5[l-2]);
            mn=min(mn,pre6[r-1]-pre6[l-2]);
            cout<<mn<<endl;
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