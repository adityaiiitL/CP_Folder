#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define li long int
#define lli long long int
#define ld long double
void solve(){

    lli n,m;
    cin>>n>>m;
    map<lli,lli>mp;
    for(lli i=0;i<n;i++){

        lli h;
        cin>>h;
        mp[h]++;
    }
    for(lli i=0;i<m;i++){

        lli h;
        cin>>h;
        if(mp[h]>=1){

            cout<<"YES"<<endl;
            // mp[h]--;
        }
        else{
            cout<<"NO"<<endl;
        }
        mp[h]++;
    }

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