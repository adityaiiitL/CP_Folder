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

    li n;
    cin>>n;
    vector<li>v(n);
    map<li,li>m;
    for(li i=0;i<n;i++){

        cin>>v[i];
        m[v[i]]++;
    }
    li ans;
    for(auto i:m){
        if(i.second!=n-1){
            ans=i.first;
            break;
        }
    }
    for(li i=0;i<n;i++){
        if(v[i]==ans){
            cout<<i+1<<endl;
            return;
        }
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