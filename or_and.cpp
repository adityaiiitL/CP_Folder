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
    lli temp=v[0];
    for(lli i=0;i<n;i++){
        cin>>v[i];
        if(i!=0)temp=temp&v[i];
    }
    while(q--){

        lli x,v;
        cin>>x>>v;

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