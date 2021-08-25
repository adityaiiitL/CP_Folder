#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define endl 
// Plus-Minus approach...
void solve()
{
    string s;
    cin>>s;
    int count=0;
    for(li i=0;i<s.size();i++){
        if(s[i]=='(')count++;
        if(count==0&&s[i]==')'){
            cout<<"Invalid sequence !!\n";
            return;
        }
        if(s[i]==')')count--;
    }
    if(count==0)cout<<"Valid sequence !!\n";
    else cout<<"Invalid sequence !!\n";
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