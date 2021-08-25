#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
// Recursion from Backwards
void reverse(string s,li n){

    if(n==-1)return;
    cout<<s[n];
    reverse(s,n-1);
}
// Recursion from Front
void reverse_alt(string s,li i,li n){

    if(i==n)return;
    reverse_alt(s,i+1,n);
    cout<<s[i];   
}
void solve(){

    string s;
    cin>>s;
    reverse(s,s.size()-1);
    cout<<endl;
    reverse_alt(s,0,s.size());
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}