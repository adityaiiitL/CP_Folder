#include<bits/stdc++.h>
using namespace std;
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//~~Author: Aditya_Agrawal_2002~~//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
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

vector<vector<lli>>subsets;
void gen(vec &v,lli i,vec &subset){

    if(i==v.size()){
        subsets.pb(subset);
        return;
    }
    // Ignored the ith-element!
    gen(v,i+1,subset);
    // Took the ith-element!
    subset.pb(v[i]);
    gen(v,i+1,subset);
    subset.pop_back();

}
void solve(){

    lli n;
    cin>>n;
    vec v(n);
    in(v);
    vec subset;
    gen(v,0,subset);
    for(auto subset:subsets){
        if(subset.size()==0){
            continue;
        }
        for(auto i:subset){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}