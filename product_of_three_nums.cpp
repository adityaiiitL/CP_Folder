// Author: Aditya Agrawal //
#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#define debug(x)			 \
    for(auto element:x)      \
        cout<<element<<" ";  \
        cout<<endl;
#define debugp(x)          \
    for(auto element:x)    \
        cout<<element.first<<" "<<element.second<<endl
#define db(x) cout<< #x<<"="<<x<<'\n'
#define makegraph(adj, num)   \
for (int i=0;i<num;i++) \
{                             \
    int x,y;                 \
    cin>>x>>y;            \
    adj[x].push_back(y);      \
    adj[y].push_back(x);      \
}
typedef long long int lli;
typedef unsigned long long int ull;
typedef long double ld;
#define intmax 2147483647
#define intmin -2147483648
#define pi 3.141592653589
#define mod 1000000007
#define mdl 998244353
#define fo return
#define all(a) a.begin(),a.end()
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
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
    vec fact;
    f(i,2,sqrt(n)+1){

        if(n%i==0){
            if(n/i==i){
                fact.pb(i);
            }
            else{
                fact.pb(i);
                fact.pb(n/i);
            }
        }
    }
    sort(all(fact));
    if(fact.size()==0 or fact.size()==1 or fact.size()==2){
        cout<<"NO"<<endl;
        return;
    }
    f(i,0,fact.size()-1){

        lli a=fact[i],b=fact[i+1];
        if(n/(a*b)!=a and n/(a*b)!=b and n/(a*b)!=1 and n%(a*b)==0){
            cout<<"YES"<<endl;
            cout<<a<<' '<<b<<' '<<n/(a*b)<<endl;
            return;
        }
    }
    // debug(fact);
    // f(i,0,fact.size()){

    //     f(j,0,fact.size()){

    //         f(k,0,fact.size()){

    //             lli a=fact[i],b=fact[j],c=fact[k];
    //             if(a*b*c==n and a!=b and b!=c and c!=a){

    //                 cout<<"YES"<<endl;
    //                 cout<<a<<' '<<b<<' '<<c<<endl;
    //                 return;
    //             }
    //         }
    //     }
    // }
    cout<<"NO"<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}