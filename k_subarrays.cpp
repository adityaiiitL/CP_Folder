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

    lli n,k;
    cin>>n>>k;
    vec v(n);
    in(v);
    if(k==1){

        lli sum=0;
        lli mx=intmin;
        f(i,0,n){

            sum+=v[i];
            mx=max(mx,sum);
            if(sum<0)sum=0;
        }
        cout<<mx<<endl;
    }
    if(k==2){

        // 1 2 -1 3 1
        // 1 3  3 5 6   :p
        // 6 5  4 4 1   :s
        
        // -1  2  11 -23 12  
        // -1  2  13  13 13  :p
        // 13 13  12  12 12  :s

        vec parr(n),sarr(n);
        lli psum=0,ssum=0,pmx=intmin,smx=intmin;
        f(i,0,n){

            psum+=v[i];
            if(pmx<psum){
                pmx=psum;
            }
            parr[i]=pmx;
            if(psum<0)psum=0;
        } 
        fr(i,n-1,0){
            
            ssum+=v[i];
            if(smx<ssum){
                smx=ssum;
            }
            sarr[i]=smx;
            if(ssum<0)ssum=0;
        }
        lli ans=intmin;
        f(i,0,n-1){

            ans=max(parr[i]+2*sarr[i+1],ans);
        }
        // out(parr);
        // out(sarr);
        cout<<ans<<endl;
    }
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