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
#define gsort(x) sort(all(x),greater<ld>())
#define cntleadz(x) __builtin_clz(x)
#define cnttrailz(x) __builtin_ctz(x)
#define cntpop(x) __builtin_popcount(x)
#define binparity(x) __builtin_parity(x)
#define mp(a,b) make_pair(a,b)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<ld>
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
bool comp(pair<lli,lli>p1,pair<lli,lli>p2){
    return p1.second>p2.second;
}
void solve(){

    lli n,w;
    cin>>n>>w;
    vec v(n);
    in(v);
    vector<pair<lli,lli>>ans;
    f(i,0,n){
        ans.pb(mp(i,ceil(v[i]/2)));
    }
    f(i,0,n)v[i]=v[i]/2;
    // debugp(ans);
    sort(all(ans),comp);
    gsort(v);
    // out(v);
    f(i,0,n){
        v[i]*=2;
    }
    out(v);
    debugp(ans);
    lli s=0;
    f(i,0,n)s+=ans[i].second;
    if(s>w){
        cout<<-1<<endl;
        fo;
    }
    if(s==w){
        sort(all(ans));
        f(i,0,n)cout<<ans[i].second<<' ';
        br;
        fo;
    }
    // out(v);
    // cout<<s<<endl;
    f(i,0,n){

        if(v[i]-ans[i].second<=w-s){
            s+=v[i]-ans[i].second;
            ans[i].second+=v[i]-ans[i].second;
        }
        else{
            ans[i].second+=w-s;
            s=w;
        }
    }
    sort(all(ans));
    // debugp(ans);
    f(i,0,n)cout<<ans[i].second<<' ';
    br;

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