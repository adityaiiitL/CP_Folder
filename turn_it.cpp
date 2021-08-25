#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    ld u,v,a,s;
    cin>>u>>v>>a>>s;
    ld vel=sqrt(u*u-2*a*s);
    if(vel>v)cout<<"No\n";
    else cout<<"Yes\n";
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