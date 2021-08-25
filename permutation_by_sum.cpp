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

    lli n,l,r,s;
    cin>>n>>l>>r>>s;
    vec v;
    f(i,1,n+1)v.pb(i);
    lli k=r-l+1;
    lli mn=0,mx=0;
    f(i,0,k)mn+=v[i];
    lli j=0;
    fr(i,n-1,0){
        if(j==k)break;
        mx+=v[i];
        j++;
    }
    // cout<<mn<<' '<<mx<<endl;
    if(mn>s or s>mx){

        cout<<-1<<endl;
        fo;
    }
    vec ans;
    f(i,0,k){
        ans.pb(v[i]);
    }
    lli temp=s-mn;
    f(i,0,ans.size())ans[i]+=temp/k;
    j=0;
    fr(i,ans.size()-1,0){

        if(j==temp%k)break;
        ans[i]+=1;
        j++;
    }
    // out(ans);
    vec fin;
    map m;
    f(i,0,ans.size())m[ans[i]]++;
    j=0;
    f(i,0,n){
        
        if(j==l-1)break;
        if(m[v[i]]==0){

            fin.pb(v[i]);
            j++;
            m[v[i]]++;
        }
    }
    f(i,0,ans.size())fin.pb(ans[i]);
    j=0;
    fr(i,n-1,0){

        if(j==n-r)break;
        if(m[v[i]]==0){

            fin.pb(v[i]);
            j++;
        }
    }
    out(fin);
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