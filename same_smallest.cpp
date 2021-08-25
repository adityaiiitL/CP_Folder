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
    li imp=stoi(s);
    li mn=INT_MAX;
    while(next_permutation(s.begin(),s.end())){

        li temp=stoi(s);
        mn=min(temp,mn);
        // cout<<s<<endl;
    }
    if(mn==INT_MAX){
        cout<<-1<<endl;
    }
    else cout<<mn<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}