#include<bits/stdc++.h>
using namespace std;
#define li long int
#define lli long long int
#define ld long double
void solve(){

    string s;
    cin>>s;
    li n=s.size();
    bool flag=false;
    for(li i=0;i<n-4;i++){

        if(s[i]=='p'&&s[i+1]=='a'&&s[i+2]=='r'&&s[i+3]=='t'&&s[i+4]=='y'){
            s[i]='p';
            s[i+1]='a';
            s[i+2]='w';
            s[i+3]='r';
            s[i+4]='i';
            i+=4;
        }
    }
    cout<<s<<"\n";
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