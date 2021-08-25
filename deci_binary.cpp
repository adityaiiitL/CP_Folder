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

    string s;
    cin>>s;
    li mx=INT_MIN;
    for(li i=0;i<s.size();i++){

        li temp=s[i]-'0';
        mx=max(mx,temp);
    }
    cout<<mx<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}