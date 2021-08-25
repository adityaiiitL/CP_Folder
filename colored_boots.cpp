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
stack<lli>pos[300001];
stk pos1;
stk pos2;
stk last;
void solve(){

    lli n;
    cin>>n;
    string l,r;
    cin>>l>>r;
    vector<pair<lli,lli>>ans;
    map m;
    f(i,0,n){
        if(l[i]=='?')continue;
        lli t=l[i]-'0';
        pos[t].push(i);
        m[t]++;
    }
    map mp1,mp2;
    f(i,0,n){

        if(r[i]=='?')continue;
        lli t=r[i]-'0';
        if(m[t]>0){

            lli x=pos[t].top();
            lli y=i;
            ans.pb(mp(x+1,y+1));
            pos[t].pop();
            m[t]--;
            mp1[x]++,mp2[y]++;
        }
    }
    f(i,0,n){
        if(mp2[i]==0)pos2.push(i);
    }
    f(i,0,n){

        if(l[i]=='?' and mp1[i]==0){

            if(pos2.size()==0)break;
            lli x=pos2.top()+1,y=i+1;
            ans.pb(mp(y,x));
            pos2.pop();
            mp1[y-1]++;
            mp2[x-1]++;
        }
    }
    f(i,0,n){
        if(mp1[i]==0)pos1.push(i);
    }
    f(i,0,n){

        if(r[i]=='?' and mp2[i]==0){

            if(pos1.size()==0)break;
            lli x=pos1.top()+1,y=i+1;
            ans.pb(mp(x,y));
            pos1.pop();
            mp1[x-1]++;
            mp2[y-1]++;
        }
    }
    cout<<ans.size()<<endl;
    debugp(ans);
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