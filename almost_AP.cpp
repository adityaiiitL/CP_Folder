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

void solve(){

    li n;
    cin>>n;
    vec v(n),v1;
    in(v);
    f(i,0,n)v1.pb(v[i]);
    lli x=v[1];
    lli a1=v[0]-1,b1=v[0],c1=v[0]+1;
    lli a2=v[1]-1,b2=v[1],c2=v[1]+1;
    lli s=2;
    lli d=a2-a1;
    lli ans=intmax;
    bool f=true;
    v[1]=x-1;
    f(i,2,n){
        if(abs(d-(v[i]-v[i-1]))>1){

            f=false;
            break;
        }
        s+=abs(d-(v[i]-v[i-1]));
        v[i]=v[i-1]+d;
    }
    if(f)ans=min(s,ans);
    d=b2-a1;
    s=1;
    f=true;
    f(i,0,n)v[i]=v1[i];
    v[1]=x;
    f(i,2,n){
        if(abs(d-(v[i]-v[i-1]))>1){

            f=false;
            break;
        }
        s+=abs(d-(v[i]-v[i-1]));
        v[i]=v[i-1]+d;
    }
    if(f)ans=min(s,ans);
    d=c2-a1;
    s=2;
    f=true;
    f(i,0,n)v[i]=v1[i];
    v[1]=x+1;
    f(i,2,n){
        if(abs(d-(v[i]-v[i-1]))>1){

            f=false;
            break;
        }
        s+=abs(d-(v[i]-v[i-1]));
        v[i]=v[i-1]+d;
    }
    if(f)ans=min(s,ans);
    d=a2-b1;
    s=1;
    f(i,0,n)v[i]=v1[i];
    v[1]=x-1;
    f=true;
    f(i,2,n){
        if(abs(d-(v[i]-v[i-1]))>1){

            f=false;
            break;
        }
        s+=abs(d-(v[i]-v[i-1]));
        v[i]=v[i-1]+d;
    }
    if(f)ans=min(s,ans);
    d=b2-b1;
    s=0;
    f=true;
    f(i,0,n)v[i]=v1[i];
    v[1]=x;
    f(i,2,n){
        if(abs(d-(v[i]-v[i-1]))>1){

            f=false;
            break;
        }
        s+=abs(d-(v[i]-v[i-1]));
        v[i]=v[i-1]+d;
    }
    if(f)ans=min(s,ans);
    d=c2-b1;
    s=1;
    f=true;
    f(i,0,n)v[i]=v1[i];
    v[1]=x+1;
    f(i,2,n){
        if(abs(d-(v[i]-v[i-1]))>1){

            f=false;
            break;
        }
        s+=abs(d-(v[i]-v[i-1]));
        v[i]=v[i-1]+d;
    }
    if(f)ans=min(s,ans);
    d=a2-c1;
    s=2;
    f=true;
    f(i,0,n)v[i]=v1[i];
    v[1]=x-1;
    f(i,2,n){
        if(abs(d-(v[i]-v[i-1]))>1){

            f=false;
            break;
        }
        s+=abs(d-(v[i]-v[i-1]));
        v[i]=v[i-1]+d;
    }
    if(f)ans=min(s,ans);
    d=b2-c1;
    s=1;
    f=true;
    f(i,0,n)v[i]=v1[i];
    v[1]=x;
    f(i,2,n){
        if(abs(d-(v[i]-v[i-1]))>1){

            f=false;
            break;
        }
        s+=abs(d-(v[i]-v[i-1]));
        v[i]=v[i-1]+d;
    }
    if(f)ans=min(s,ans);
    d=c2-c1;
    s=2;
    f=true;
    f(i,0,n)v[i]=v1[i];
    v[1]=x+1;
    f(i,2,n){
        if(abs(d-(v[i]-v[i-1]))>1){

            f=false;
            break;
        }
        s+=abs(d-(v[i]-v[i-1]));
        v[i]=v[i-1]+d;
    }
    if(f)ans=min(s,ans);
    if(ans==intmax)cout<<-1<<endl;
    else cout<<ans<<endl;
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