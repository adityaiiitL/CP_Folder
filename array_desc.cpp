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
lli n,m;
vec v;
vector<vector<lli>>ans;
lli func(lli i){

    if(i==n-1){
        if(v[i]==0){

            if(v[i-1]+1<=m)return 2;
            else return 1;
        }
        else return 1;
    }
    if(v[i-1]==v[i+1] and v[i]==0){

        v[i]=v[i-1]-1;
        lli temp=func(i+1);
        // return 2*func(i+1);
        if(v[i-1]+1<=m){

            v[i]=v[i-1]+1;
            lli temp1=1;
            temp1*=func(i+1);
            temp+=temp1;
        }
        v[i]=v[i-1];
        lli temp1=1;
        temp1*=func(i+1);
        temp+=temp1;
        return temp;
    }
    else if(v[i]==0 and v[i-1]!=v[i+1]){

        v[i]=(v[i-1]+v[i+1])/2;
        lli temp=func(i+1);
        if(abs(v[i-1]-v[i+1])==1){

            v[i]=(v[i-1]+v[i+1])/2+1;
            lli temp1=1;
            temp1*=func(i+1);
            temp+=temp1;
        }
        return temp;
    }
    return func(i+1);
}
void solve(){

    // lli n,m;
    cin>>n>>m;
    // vec v(n);
    f(i,0,n){

        lli h;
        cin>>h;
        v.pb(h);
    }
    cout<<func(1);

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