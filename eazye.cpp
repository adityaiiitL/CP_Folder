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

    lli n,m,a,d;
    cin>>n>>m>>a>>d;
    vector<lli>v(m);
    for(lli i=0;i<m;i++)cin>>v[i];
    for(lli i=1;i<=n;i++){

        lli sum=0;
        for(lli j=0;j<m;j++){

            sum+=v[i]*pow()
        }
    }   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}