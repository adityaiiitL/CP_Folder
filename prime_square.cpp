// Author: Aditya Agrawal //
#include<bits/stdc++.h>
using namespace std;

// #pragma GCC target ("avx2")
// #pragma GCC optimize ("O3")
// #pragma GCC optimize ("unroll-loops")

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
#define gcd __gcd

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
    f(i,0,100001)spf[i]=0;
    f(i,2,100001){

        if(spf[i]==0){

            for(lli j=i*i;j<100001;j+=i){

                if(spf[j]==0)spf[j]=1;
            }
        }
    }
}
// 1 0 0 1
// 0 1 1 0
// 0 1 1 0
// 1 0 0 1

// 1 0 0 0 1 
// 0 1 0 1 0
// 1 0 0 0 1 
// 0 1 0 1 0 
// 1 0 0 0 1

// 1 0 1
// 1 1 1
// 1 0 1

// 1 0 0 0 0 1 
// 0 1 0 0 1 0 
// 0 0 1 1 0 0 
// 0 0 1 1 0 0 
// 0 1 0 0 1 0
// 1 0 0 0 0 1 

// 100 & 001:
void solve(){

    lli n;
    cin>>n;
    lli a[n][n];
    f(i,0,n){
        f(j,0,n)a[i][j]=0;
    }
    if(!spf[n]){

        f(i,0,n){
            f(j,0,n)cout<<1<<' ';
            cout<<endl;
        }
    }
    else{

        if(n%2==0){

            f(i,0,n){
                f(j,0,n){
                    if(i==j)a[i][j]=1;
                    if(i+j==n-1)a[i][j]=1;
                }
            }
            f(i,0,n){
                f(j,0,n)cout<<a[i][j]<<' ';
                cout<<endl;
            }
        }else{

            f(i,0,n){
                f(j,0,n){
                    if(i==j)a[i][j]=1;
                    if(i+j==n-1)a[i][j]=1;
                }
            }
            a[n/2][0]=1;
            a[n/2][n-1]=1;
            a[0][n/2]=1;
            a[n-1][n/2]=1;
            f(i,0,n){
                f(j,0,n)cout<<a[i][j]<<' ';
                cout<<endl;
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}