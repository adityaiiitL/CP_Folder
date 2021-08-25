#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void convert(string s){

    if(s.size()==0){

        return;
    }
    if(s[0]=='p'&&s[1]=='a'&&s[2]=='r'&&s[3]=='t'&&s[4]=='y'){

        cout<<"pawri";
        convert(s.substr(5));
    }
    else {
        cout<<s[0];
        convert(s.substr(1));
    }
}
void solve(){

    string s;
    cin>>s;
    convert(s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}