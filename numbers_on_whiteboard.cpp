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
#define gcd __gcd

void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}

void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}
// 1 2 3 4 5
// 1 2 4 4
// 1 2 4
// 1 3
// 2

// 1 2 3 4 5 6
// 1 2 3 5 5
// 1 2 3 5
// 1 2 4
// 1 3 
// 2
void solve(){

    lli n;
    cin>>n;
    vec v(n);
    f(i,0,n)v.pb(i+1);
    if(n==2){

        cout<<2<<endl;
        cout<<2<<' '<<1<<endl;
        fo;
    }
    cout<<2<<endl;
    lli i=n;
    n--;
    lli t=0;
    while(n--){

        lli a=v[v.size()-1];
        if(a%2==v[v.size()-2]%2){

            lli b=v[v.size()-2];
            v.erase(v.begin()+v.size()-2);
            v.pop_back();
            v.pb((a+b)/2);
            cout<<a<<' '<<b<<endl;
        }else{

            lli b=v[v.size()-3];
            v.erase(v.begin()+v.size()-3);
            v.pop_back();
            v.pb((a+b)/2);
            cout<<a<<' '<<b<<endl;
        }
    }
    // cout<<3<<' '<<1<<endl;
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