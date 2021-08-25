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
typedef vector<pair<lli,lli>> vp;
typedef map<lli,lli> mi;
typedef map<char,lli> mc;
typedef vector<lli> vec;
typedef vector<string> vs;
typedef stack<lli> stk;
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
#define map map<lli,lli>
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
vector<lli>adj[3000005];
bool vis[3000005];
lli cc_arr[3000005];
lli cc=0;
void dfs(lli v){

    vis[v]=true;
    cc_arr[v]=cc;
    for(auto i:adj[v]){

        if(!vis[i]){

            dfs(i);
        }
    }
}
lli a[1001][1001];
void solve(){

    memset(cc_arr,-1,sizeof(cc_arr));
    lli n;
    cin>>n;
    f(i,1,n+1){
        f(j,1,n+1)a[i][j]=1;
    }
    lli ax,ay,bx,by,cx,cy;
    cin>>bx>>by;
    cin>>ax>>ay;
    cin>>cx>>cy;
    f(i,bx,n+1)a[i][by]=0;
    fr(i,bx,1)a[i][by]=0;
    f(i,by,n+1)a[bx][i]=0;
    fr(i,by,1)a[bx][i]=0;
    lli i=bx,j=by;
    while(1){
        if(i==n+1 or j==n+1)break;
        a[i][j]=0;
        i++,j++;
    }
    i=bx,j=by;
    while(1){
        if(i==0 or j==0)break;
        a[i][j]=0;
        i--,j--;
    }
    i=bx,j=by;
    while(1){
        if(i==0 or j==n+1)break;
        a[i][j]=0;
        i--,j++;
    }
    i=bx,j=by;
    while(1){
        if(i==n+1 or j==0)break;
        a[i][j]=0;
        i++,j--;
    }
    // f(i,1,n+1){
    //     f(j,1,n+1)cout<<a[i][j]<<' ';
    //     br;
    // }
    f(i,1,n+1){
        f(j,1,n+1){
            if(i!=n and j!=n and a[i][j]==1 and a[i+1][j+1]==1){
                adj[n*(i-1)+j].pb(n*i+j+1);
                adj[n*i+j+1].pb(n*(i-1)+j);
            }
            if(i!=n and a[i][j]==1 and a[i+1][j]==1){
                adj[n*(i-1)+j].pb(n*(i)+j);
                adj[n*(i)+j].pb(n*(i-1)+j);
            }
            if(j!=n and a[i][j]==1 and a[i][j+1]==1){
                adj[n*(i-1)+j].pb(n*(i-1)+j+1);
                adj[n*(i-1)+j+1].pb(n*(i-1)+j);
            }
            if(i!=1 and j!=n and a[i][j]==1 and a[i-1][j+1]==1){
                adj[n*(i-1)+j].pb(n*(i-2)+j+1);
                adj[n*(i-2)+j+1].pb(n*(i-1)+j);
            }
        }
    }
    f(i,1,n*n+1){
        if(!vis[i])cc++,dfs(i);
    }
    // cout<<cc_arr[n*(ax-1)+ay]<<' '<<cc_arr[n*(cx-1)+cy]<<endl;
    if(cc_arr[n*(ax-1)+ay]==cc_arr[n*(cx-1)+cy])yeah;
    else nah;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    lli t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}