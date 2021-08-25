#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n,m;
    cin>>n>>m;
    vector<li>v(n);
    map<li,li>mp;
    for(li i=1;i<=m;i++)mp[i]++;
    for(li i=0;i<n;i++){
        
        cin>>v[i];
        mp[v[i]]++;
    }
    for(auto i:mp){

        if(i.second==1){

            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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