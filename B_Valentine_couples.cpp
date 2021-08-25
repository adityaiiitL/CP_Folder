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
    vector<lli>b(n),g(n);
    for(lli i=0;i<n;i++)cin>>b[i];
    for(lli i=0;i<n;i++)cin>>g[i];
    sort(b.begin(),b.end());
    sort(g.begin(),g.end(),greater<lli>());
    lli mx=0;
    for(lli i=0;i<n;i++){

        mx=max(mx,b[i]+g[i]);
    }
    cout<<mx<<endl;

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