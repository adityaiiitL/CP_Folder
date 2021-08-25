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
lli func(lli k,lli m,lli n){

    if(k>=m){
        return (k-m)/n+(k-m)%n;
    }
    
}
void solve(){
    
    lli n,m,k;
    cin>>k>>m>>n;
    cout<<func(k,m,n)<<endl;
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