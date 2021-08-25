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
// 1 1 1 1 1 0 0
// 0 1 1 1 1 1 0

// 1 1 1 1 0 1 0
// 1 1 1 1 0 0 1
// 1 1 1 0 1 0 1
// 1 1 1 0 0 1 1
// 1 1 0 1 0 1 1
// 1 1 0 0 1 1 1
// 1 0 1 0 1 1 1
// 1 0 0 1 1 1 1
// 0 1 0 1 1 1 1
void solve(){

    lli n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    lli sum=0,j=0;
    f(i,0,n){

        if(s[i]=='0' and i==0){
            j++;
            continue;
        }
        if(s[i]=='0'){

            if(i-j<=k){

                s[i]='1';
                // s.insert(s.begin()+i,'1');
                s[j]='0';
                k-=(i-j);
                j++;
            }
            else{

                s[i]='1';
                // s.insert(s.begin()+i,'1');
                s[i-k]='0';
                break;
            }
        }
    }
    cout<<s<<endl;
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