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

void solve(){

    lli n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>v(26);
    map<char,lli>m;
    f(i,0,n)m[s[i]]++;
    f(i,0,26){
        v[i]='a'+i;
        if(m[v[i]]==0){
            cout<<v[i]<<endl;
            fo;
        }
    }
    // debug(v);
    string ans1="aa",ans2="aaa";
    map<string,lli>m1,m2;
    f(i,0,n-1){

        string x;
        x.pb(s[i]);
        x.pb(s[i+1]);
        m1[x]++;
    }
    f(i,0,n-2){

        string x;
        x.pb(s[i]);
        x.pb(s[i+1]);
        x.pb(s[i+2]);
        m2[x]++;
    }
    lli t=26*26,i=1;
    while(t--){

        if(m1[ans1]==0){
            cout<<ans1<<endl;
            fo;
        }
        if(ans1[i]=='z'){
            ans1[i]-=26;
            ans1[i-1]++;
        }
        ans1[i]++;
    }
    t=26*26*26,i=2;
    while(t--){

        if(m2[ans2]==0){
            cout<<ans2<<endl;
            fo;
        }
        if(ans2[i]=='z' and ans2[1]=='z'){
            ans2[0]++;
            ans2[i]='a';
            ans2[i-1]='a';
            continue;
        }
        if(ans2[i]=='z'){
            ans2[i-1]++;
            ans2[i]-=26;
        }
        ans2[i]++;
    }
    // char c='z'-25;
    // cout<<c<<endl;

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