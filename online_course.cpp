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
    // lli mx=INT_MIN;
    lli sum=0;
    for(lli i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        // mx=max(mx,v[i]);
    }
    lli n1=0,n2=0,sum1=0;
    sort(v.begin(),v.end());
    for(lli i=0;i<n-1;i++){

        sum1+=v[i];
    }
    if(sum1<v[n-1])cout<<2*v[n-1]<<endl;
    else cout<<sum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}