#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define pb(k) push_back(k)
#define map map<lli,lli>
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
    vec v(n);
    in(v);
    map m;
    f(i,0,n){
        m[v[i]]++;
    }
    for(auto i:m){

        cout<<i.first<<" ";
        i.second--;
    }
    for(auto i:m){

        if(i.second>1){

            while(i.second!=1){
                cout<<i.first<<" ";
                i.second--;
            }
        }
    }
    cout<<endl;

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
    return 0;
}