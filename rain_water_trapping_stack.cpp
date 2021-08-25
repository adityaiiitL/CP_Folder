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
    vec v(n),left(n),right(n);
    in(v);
    left[0]=v[0];
    right[n-1]=v[n-1];
    f(i,1,n){
        left[i]=max(v[i],left[i-1]);
    }
    fr(i,n-2,0){
        right[i]=max(v[i],right[i+1]);
    }
    lli sum=0;
    f(i,0,n){
        sum+=min(left[i],right[i])-v[i];
    }
    cout<<sum<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}