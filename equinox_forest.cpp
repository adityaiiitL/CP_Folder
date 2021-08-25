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
    for(lli i=0;i<n;i++)cin>>v[i];
    lli ans=v[0];
    for(lli i=1;i<n;i++){

        ans=__gcd(v[i],ans);
        if(ans==1){
            cout<<1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
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