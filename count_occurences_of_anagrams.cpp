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
// #define map map<lli,lli>
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
// m[a]=3,m[b]=1
// y=2,c=0
// 
void solve(){

    string s,x;
    cin>>s>>x;
    sort(all(x));
    lli n=s.size(),k=x.size();
    map<char,lli>m,mp;
    f(i,0,k)m[x[i]]++,mp[x[i]]++;
    lli c=0;
    lli count=0,y=m.size();
    deque<lli>temp;
    f(i,0,n){

        if(mp[s[i]]>0){
            m[s[i]]--;
            if(m[s[i]]==0)count++;
        }
        temp.pb(s[i]);
        if(temp.size()==k){

            cout<<count<<endl;
            if(count==y){
                
                c++;
                // cout<<i<<endl;
            }
            // m[temp.front()]++;
            if(m[temp.front()]==0)count--;
            m[temp.front()]++;
            temp.pop_front();
        }
    }
    cout<<c<<endl;
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