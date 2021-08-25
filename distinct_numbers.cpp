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

    li n;
    cin>>n;
    // map<li,li>m;
    set<li>s;
    for(li i=0;i<n;i++){

        li h;
        cin>>h;
        s.insert(h);
    }
    cout<<s.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}