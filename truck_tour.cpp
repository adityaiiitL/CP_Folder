#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define ld long double
#define lli long long int
#define f(i,k,n) for(lli i=k;i<n;i++)
#define fr(i,k,n) for(lli i=k;i>=n;i--)
#define pb(k) push_back(k)
#define map map<lli,lli>
#define vec vector<lli>
#define stk stack<lli>
#define endl '\n'
void in(vec &v){
    f(i,0,v.size())cin>>v[i];
}
void out(vec v){
    f(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl;
}
void solve(){

    lli n;
    cin >> n;
    lli tank = 0;
    lli pump = 0;
    for (lli i = 0; i < n; ++i)
    {
        lli ltr,km;
        cin >> ltr >> km;
        tank += ltr - km;
        if (tank < 0)
        {
            pump = i + 1;
            tank = 0;
        }
    }
    cout << pump << endl;

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}