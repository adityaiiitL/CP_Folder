#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
void solve()
{
    string s;
    cin>>s;
    char k1=s[0],k2='a',k3;
    for(li i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1]&&s[i-1]=='(')s[i]=')';
        else if(s[i]!=s[i-1]&&s[i-1]==')')s[i]='(';
        else if(s[i]==s[i-1])s[i]=s[i-1];
    }
    /*
    stack<li>st;
    for(li i=0;i<s.size();i++){
        if(s[i]=='(')st.push(i);
        if(st.size()==0&&s[i]==')'){
            cout<<"NO\n";
            return;
        }
        if(s[i]==')')st.pop();
    }
    if(st.size()==0)cout<<"YES\n";
    else cout<<"NO\n";
    */
   cout<<s<<endl;
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