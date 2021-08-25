#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define lli long long int
#define ld long double
#define f(i,k,n) for(lli i=k;i<n;i++)
#define endl '\n'
void solve(){

    lli n;
    cin>>n;
    if(n<2050||n%2050!=0){
        cout<<-1<<endl;
        return;
    }
    lli temp=n/2050;
    string s=to_string(temp);
    lli sum=0;
    f(i,0,s.size()){
        lli h=s[i]-'0';
        sum+=h;
    }
    cout<<sum<<endl;
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