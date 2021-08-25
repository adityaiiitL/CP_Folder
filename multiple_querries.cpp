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
    
    lli n,q;
    cin>>n>>q;
    vector<lli>v(n);
    for(lli i=0;i<n;i++)cin>>v[i];
    vector<lli>v1(n),v2(n);
    v1[0]=v[0];v2[0]=v[0];
    for(lli i=1;i<n;i++){
        v1[i]=(i+1)*(v1[i-1]+v[i]);
        v2[i]=v2[i-1]+v[i];
    }
    while(q--){

        lli l,r;
        cin>>q>>r;
        
    }

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