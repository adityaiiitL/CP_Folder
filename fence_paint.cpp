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
// YES
// 1
// YES
// 2 2
// YES
// 1 1 1
// YES
// 2 1 9 5 9
// NO
// NO
void solve(){

    lli n,m;
    cin>>n>>m;
    stack<lli>s[n+1],r[n+1];
    vec a(n),b(n),c(m);
    in(a),in(b),in(c);
    mi mp,check;
    stk st;
    f(i,0,n){
        if(a[i]!=b[i]){
            mp[b[i]]++;
            s[b[i]].push(i+1);
            check[b[i]]++;
            continue;
        }
        r[b[i]].push(i+1);
        check[b[i]]++;
    }
    // debugp(mp);
    stk temp;
    fr(i,m-1,0)if(check[c[i]])temp.push(c[i]);
    mi mq;
    f(i,0,m){
        mq[c[i]]++;
        if(s[c[i]].size()==0){
            st.push(r[temp.top()].top());
        }
    }
    for(auto i:mp){
        if(mq[i.first]<i.second){
            nah;
            fo;
        }
    }
    f(i,0,st.size())cout<<st.top()<<endl,st.pop();
    vec ans;
    // f(i,0,m){
    //     if(s[c[i]].size()){
    //         ans.pb(s[c[i]].top());
    //         s[c[i]].pop();
    //     }
    //     else{
    //         ans.pb(st.top());
    //         // st.pop();
    //     }
    // }
    yeah;
    out(ans);

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    lli t;
    cin>>t;
    while(t--){
        solve();
    }
    fo 0;
}