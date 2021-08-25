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
    vector<lli>even,odd;
    for(lli i=0;i<n;i++){

        lli h;
        cin>>h;
        if(h%2==0)even.push_back(h);
        else odd.push_back(h);
    }
    for(lli i=0;i<even.size();i++)cout<<even[i]<<" ";
    for(lli i=0;i<odd.size();i++)cout<<odd[i]<<" ";
    cout<<endl;
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