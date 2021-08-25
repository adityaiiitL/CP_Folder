#include<bits/stdc++.h>
using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#define intmax 2147483647
#define intmin -2147483648
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'

bool vis[20005];
vector<lli>adj[20001];
void dfs(lli v){

    vis[v]=true;
    cout<<"Visited "<<v<<endl;
    for(auto i:adj[v]){

        if(!vis[i]){
            dfs(i);
        }
    }
}
void solve(){

    lli n,m;
    // n--> vertices, m--> edges
    cin>>n>>m;
    
    f(i,0,m){

        lli x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    f(i,1,n+1){

        if(!vis[i]){

            dfs(i);
        }
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
    return 0;
}