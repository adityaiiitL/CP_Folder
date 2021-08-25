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
    
    lli n,x;
    cin>>n>>x;
    map<lli,lli>m;
    for(lli i=0;i<n;i++){
        lli h;
        cin>>h;
        m[h]++;
    }
    lli sum=0;
    for(auto i:m){

        if(i.second>1){
            sum+=i.second-1;
        }
    }
    if(sum>=x){
        cout<<m.size()<<endl;
    }
    else{
        cout<<m.size()-(x-sum)<<endl;
    }
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