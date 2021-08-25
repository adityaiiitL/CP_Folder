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

    string s;
    cin>>s;
    stack<li>st;
    li count=0;
    for(li i=0;i<s.size();i++){

        if(s[i]==')'&&st.size()==0){

            cout<<"NO\n";
            return;
        }
        if(s[i]=='(')st.push(1);
        if(s[i]==')')st.pop();
    }
    if(st.size()==0)cout<<"YES\n";
    else cout<<"NO\n";
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