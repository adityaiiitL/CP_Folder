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
lli st[1000001];
vec val;
void build(lli si,lli ss,lli se){

    if(ss==se){
        st[si]=val[ss];
        return;
    }
    lli mid=(ss+se)/2;
    build(2*si,ss,mid);
    build(2*si+1,mid+1,se);

    st[si]=st[2*si]+st[2*si+1];
}
lli query(lli si,lli ss,lli se,lli qs,lli qe){

    if(qs>se or qe<ss){
        return 0;
    }
    if(qs<=ss and se<=qe){
        return st[si];
    }
    lli mid=(ss+se)/2;
    lli a=query(2*si,ss,mid,qs,qe);
    lli b=query(2*si+1,mid+1,se,qs,qe);

    return a+b;
}
void solve(){

    lli n,q,k;
    cin>>n>>q>>k;
    vec v(n);
    in(v);
    val.pb(v[1]-2);
    f(i,1,n-1){

        val.pb(v[i+1]-v[i-1]-2);
    }
    val.pb(k-v[n-2]-1);
    build(1,0,n-1);
    while(q--){

        lli l,r;
        cin>>l>>r;
        lli c=0;
        if(l==r){
            c+=k-1;
            cout<<c<<endl;
            continue;
        }
        c+=v[l]-2;
        c+=k-v[r-2]-1;
        c+=query(1,0,n-1,l,r-2);
        cout<<c<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}