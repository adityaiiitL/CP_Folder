#include<bits/stdc++.h>
using namespace std;
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
#define all(a) a.begin(),a.end()
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define mp(a,b) make_pair(a,b)
#define pb(k) push_back(k)
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
void solve(){

    lli n;
    cin>>n;
    vector<pair<lli,lli>>v,c;
    f(i,0,n){

        lli x,y;
        cin>>x>>y;
        v.pb(mp(x,y));
    }
    f(i,0,n){

        lli x,y;
        cin>>x>>y;
        c.pb(mp(x,y));
    }
    map<pair<lli,lli>,lli>m;
    for(auto i:v){

        for(auto j:c){

            lli x=i.first+j.first;
            lli y=i.second+j.second;
            m[mp(x,y)]++;
        }
    }
    lli mx=intmin,x,y;
    for(auto i:m){

        if(mx<i.second){

            mx=i.second;
            x=(i.first).first;
            y=(i.first).second;
        }
    }
    cout<<x<<" "<<y<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}