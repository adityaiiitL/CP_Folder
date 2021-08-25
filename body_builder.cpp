#include<bits/stdc++.h>
using namespace std;
// #pragma GCC target ("avx2")
// #pragma GCC optimize ("O3")
// #pragma GCC optimize ("unroll-loops")
// #define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
#define endl '\n'
void solve(){
    
    lli n,r;
    cin>>n>>r;
    vector<lli>v1(n),v2(n);
    for(lli i=0;i<n;i++)cin>>v1[i];
    for(lli i=0;i<n;i++)cin>>v2[i];
    lli sum=v2[0],mx=v2[0];
    for(lli i=1;i<n;i++){

        sum-=r*(v1[i]-v1[i-1]);
        if(sum<0)sum=0;
        sum+=v2[i];
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
}
int main()
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