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
bool mycomp(pair<lli,lli>p1,pair<lli,lli>p2){

    return p1.first<p2.first;
}
void solve(){

    lli n,w;
    cin>>n>>w;
    vec v(n);
    in(v);
    vector<pair<lli,lli>>a;
    f(i,0,n){

        if(v[i]>=(w+1)/2 and v[i]<=w){

            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
        if(v[i]<=(w+1)/2)a.pb(mp(v[i],i+1));
    }
    sort(all(a),mycomp);
    vec ans;
    lli sum=0;
    for(auto i:a){

        sum+=i.first;
        ans.pb(i.second);
        if(sum>=(w+1)/2)break;
    }
    lli check=0;
    f(i,0,ans.size()){

        check+=v[ans[i]-1];
    }
    if(check>=(w+1)/2 and check<=w){
        cout<<ans.size()<<endl;
        out(ans);
    }
    else cout<<-1<<endl;
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