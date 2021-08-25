#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#define mdl 1000000007
#define mdl2 998244353
#define li long int
#define lli long long int
#define ld long double
#define f(i,k,n) for(lli i=k;i<n;i++)
#define endl '\n'
void solve(){

    string s;
    cin>>s;
    stack<int>st;
    for(int i=0;i<s.size();i++){

        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }
        else if((s[i]==')'||s[i]==']'||s[i]=='}')&&st.size()==0){
            cout<<"NO"<<endl;
            return;
        }
        else if((s[i]==')'&&st.top()=='(')||(s[i]==']'&&st.top()=='[')||(s[i]=='}'&&st.top()=='{')){
            st.pop();
        }
        // else{
        //     cout<<"NO"<<endl;
        //     return;
        // }
    }
    if(st.size()==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}