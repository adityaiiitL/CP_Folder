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

    li n,k;
    cin>>n>>k;
    multiset<li>s;
    for(li i=0;i<n;i++){

        li h;
        cin>>h;
        s.insert(h);
    }
    li count=0;
    for(li i=1;i<=k;i++){

        auto it=s.end();
        it--;
        count+=(*it);
        s.erase(it);
        s.insert((*it)/2);

    }
    cout<<count<<endl;
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