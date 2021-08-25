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

void solve(){

    lli n,m;
    cin>>n>>m;
    string x,y;
    if(m==0){
        if(n==1)cout<<0<<' '<<0<<endl;
        else cout<<-1<<' '<<-1<<endl;
        fo;
    }
    if(m>9*n){
        cout<<-1<<' '<<-1<<endl;
        fo;
    }
    if(m==1){
        x.pb('1');
        f(i,0,n-1)x.pb('0');
        cout<<x<<' '<<x<<endl;
        fo;
    }
    x.pb('1');
    f(i,0,n-1)x.pb('0');
    y.pb('1');
    f(i,0,n-1)y.pb('0');
    // cout<<x<<' '<<y<<endl;
    lli i=0,j=9,s=0;
    while(1){
        if(s==m)break;
        if(s+j>m)j--;
        else{
            x[i]=j+'0';
            s+=j;
            i++;
        }
    }
    s=1;
    i=y.size()-1,j=9;
    while(1){
        if(s==m)break;
        if(s+j>m)j--;
        else{
            lli temp=y[i]-'0';
            y[i]=temp+j+'0';
            s+=j;
            i--;
        }
    }
    // cout<<x<<' '<<y<<endl;
    lli s1=0,s2=0;
    f(i,0,x.size()){
        s1+=x[i]-'0';
        s2+=y[i]-'0';
    }
    if(s1==m and s2==m)cout<<y<<' '<<x<<endl;
    else cout<<-1<<' '<<-1<<endl;
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
    // cin>>=1t;
    while(t--){
        solve();
    }
    fo 0;
}