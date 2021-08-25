#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void solve(){
    
    lli n;
    cin>>n;
    vector<lli>v(n);
    lli sum=0;
    for(lli i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    lli x,y,z,mn=x;
    cin>>x>>y>>z;
    mn=min(x,y);
    mn=min(y,z);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}