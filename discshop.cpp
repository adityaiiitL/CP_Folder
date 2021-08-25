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
    if(n<10){
        cout<<n<<endl;
        return;
    }
    string s=to_string(n);
    lli mn=INT_MAX;
    for(lli i=0;i<s.size();i++){

        string k=s;
        k.erase(i,1);
        // cout<<k<<endl;
        lli temp=stoll(k);
        mn=min(mn,temp);
    }
    cout<<mn<<endl;
}
signed main()
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