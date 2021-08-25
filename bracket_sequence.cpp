#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
// Stack-Method...
void solve()
{
    string s;
    cin>>s;
    stack<li>st;
    for(li i=0;i<s.size();i++){
        if(s[i]=='(')st.push(i);
        if(st.size()==0&&s[i]==')'){
            cout<<"Invalid squence\n";
            return;
        }
        if(s[i]==')')st.pop();
    }
    if(st.size()==0)cout<<"Valid sequence\n";
    else cout<<"Inavlid sequence\n";
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