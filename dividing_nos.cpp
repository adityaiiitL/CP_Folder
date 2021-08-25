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
// Sieve Array
lli spf[100001];
vec fact;
void sieve(){
    f(i,0,100001)spf[i]=0;
    f(i,2,100001){
        if(spf[i]==0){
            for(lli j=i*i;j<100001;j+=i){
                if(spf[j]==0)spf[j]=1;
            }
        }
    }
    f(i,2,100001){
        if(spf[i]==0){
            fact.pb(i);
        }
    }
}
lli expo(lli n,lli k){
    lli c=0;
    while(n%k==0){
        n/=k;
        c++;
    }
    fo c;
}
void solve(){

    lli a,b,k;
    cin>>a>>b>>k;
    lli mx=0,mn=0;
    if(a==b)mn=0;
    else if(gcd(a,b)==a or gcd(a,b)==b)mn=1;
    else mn=2;
    f(i,0,fact.size()){
        if(fact[i]>a)break;
        if(a%fact[i]==0){
            lli k=expo(a,fact[i]);
            mx+=k;
        }
    }
    if(a!=1)mx++;
    f(i,0,fact.size()){
        if(fact[i]>b)break;
        if(b%fact[i]==0){
            lli k=expo(a,fact[i]);
            mx+=k;
        }
    }
    if(b!=1)mx++;
    if(a==b){
        if(k<=mx and (k==0 or k>=2))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(max(a,b)%min(a,b)==0){
        if(k<=mx and k>=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        if(k<=mx and k>=2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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

    lli t;
    cin>>t;
    sieve();
    while(t--){
        solve();
    }
    fo 0;
}