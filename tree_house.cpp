#include<bits/stdc++.h>
using namespace std;
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~Author: Aditya_Agrawal_2002~~//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
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

// Sieve Array
lli spf[100001];
void sieve(){
    f(i,0,100001)spf[i]=i;
    f(i,2,100001){
        if(spf[i]==i){
            for(lli j=i*i;j<100001;j+=i){
                if(spf[j]==j)spf[j]=i;
            }
        }
    }
}

// Binary Exponentiation (Recursive method)
lli pow_rec(lli a,lli b){
    if(b==0)return 1;
    if(b%2==1){
        return a*pow_rec(a,b-1);
    }
    else{
        return pow_rec(a,b/2)*pow_rec(a,b/2);
    }
}
// Binary Exponentiation (Iterative Method)
lli pow_itr(lli a,lli b){
    lli p=1;
    while(b){
        if(b&1==1){
            p*=a;
        }
        a*=a;
        b=b>>1;
    }
    return p;
}
vector<lli>adj[300005];
bool vis[300005];
lli val[300005];
lli sz[300005];
lli s;
void dfs(lli v){

    vis[v]=true;
    sz[v]=1;
    for(auto i:adj[v]){

        if(!vis[i]){

            lli temp=val[i];
            dfs(i);
            sz[v]=(sz[v]+sz[i]);
        }
    }
}  
bool myComp(lli i1, lli i2){

    if(sz[i1]==sz[i2]){

        return adj[i1].size()>adj[i2].size();
    }
    return sz[i1]>sz[i2];
}
void func(lli v){

    lli k=1;
    vis[v]=true;
    for(auto i:adj[v]){

        if(!vis[i]){

            
            val[i]=(val[i]+(k*val[v]));
            k=(k+1)%mdl;
            func(i);
        }
    }
}
void solve(){

    s=0;
    lli n,x;
    cin>>n>>x;
    memset(adj,0,sizeof(adj));
    memset(vis,0,sizeof(vis));
    f(i,0,n-1){

        lli p,q;
        cin>>p>>q;
        adj[p].pb(q);
        adj[q].pb(p);
    }
    memset(val,0,sizeof(val));
    val[1]=x;
    dfs(1);
    memset(vis,0,sizeof(vis));
    for(auto &i:adj){

        stable_sort(i.begin(),i.end(),myComp);
    }
    func(1);
    lli sum=0;
    f(i,1,n+1){
        // cout<<val[i]<<endl;
        lli temp=val[i]%mdl;
        sum=(sum+temp)%mdl;
    }
    cout<<sum%mdl<<endl;
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