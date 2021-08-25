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

void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}

void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}

vector<lli>adj[20005];
bool vis[20005];
stack<lli>st;
void dfs(lli v){

    vis[v]=true;
    for(auto i:adj[v]){

        if(!vis[i]){
            dfs(i);
        }
    }
    st.push(v);
}
void solve(){

    lli n;
    cin>>n;
    f(i,1,n){

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
    while(st.size()!=0){

        cout<<st.top()<<endl;
        st.pop();
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}