#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void duplicate(string s){

    if(s.size()==0)return;
    if(s[0]==s[1]){

        duplicate(s.substr(1));
    }
    else{
        cout<<s[0];
        duplicate(s.substr(1));
    }
}
void solve(){

    string s;
    cin>>s;
    duplicate(s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}