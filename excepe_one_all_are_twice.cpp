#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    li n;
    cin>>n;
    vector<li>v(n);
    for(li i=0;i<n;i++)cin>>v[i];
    li ar_xor=0;
    for(li i=0;i<n;i++)ar_xor^=v[i];
    cout<<ar_xor<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}