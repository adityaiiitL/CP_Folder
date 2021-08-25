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
#define gsort(x) sort(all(x),greater<lli>())
#define cntleadz(x) __builtin_clz(x)
#define cnttrailz(x) __builtin_ctz(x)
#define cntpop(x) __builtin_popcount(x)
#define binparity(x) __builtin_parity(x)
#define mp(a,b) make_pair(a,b)
#define pb(k) push_back(k)
// #define map map<lli,lli>
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
// 0 1 1 2 2 2 2 2 3
// 1 1 2 2 3 4 5 6 6
// 1/0 1/1 2/1 1/1 3/2 2/1 5/2 3/1 2/1

// 0 1 1 2
// 1 1 2 2 
// 0/1 1/1 1/2 1/1
void solve(){

    lli n;
    cin>>n;
    string s;
    cin>>s;
    ld d=0,k=0;
    vector<ld>nd,nk;
    f(i,0,n){
        
        if(s[i]=='D')d++;
        else k++;
        nd.pb(d);
        nk.pb(k);
    }
    // debug(nd);
    // debug(nk);
    map<ld,lli>m;
    f(i,0,n){

        if(nd[i]==0 or nk[i]==0){
            m[-1]++;
            cout<<m[-1]<<' ';
        }
        else{
            m[nd[i]/nk[i]]++;
            cout<<m[nd[i]/nk[i]]<<' ';
        } 
    }
    br;
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