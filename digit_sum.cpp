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
    li sum=0;
    for(li i=0;i<s.size();i++){

        li temp=s[i]-'0';
        sum+=temp;
    }
    cout<<sum<<endl;
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